#include "GEMCode/GEMValidation/interface/UpgradeL1MuMatcher.h"
#include "DataFormats/Math/interface/deltaR.h"
#include "DataFormats/Math/interface/deltaPhi.h"

#include "TLorentzVector.h"
#include <map>

UpgradeL1MuMatcher::UpgradeL1MuMatcher(CSCStubMatcher& csc,
                                       edm::EDGetTokenT<l1t::EMTFTrackCollection> &emtfTrackInputLabel_,
                                       edm::EDGetTokenT< BXVector<l1t::RegionalMuonCand> > & regionalMuonCandInputLabel_,
                                       edm::EDGetTokenT< BXVector<l1t::Muon> > & gmtInputLabel_)
  : BaseMatcher(csc.trk(), csc.vtx(), csc.conf(), csc.event(), csc.eventSetup())
  ,csc_stub_matcher_(&csc)
{
  const auto& tfTrack = conf().getParameter<edm::ParameterSet>("upgradeEmtfTrack");
  minBXEMTFTrack_ = tfTrack.getParameter<int>("minBX");
  maxBXEMTFTrack_ = tfTrack.getParameter<int>("maxBX");
  verboseEMTFTrack_ = tfTrack.getParameter<int>("verbose");
  deltaREMTFTrack_ = tfTrack.getParameter<double>("deltaR");
  runEMTFTrack_ = tfTrack.getParameter<bool>("run");

  const auto& regionalMuonCand = conf().getParameter<edm::ParameterSet>("upgradeEmtfCand");
  minBXRegMuCand_ = regionalMuonCand.getParameter<int>("minBX");
  maxBXRegMuCand_ = regionalMuonCand.getParameter<int>("maxBX");
  verboseRegMuCand_ = regionalMuonCand.getParameter<int>("verbose");
  deltaRRegMuCand_ = regionalMuonCand.getParameter<double>("deltaR");
  runRegMuCand_ = regionalMuonCand.getParameter<bool>("run");

  const auto& gmt = conf().getParameter<edm::ParameterSet>("upgradeGMT");
  minBXGMT_ = gmt.getParameter<int>("minBX");
  maxBXGMT_ = gmt.getParameter<int>("maxBX");
  verboseGMT_ = gmt.getParameter<int>("verbose");
  deltaRGMT_ = gmt.getParameter<double>("deltaR");
  runGMT_ = gmt.getParameter<bool>("run");

  //std::cout<<" UpgradeL1MuMatcher constructor" <<std::endl;
  clear();

  simPt = trk().momentum().pt();
  simEta = trk().momentum().eta();
  simPhi = trk().momentum().phi();
  simE = trk().momentum().E();
  simCharge = trk().charge();

  // tracks produced by EMEMTF
  edm::Handle<l1t::EMTFTrackCollection> hl1Tracks;
  if (runEMTFTrack_ and gemvalidation::getByToken(emtfTrackInputLabel_,hl1Tracks, event()))
    matchEmtfTrackToSimTrack(*hl1Tracks.product());
  else if ( runEMTFTrack_)
    std::cout  <<"failed readout EMTFTracks " << std::endl;

  edm::Handle<BXVector<l1t::RegionalMuonCand>> hRegMuonCand;
  if (runRegMuCand_ and gemvalidation::getByToken(regionalMuonCandInputLabel_,hRegMuonCand, event()))
    matchRegionalMuonCandToSimTrack(*hRegMuonCand.product());
  else if ( runRegMuCand_)
    std::cout  <<"failed readout RegionalMuonCand " << std::endl;

  edm::Handle<BXVector<l1t::Muon>> hGMT;
  if (gemvalidation::getByToken(gmtInputLabel_,hGMT, event()))
    matchGMTToSimTrack(*hGMT.product());
  else if ( runGMT_)
    std::cout  <<"failed readout GMT " << std::endl;
}

UpgradeL1MuMatcher::~UpgradeL1MuMatcher()
{
}

void
UpgradeL1MuMatcher::clear()
{
  bestTrack = NULL;
  bestGMT = NULL;
  tfTracks_.clear();
}

