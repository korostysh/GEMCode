void Eff_ME13_LCT_Combined()
{
//=========Macro generated from canvas: c/c
//=========  (Tue Oct  8 12:39:34 2019) by ROOT version 6.14/09
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   c->SetHighLightColor(2);
   c->Range(0.8714286,0.42125,1.109524,1.0775);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetTickx(1);
   c->SetTicky(1);
   c->SetLeftMargin(0.12);
   c->SetRightMargin(0.04);
   c->SetTopMargin(0.08);
   c->SetBottomMargin(0.12);
   c->SetFrameFillStyle(0);
   c->SetFrameBorderMode(0);
   c->SetFrameFillStyle(0);
   c->SetFrameBorderMode(0);
   
   TH1F *base__25 = new TH1F("base__25","",25,0.9,1.1);
   base__25->SetMinimum(0.5);
   base__25->SetMaximum(1.025);
   base__25->SetLineStyle(0);
   base__25->SetMarkerStyle(20);
   base__25->GetXaxis()->SetTitle("True muon |#eta|");
   base__25->GetXaxis()->SetLabelFont(42);
   base__25->GetXaxis()->SetLabelOffset(0.007);
   base__25->GetXaxis()->SetLabelSize(0.05);
   base__25->GetXaxis()->SetTitleSize(0.06);
   base__25->GetXaxis()->SetTitleOffset(0.9);
   base__25->GetXaxis()->SetTitleFont(42);
   base__25->GetYaxis()->SetTitle("Efficiency");
   base__25->GetYaxis()->SetLabelFont(42);
   base__25->GetYaxis()->SetLabelOffset(0.007);
   base__25->GetYaxis()->SetLabelSize(0.05);
   base__25->GetYaxis()->SetTitleSize(0.06);
   base__25->GetYaxis()->SetTitleOffset(0.9);
   base__25->GetYaxis()->SetTitleFont(42);
   base__25->GetZaxis()->SetLabelFont(42);
   base__25->GetZaxis()->SetLabelOffset(0.007);
   base__25->GetZaxis()->SetLabelSize(0.05);
   base__25->GetZaxis()->SetTitleSize(0.06);
   base__25->GetZaxis()->SetTitleFont(42);
   base__25->Draw("");
   TLatex *   tex = new TLatex(0.96,0.936,"14 TeV");
tex->SetNDC();
   tex->SetTextAlign(31);
   tex->SetTextFont(42);
   tex->SetTextSize(0.048);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(0.12,0.936,"CMS");
tex->SetNDC();
   tex->SetTextFont(61);
   tex->SetTextSize(0.06);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(0.2208,0.936,"Simulation Preliminary");
tex->SetNDC();
   tex->SetTextFont(52);
   tex->SetTextSize(0.0456);
   tex->SetLineWidth(2);
   tex->Draw();
   
   TEfficiency * den_clone93 = new TEfficiency("den_clone","",25,0.9,1.1);
   
   den_clone93->SetConfidenceLevel(0.6826895);
   den_clone93->SetBetaAlpha(1);
   den_clone93->SetBetaBeta(1);
   den_clone93->SetWeight(1);
   den_clone93->SetStatisticOption(0);
   den_clone93->SetPosteriorMode(0);
   den_clone93->SetShortestInterval(0);
   den_clone93->SetTotalEvents(0,0);
   den_clone93->SetPassedEvents(0,0);
   den_clone93->SetTotalEvents(1,356);
   den_clone93->SetPassedEvents(1,286);
   den_clone93->SetTotalEvents(2,407);
   den_clone93->SetPassedEvents(2,386);
   den_clone93->SetTotalEvents(3,451);
   den_clone93->SetPassedEvents(3,446);
   den_clone93->SetTotalEvents(4,425);
   den_clone93->SetPassedEvents(4,425);
   den_clone93->SetTotalEvents(5,448);
   den_clone93->SetPassedEvents(5,448);
   den_clone93->SetTotalEvents(6,394);
   den_clone93->SetPassedEvents(6,393);
   den_clone93->SetTotalEvents(7,367);
   den_clone93->SetPassedEvents(7,367);
   den_clone93->SetTotalEvents(8,458);
   den_clone93->SetPassedEvents(8,449);
   den_clone93->SetTotalEvents(9,420);
   den_clone93->SetPassedEvents(9,413);
   den_clone93->SetTotalEvents(10,431);
   den_clone93->SetPassedEvents(10,426);
   den_clone93->SetTotalEvents(11,422);
   den_clone93->SetPassedEvents(11,421);
   den_clone93->SetTotalEvents(12,402);
   den_clone93->SetPassedEvents(12,401);
   den_clone93->SetTotalEvents(13,388);
   den_clone93->SetPassedEvents(13,387);
   den_clone93->SetTotalEvents(14,427);
   den_clone93->SetPassedEvents(14,424);
   den_clone93->SetTotalEvents(15,402);
   den_clone93->SetPassedEvents(15,395);
   den_clone93->SetTotalEvents(16,420);
   den_clone93->SetPassedEvents(16,405);
   den_clone93->SetTotalEvents(17,336);
   den_clone93->SetPassedEvents(17,329);
   den_clone93->SetTotalEvents(18,371);
   den_clone93->SetPassedEvents(18,370);
   den_clone93->SetTotalEvents(19,374);
   den_clone93->SetPassedEvents(19,373);
   den_clone93->SetTotalEvents(20,414);
   den_clone93->SetPassedEvents(20,413);
   den_clone93->SetTotalEvents(21,340);
   den_clone93->SetPassedEvents(21,340);
   den_clone93->SetTotalEvents(22,371);
   den_clone93->SetPassedEvents(22,370);
   den_clone93->SetTotalEvents(23,407);
   den_clone93->SetPassedEvents(23,404);
   den_clone93->SetTotalEvents(24,372);
   den_clone93->SetPassedEvents(24,369);
   den_clone93->SetTotalEvents(25,368);
   den_clone93->SetPassedEvents(25,356);
   den_clone93->SetTotalEvents(26,0);
   den_clone93->SetPassedEvents(26,0);
   den_clone93->SetFillColor(19);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ff0000");
   den_clone93->SetLineColor(ci);
   den_clone93->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   den_clone93->SetMarkerColor(ci);
   den_clone93->SetMarkerStyle(22);
   den_clone93->Draw("same samep");
   
   TEfficiency * den_clone94 = new TEfficiency("den_clone","",25,0.9,1.1);
   
   den_clone94->SetConfidenceLevel(0.6826895);
   den_clone94->SetBetaAlpha(1);
   den_clone94->SetBetaBeta(1);
   den_clone94->SetWeight(1);
   den_clone94->SetStatisticOption(0);
   den_clone94->SetPosteriorMode(0);
   den_clone94->SetShortestInterval(0);
   den_clone94->SetTotalEvents(0,0);
   den_clone94->SetPassedEvents(0,0);
   den_clone94->SetTotalEvents(1,327);
   den_clone94->SetPassedEvents(1,249);
   den_clone94->SetTotalEvents(2,407);
   den_clone94->SetPassedEvents(2,390);
   den_clone94->SetTotalEvents(3,389);
   den_clone94->SetPassedEvents(3,384);
   den_clone94->SetTotalEvents(4,457);
   den_clone94->SetPassedEvents(4,453);
   den_clone94->SetTotalEvents(5,403);
   den_clone94->SetPassedEvents(5,402);
   den_clone94->SetTotalEvents(6,415);
   den_clone94->SetPassedEvents(6,413);
   den_clone94->SetTotalEvents(7,410);
   den_clone94->SetPassedEvents(7,405);
   den_clone94->SetTotalEvents(8,460);
   den_clone94->SetPassedEvents(8,452);
   den_clone94->SetTotalEvents(9,371);
   den_clone94->SetPassedEvents(9,366);
   den_clone94->SetTotalEvents(10,403);
   den_clone94->SetPassedEvents(10,400);
   den_clone94->SetTotalEvents(11,424);
   den_clone94->SetPassedEvents(11,422);
   den_clone94->SetTotalEvents(12,371);
   den_clone94->SetPassedEvents(12,369);
   den_clone94->SetTotalEvents(13,397);
   den_clone94->SetPassedEvents(13,395);
   den_clone94->SetTotalEvents(14,428);
   den_clone94->SetPassedEvents(14,422);
   den_clone94->SetTotalEvents(15,380);
   den_clone94->SetPassedEvents(15,374);
   den_clone94->SetTotalEvents(16,396);
   den_clone94->SetPassedEvents(16,385);
   den_clone94->SetTotalEvents(17,362);
   den_clone94->SetPassedEvents(17,351);
   den_clone94->SetTotalEvents(18,374);
   den_clone94->SetPassedEvents(18,374);
   den_clone94->SetTotalEvents(19,419);
   den_clone94->SetPassedEvents(19,416);
   den_clone94->SetTotalEvents(20,400);
   den_clone94->SetPassedEvents(20,396);
   den_clone94->SetTotalEvents(21,399);
   den_clone94->SetPassedEvents(21,395);
   den_clone94->SetTotalEvents(22,364);
   den_clone94->SetPassedEvents(22,359);
   den_clone94->SetTotalEvents(23,365);
   den_clone94->SetPassedEvents(23,362);
   den_clone94->SetTotalEvents(24,369);
   den_clone94->SetPassedEvents(24,361);
   den_clone94->SetTotalEvents(25,357);
   den_clone94->SetPassedEvents(25,350);
   den_clone94->SetTotalEvents(26,0);
   den_clone94->SetPassedEvents(26,0);
   den_clone94->SetFillColor(19);

   ci = TColor::GetColor("#0000ff");
   den_clone94->SetLineColor(ci);
   den_clone94->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   den_clone94->SetMarkerColor(ci);
   den_clone94->SetMarkerStyle(21);
   den_clone94->Draw("same samep");
   
   TEfficiency * den_clone95 = new TEfficiency("den_clone","",25,0.9,1.1);
   
   den_clone95->SetConfidenceLevel(0.6826895);
   den_clone95->SetBetaAlpha(1);
   den_clone95->SetBetaBeta(1);
   den_clone95->SetWeight(1);
   den_clone95->SetStatisticOption(0);
   den_clone95->SetPosteriorMode(0);
   den_clone95->SetShortestInterval(0);
   den_clone95->SetTotalEvents(0,0);
   den_clone95->SetPassedEvents(0,0);
   den_clone95->SetTotalEvents(1,327);
   den_clone95->SetPassedEvents(1,249);
   den_clone95->SetTotalEvents(2,407);
   den_clone95->SetPassedEvents(2,390);
   den_clone95->SetTotalEvents(3,389);
   den_clone95->SetPassedEvents(3,384);
   den_clone95->SetTotalEvents(4,457);
   den_clone95->SetPassedEvents(4,453);
   den_clone95->SetTotalEvents(5,403);
   den_clone95->SetPassedEvents(5,402);
   den_clone95->SetTotalEvents(6,415);
   den_clone95->SetPassedEvents(6,413);
   den_clone95->SetTotalEvents(7,410);
   den_clone95->SetPassedEvents(7,405);
   den_clone95->SetTotalEvents(8,460);
   den_clone95->SetPassedEvents(8,452);
   den_clone95->SetTotalEvents(9,371);
   den_clone95->SetPassedEvents(9,366);
   den_clone95->SetTotalEvents(10,403);
   den_clone95->SetPassedEvents(10,400);
   den_clone95->SetTotalEvents(11,424);
   den_clone95->SetPassedEvents(11,422);
   den_clone95->SetTotalEvents(12,371);
   den_clone95->SetPassedEvents(12,369);
   den_clone95->SetTotalEvents(13,397);
   den_clone95->SetPassedEvents(13,395);
   den_clone95->SetTotalEvents(14,428);
   den_clone95->SetPassedEvents(14,422);
   den_clone95->SetTotalEvents(15,380);
   den_clone95->SetPassedEvents(15,374);
   den_clone95->SetTotalEvents(16,396);
   den_clone95->SetPassedEvents(16,385);
   den_clone95->SetTotalEvents(17,362);
   den_clone95->SetPassedEvents(17,351);
   den_clone95->SetTotalEvents(18,374);
   den_clone95->SetPassedEvents(18,374);
   den_clone95->SetTotalEvents(19,419);
   den_clone95->SetPassedEvents(19,416);
   den_clone95->SetTotalEvents(20,400);
   den_clone95->SetPassedEvents(20,396);
   den_clone95->SetTotalEvents(21,399);
   den_clone95->SetPassedEvents(21,395);
   den_clone95->SetTotalEvents(22,364);
   den_clone95->SetPassedEvents(22,359);
   den_clone95->SetTotalEvents(23,365);
   den_clone95->SetPassedEvents(23,362);
   den_clone95->SetTotalEvents(24,369);
   den_clone95->SetPassedEvents(24,361);
   den_clone95->SetTotalEvents(25,357);
   den_clone95->SetPassedEvents(25,350);
   den_clone95->SetTotalEvents(26,0);
   den_clone95->SetPassedEvents(26,0);
   den_clone95->SetFillColor(19);
   den_clone95->SetLineWidth(2);
   den_clone95->SetMarkerStyle(23);
   den_clone95->Draw("same samep");
   
   TLegend *leg = new TLegend(0,0,0,0,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextFont(62);
   leg->SetTextSize(0.05);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(0);
   TLegendEntry *entry=leg->AddEntry("den_clone","PU0      CSC Run-2","pl");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("den_clone","PU200 CSC Run-2","pl");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("den_clone","PU200 CSC Phase-2","pl");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   leg->Draw();
   TText *text = new TText(0.17,0.17,"ME1/3");
   text->SetNDC();
   text->Draw();
   text = new TText(0.17,0.24,"LCT");
   text->SetNDC();
   text->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
