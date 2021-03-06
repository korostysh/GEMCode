void Eff_ME31_notALCTnotCLCT_Combined()
{
//=========Macro generated from canvas: c/c
//=========  (Fri Oct 11 07:50:53 2019) by ROOT version 6.14/09
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   c->SetHighLightColor(2);
   c->Range(1.6,0.42125,2.433333,1.0775);
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
   
   TH1F *base__110 = new TH1F("base__110","",25,1.7,2.4);
   base__110->SetMinimum(0.5);
   base__110->SetMaximum(1.025);
   base__110->SetLineStyle(0);
   base__110->SetMarkerStyle(20);
   base__110->GetXaxis()->SetTitle("True muon |#eta|");
   base__110->GetXaxis()->SetLabelFont(42);
   base__110->GetXaxis()->SetLabelOffset(0.007);
   base__110->GetXaxis()->SetLabelSize(0.05);
   base__110->GetXaxis()->SetTitleSize(0.06);
   base__110->GetXaxis()->SetTitleOffset(0.9);
   base__110->GetXaxis()->SetTitleFont(42);
   base__110->GetYaxis()->SetTitle("Efficiency");
   base__110->GetYaxis()->SetLabelFont(42);
   base__110->GetYaxis()->SetLabelOffset(0.007);
   base__110->GetYaxis()->SetLabelSize(0.05);
   base__110->GetYaxis()->SetTitleSize(0.06);
   base__110->GetYaxis()->SetTitleOffset(0.9);
   base__110->GetYaxis()->SetTitleFont(42);
   base__110->GetZaxis()->SetLabelFont(42);
   base__110->GetZaxis()->SetLabelOffset(0.007);
   base__110->GetZaxis()->SetLabelSize(0.05);
   base__110->GetZaxis()->SetTitleSize(0.06);
   base__110->GetZaxis()->SetTitleFont(42);
   base__110->Draw("");
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
      tex = new TLatex(0.2208,0.936,"Phase-2 Simulation");
tex->SetNDC();
   tex->SetTextFont(52);
   tex->SetTextSize(0.0456);
   tex->SetLineWidth(2);
   tex->Draw();
   
   TEfficiency * den_clone405 = new TEfficiency("den_clone","",25,1.7,2.4);
   
   den_clone405->SetConfidenceLevel(0.6826895);
   den_clone405->SetBetaAlpha(1);
   den_clone405->SetBetaBeta(1);
   den_clone405->SetWeight(1);
   den_clone405->SetStatisticOption(0);
   den_clone405->SetPosteriorMode(0);
   den_clone405->SetShortestInterval(0);
   den_clone405->SetTotalEvents(0,0);
   den_clone405->SetPassedEvents(0,0);
   den_clone405->SetTotalEvents(1,199);
   den_clone405->SetPassedEvents(1,44);
   den_clone405->SetTotalEvents(2,1045);
   den_clone405->SetPassedEvents(2,90);
   den_clone405->SetTotalEvents(3,1934);
   den_clone405->SetPassedEvents(3,24);
   den_clone405->SetTotalEvents(4,1973);
   den_clone405->SetPassedEvents(4,1);
   den_clone405->SetTotalEvents(5,1973);
   den_clone405->SetPassedEvents(5,5);
   den_clone405->SetTotalEvents(6,1905);
   den_clone405->SetPassedEvents(6,4);
   den_clone405->SetTotalEvents(7,1918);
   den_clone405->SetPassedEvents(7,8);
   den_clone405->SetTotalEvents(8,1906);
   den_clone405->SetPassedEvents(8,223);
   den_clone405->SetTotalEvents(9,1997);
   den_clone405->SetPassedEvents(9,296);
   den_clone405->SetTotalEvents(10,1962);
   den_clone405->SetPassedEvents(10,20);
   den_clone405->SetTotalEvents(11,1936);
   den_clone405->SetPassedEvents(11,5);
   den_clone405->SetTotalEvents(12,1940);
   den_clone405->SetPassedEvents(12,5);
   den_clone405->SetTotalEvents(13,1872);
   den_clone405->SetPassedEvents(13,3);
   den_clone405->SetTotalEvents(14,1829);
   den_clone405->SetPassedEvents(14,4);
   den_clone405->SetTotalEvents(15,1799);
   den_clone405->SetPassedEvents(15,3);
   den_clone405->SetTotalEvents(16,1916);
   den_clone405->SetPassedEvents(16,57);
   den_clone405->SetTotalEvents(17,1729);
   den_clone405->SetPassedEvents(17,181);
   den_clone405->SetTotalEvents(18,1822);
   den_clone405->SetPassedEvents(18,98);
   den_clone405->SetTotalEvents(19,1974);
   den_clone405->SetPassedEvents(19,4);
   den_clone405->SetTotalEvents(20,2010);
   den_clone405->SetPassedEvents(20,4);
   den_clone405->SetTotalEvents(21,1916);
   den_clone405->SetPassedEvents(21,7);
   den_clone405->SetTotalEvents(22,1949);
   den_clone405->SetPassedEvents(22,2);
   den_clone405->SetTotalEvents(23,1994);
   den_clone405->SetPassedEvents(23,8);
   den_clone405->SetTotalEvents(24,1950);
   den_clone405->SetPassedEvents(24,7);
   den_clone405->SetTotalEvents(25,1895);
   den_clone405->SetPassedEvents(25,11);
   den_clone405->SetTotalEvents(26,0);
   den_clone405->SetPassedEvents(26,0);
   den_clone405->SetFillColor(19);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ff0000");
   den_clone405->SetLineColor(ci);
   den_clone405->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   den_clone405->SetMarkerColor(ci);
   den_clone405->SetMarkerStyle(22);
   den_clone405->Draw("same samep");
   
   TEfficiency * den_clone406 = new TEfficiency("den_clone","",25,1.7,2.4);
   
   den_clone406->SetConfidenceLevel(0.6826895);
   den_clone406->SetBetaAlpha(1);
   den_clone406->SetBetaBeta(1);
   den_clone406->SetWeight(1);
   den_clone406->SetStatisticOption(0);
   den_clone406->SetPosteriorMode(0);
   den_clone406->SetShortestInterval(0);
   den_clone406->SetTotalEvents(0,0);
   den_clone406->SetPassedEvents(0,0);
   den_clone406->SetTotalEvents(1,201);
   den_clone406->SetPassedEvents(1,40);
   den_clone406->SetTotalEvents(2,1175);
   den_clone406->SetPassedEvents(2,85);
   den_clone406->SetTotalEvents(3,1773);
   den_clone406->SetPassedEvents(3,34);
   den_clone406->SetTotalEvents(4,1857);
   den_clone406->SetPassedEvents(4,4);
   den_clone406->SetTotalEvents(5,2022);
   den_clone406->SetPassedEvents(5,6);
   den_clone406->SetTotalEvents(6,1936);
   den_clone406->SetPassedEvents(6,8);
   den_clone406->SetTotalEvents(7,1885);
   den_clone406->SetPassedEvents(7,15);
   den_clone406->SetTotalEvents(8,1930);
   den_clone406->SetPassedEvents(8,218);
   den_clone406->SetTotalEvents(9,2006);
   den_clone406->SetPassedEvents(9,296);
   den_clone406->SetTotalEvents(10,1919);
   den_clone406->SetPassedEvents(10,22);
   den_clone406->SetTotalEvents(11,1948);
   den_clone406->SetPassedEvents(11,8);
   den_clone406->SetTotalEvents(12,1895);
   den_clone406->SetPassedEvents(12,6);
   den_clone406->SetTotalEvents(13,1940);
   den_clone406->SetPassedEvents(13,4);
   den_clone406->SetTotalEvents(14,1976);
   den_clone406->SetPassedEvents(14,6);
   den_clone406->SetTotalEvents(15,1915);
   den_clone406->SetPassedEvents(15,9);
   den_clone406->SetTotalEvents(16,1826);
   den_clone406->SetPassedEvents(16,62);
   den_clone406->SetTotalEvents(17,1724);
   den_clone406->SetPassedEvents(17,166);
   den_clone406->SetTotalEvents(18,1798);
   den_clone406->SetPassedEvents(18,92);
   den_clone406->SetTotalEvents(19,1915);
   den_clone406->SetPassedEvents(19,5);
   den_clone406->SetTotalEvents(20,1924);
   den_clone406->SetPassedEvents(20,4);
   den_clone406->SetTotalEvents(21,1930);
   den_clone406->SetPassedEvents(21,12);
   den_clone406->SetTotalEvents(22,1936);
   den_clone406->SetPassedEvents(22,11);
   den_clone406->SetTotalEvents(23,1955);
   den_clone406->SetPassedEvents(23,7);
   den_clone406->SetTotalEvents(24,1818);
   den_clone406->SetPassedEvents(24,13);
   den_clone406->SetTotalEvents(25,1891);
   den_clone406->SetPassedEvents(25,22);
   den_clone406->SetTotalEvents(26,0);
   den_clone406->SetPassedEvents(26,0);
   den_clone406->SetFillColor(19);

   ci = TColor::GetColor("#0000ff");
   den_clone406->SetLineColor(ci);
   den_clone406->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   den_clone406->SetMarkerColor(ci);
   den_clone406->SetMarkerStyle(21);
   den_clone406->Draw("same samep");
   
   TEfficiency * den_clone407 = new TEfficiency("den_clone","",25,1.7,2.4);
   
   den_clone407->SetConfidenceLevel(0.6826895);
   den_clone407->SetBetaAlpha(1);
   den_clone407->SetBetaBeta(1);
   den_clone407->SetWeight(1);
   den_clone407->SetStatisticOption(0);
   den_clone407->SetPosteriorMode(0);
   den_clone407->SetShortestInterval(0);
   den_clone407->SetTotalEvents(0,0);
   den_clone407->SetPassedEvents(0,0);
   den_clone407->SetTotalEvents(1,201);
   den_clone407->SetPassedEvents(1,41);
   den_clone407->SetTotalEvents(2,1175);
   den_clone407->SetPassedEvents(2,84);
   den_clone407->SetTotalEvents(3,1773);
   den_clone407->SetPassedEvents(3,33);
   den_clone407->SetTotalEvents(4,1857);
   den_clone407->SetPassedEvents(4,2);
   den_clone407->SetTotalEvents(5,2022);
   den_clone407->SetPassedEvents(5,4);
   den_clone407->SetTotalEvents(6,1936);
   den_clone407->SetPassedEvents(6,6);
   den_clone407->SetTotalEvents(7,1885);
   den_clone407->SetPassedEvents(7,15);
   den_clone407->SetTotalEvents(8,1930);
   den_clone407->SetPassedEvents(8,265);
   den_clone407->SetTotalEvents(9,2006);
   den_clone407->SetPassedEvents(9,340);
   den_clone407->SetTotalEvents(10,1919);
   den_clone407->SetPassedEvents(10,21);
   den_clone407->SetTotalEvents(11,1948);
   den_clone407->SetPassedEvents(11,6);
   den_clone407->SetTotalEvents(12,1895);
   den_clone407->SetPassedEvents(12,2);
   den_clone407->SetTotalEvents(13,1940);
   den_clone407->SetPassedEvents(13,1);
   den_clone407->SetTotalEvents(14,1976);
   den_clone407->SetPassedEvents(14,2);
   den_clone407->SetTotalEvents(15,1915);
   den_clone407->SetPassedEvents(15,7);
   den_clone407->SetTotalEvents(16,1826);
   den_clone407->SetPassedEvents(16,83);
   den_clone407->SetTotalEvents(17,1724);
   den_clone407->SetPassedEvents(17,222);
   den_clone407->SetTotalEvents(18,1798);
   den_clone407->SetPassedEvents(18,116);
   den_clone407->SetTotalEvents(19,1915);
   den_clone407->SetPassedEvents(19,3);
   den_clone407->SetTotalEvents(20,1924);
   den_clone407->SetPassedEvents(20,1);
   den_clone407->SetTotalEvents(21,1930);
   den_clone407->SetPassedEvents(21,6);
   den_clone407->SetTotalEvents(22,1936);
   den_clone407->SetPassedEvents(22,4);
   den_clone407->SetTotalEvents(23,1955);
   den_clone407->SetPassedEvents(23,3);
   den_clone407->SetTotalEvents(24,1818);
   den_clone407->SetPassedEvents(24,7);
   den_clone407->SetTotalEvents(25,1891);
   den_clone407->SetPassedEvents(25,15);
   den_clone407->SetTotalEvents(26,0);
   den_clone407->SetPassedEvents(26,0);
   den_clone407->SetFillColor(19);
   den_clone407->SetLineWidth(2);
   den_clone407->SetMarkerStyle(23);
   den_clone407->Draw("same samep");
   
   TEfficiency * den_clone408 = new TEfficiency("den_clone","",25,1.7,2.4);
   
   den_clone408->SetConfidenceLevel(0.6826895);
   den_clone408->SetBetaAlpha(1);
   den_clone408->SetBetaBeta(1);
   den_clone408->SetWeight(1);
   den_clone408->SetStatisticOption(0);
   den_clone408->SetPosteriorMode(0);
   den_clone408->SetShortestInterval(0);
   den_clone408->SetTotalEvents(0,0);
   den_clone408->SetPassedEvents(0,0);
   den_clone408->SetTotalEvents(1,61);
   den_clone408->SetPassedEvents(1,0);
   den_clone408->SetTotalEvents(2,394);
   den_clone408->SetPassedEvents(2,3);
   den_clone408->SetTotalEvents(3,662);
   den_clone408->SetPassedEvents(3,0);
   den_clone408->SetTotalEvents(4,748);
   den_clone408->SetPassedEvents(4,0);
   den_clone408->SetTotalEvents(5,777);
   den_clone408->SetPassedEvents(5,0);
   den_clone408->SetTotalEvents(6,643);
   den_clone408->SetPassedEvents(6,1);
   den_clone408->SetTotalEvents(7,686);
   den_clone408->SetPassedEvents(7,2);
   den_clone408->SetTotalEvents(8,554);
   den_clone408->SetPassedEvents(8,13);
   den_clone408->SetTotalEvents(9,569);
   den_clone408->SetPassedEvents(9,10);
   den_clone408->SetTotalEvents(10,682);
   den_clone408->SetPassedEvents(10,5);
   den_clone408->SetTotalEvents(11,658);
   den_clone408->SetPassedEvents(11,3);
   den_clone408->SetTotalEvents(12,703);
   den_clone408->SetPassedEvents(12,1);
   den_clone408->SetTotalEvents(13,694);
   den_clone408->SetPassedEvents(13,2);
   den_clone408->SetTotalEvents(14,646);
   den_clone408->SetPassedEvents(14,1);
   den_clone408->SetTotalEvents(15,723);
   den_clone408->SetPassedEvents(15,1);
   den_clone408->SetTotalEvents(16,611);
   den_clone408->SetPassedEvents(16,6);
   den_clone408->SetTotalEvents(17,513);
   den_clone408->SetPassedEvents(17,16);
   den_clone408->SetTotalEvents(18,634);
   den_clone408->SetPassedEvents(18,11);
   den_clone408->SetTotalEvents(19,731);
   den_clone408->SetPassedEvents(19,2);
   den_clone408->SetTotalEvents(20,654);
   den_clone408->SetPassedEvents(20,0);
   den_clone408->SetTotalEvents(21,684);
   den_clone408->SetPassedEvents(21,2);
   den_clone408->SetTotalEvents(22,736);
   den_clone408->SetPassedEvents(22,2);
   den_clone408->SetTotalEvents(23,686);
   den_clone408->SetPassedEvents(23,2);
   den_clone408->SetTotalEvents(24,736);
   den_clone408->SetPassedEvents(24,3);
   den_clone408->SetTotalEvents(25,602);
   den_clone408->SetPassedEvents(25,1);
   den_clone408->SetTotalEvents(26,0);
   den_clone408->SetPassedEvents(26,0);
   den_clone408->SetFillColor(19);

   ci = TColor::GetColor("#00cc00");
   den_clone408->SetLineColor(ci);
   den_clone408->SetLineWidth(2);

   ci = TColor::GetColor("#00cc00");
   den_clone408->SetMarkerColor(ci);
   den_clone408->SetMarkerStyle(23);
   den_clone408->Draw("same samep");
   
   TLegend *leg = new TLegend(0,0,0,0,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextFont(62);
   leg->SetTextSize(0.05);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(0);
   TLegendEntry *entry=leg->AddEntry("den_clone","PU0 CSC Run-2","pl");
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
   entry=leg->AddEntry("den_clone","PU300 CSC Phase-2","pl");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   leg->Draw();
   TText *text = new TText(0.17,0.17,"ME3/1");
   text->SetNDC();
   text->Draw();
   text = new TText(0.17,0.24,"notALCTnotCLCT");
   text->SetNDC();
   text->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