void
UpgradeL1MuMatcher::matchEmtfTrackToSimTrack(const l1t::EMTFTrackCollection& tracks)
{
  for (const auto& trk : tracks) {
    int nMatchingStubs = 0;
    int nMaxMatchingStubs = 0;
    if (verboseEMTFTrack_)
      std::cout <<"track BX "<< trk.BX()
                <<  " pt "<< trk.Pt()
                <<" eta "<< trk.Eta()
                <<" phi "<< emtf::deg_to_rad(trk.Phi_glob())
                <<" phi_local "<< emtf::deg_to_rad(trk.Phi_loc()) << std::endl;
    for (const auto& stub : trk.Hits()){
      const CSCCorrelatedLCTDigi& csc_stub = stub.CreateCSCCorrelatedLCTDigi();
      const CSCDetId& csc_id = stub.CSC_DetId();
      if (verboseEMTFTrack_) std::cout << "L1 " << csc_id << " " << csc_stub << " " << csc_stub_matcher_->cscLctsInChamber(csc_id.rawId()).size() << std::endl;
      for (const auto& sim_stub: csc_stub_matcher_->cscLctsInChamber(csc_id.rawId())){
        if (verboseEMTFTrack_) std::cout << "\tSIM " << csc_id << " " << sim_stub << std::endl;
        if (csc_stub == sim_stub) {
          nMatchingStubs++;
        }
      }
      if (nMatchingStubs>=2) {
        tfTracks_.push_back(new TFTrack(&trk));
        if (nMatchingStubs > nMaxMatchingStubs){
          bestTrack = new TFTrack(&trk);
          nMaxMatchingStubs = nMatchingStubs;
        }
      }
    }
  }
  if (verboseEMTFTrack_ and bestTrack){
    std::cout <<"all matched TFTrack size "<< tfTracks_.size() << std::endl;
    std::cout <<"best TFTrack ";  bestTrack->print();
  }
}

void UpgradeL1MuMatcher::matchRegionalMuonCandToSimTrack(const BXVector<l1t::RegionalMuonCand>& regMuCands)
{
  if (tfTracks_.size()  ==  0) return;
  float mindPtRel = 0.5;
  mindRRegMuCand = deltaRRegMuCand_;
  for (int bx = regMuCands.getFirstBX(); bx <= regMuCands.getLastBX(); bx++ ){
    if ( bx < minBXRegMuCand_ or bx > maxBXRegMuCand_) continue;
    for (auto cand = regMuCands.begin(bx); cand != regMuCands.end(bx); ++cand ){
      TFCand *L1Mu = new TFCand(&(*cand));
      L1Mu->print();

      L1Mu->setBx(bx);
      float pt = L1Mu->pt();
      float eta = L1Mu->eta();
      float phi = L1Mu->phi();
      if (verboseRegMuCand_) std::cout << "candidate regional muon " << pt << " "
                                       << eta << " " << phi << std::endl;
      for (const auto& trk : tfTracks_){
        if (verboseRegMuCand_) std::cout << "EMTF "<< trk->pt()  << " "
                                         << trk->eta() << " " << trk->phi() << std::endl;
        float dR = deltaR(trk->eta(), trk->phi(), eta, phi);
        float dPtRel = std::fabs(trk->pt() - pt)/pt;
        if (dR < deltaRRegMuCand_ and dPtRel < mindPtRel){
          L1Mu->setDR( dR );
          L1Mu->setGlobalPhi(trk->phi());
          L1Mu->setMatchedTFTrack( trk );
          regMuCands_.push_back(L1Mu);
        }
      }
      if (verboseRegMuCand_)
        L1Mu->print();
    }
  }
  for (const auto& cand : regMuCands_){
    float eta = cand->eta();
    float phi = cand->phi();
    float dR = deltaR(bestTrack->eta(), bestTrack->phi(), eta, phi);
    if (verboseRegMuCand_) std::cout << "EMTF dR " << dR << std::endl;
    if (dR < mindRRegMuCand){
      mindRRegMuCand = dR;
      bestRegMuCand = cand;
      if (verboseRegMuCand_){
        std::cout <<"bestRegMuCand "; bestRegMuCand->print();
      }
    }
  }
}

void UpgradeL1MuMatcher::matchGMTToSimTrack(const BXVector<l1t::Muon>& gmtCands)
{
  if (tfTracks_.size()  ==  0) return;
  float mindPtRel = 0.5;
  mindRGMT = deltaRGMT_;
  for (int bx = gmtCands.getFirstBX(); bx <= gmtCands.getLastBX(); bx++ ){
    if ( bx < minBXGMT_ or bx > maxBXGMT_) continue;
    for (auto cand = gmtCands.begin(bx); cand != gmtCands.end(bx); ++cand ){
      TFCand *L1Mu = new TFCand(&(*cand));
      L1Mu->setBx(bx);
      float pt = L1Mu->pt();
      float phi = L1Mu->phi() ;
      float eta = L1Mu->eta();
      for (const auto& trk : tfTracks_){
        float dR = deltaR(trk->eta(), trk->phi(), eta, phi);
        float dPtRel = std::fabs(trk->pt() - pt)/pt;
        if (dR < deltaRGMT_ and dPtRel < mindPtRel){
          L1Mu->setDR( dR );
          L1Mu->setMatchedTFTrack( trk );
          gmts_.push_back(L1Mu);
        }
      }
      if (verboseGMT_)
        L1Mu->print();
    }
  }
  for (const auto& cand : gmts_){
    float phi = cand->phi();
    float eta = cand->eta();
    float dR = deltaR(bestTrack->eta(), bestTrack->phi(), eta, phi);
    if (dR < mindRGMT){
      mindRGMT = dR;
      bestGMT = cand;
      if (verboseGMT_){
        std::cout <<"bestGMT "; bestGMT->print();
      }
    }
  }
}
