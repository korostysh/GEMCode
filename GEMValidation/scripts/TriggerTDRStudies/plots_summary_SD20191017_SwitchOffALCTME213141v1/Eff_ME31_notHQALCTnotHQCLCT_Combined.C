void Eff_ME31_notHQALCTnotHQCLCT_Combined()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Oct 17 16:28:23 2019) by ROOT version 6.14/09
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   c->SetHighLightColor(2);
   c->Range(1.6,-0.15375,2.433333,1.1275);
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
   
   TH1F *base__122 = new TH1F("base__122","",25,1.7,2.4);
   base__122->SetMinimum(0);
   base__122->SetMaximum(1.025);
   base__122->SetLineStyle(0);
   base__122->SetMarkerStyle(20);
   base__122->GetXaxis()->SetTitle("True muon |#eta|");
   base__122->GetXaxis()->SetLabelFont(42);
   base__122->GetXaxis()->SetLabelOffset(0.007);
   base__122->GetXaxis()->SetLabelSize(0.05);
   base__122->GetXaxis()->SetTitleSize(0.06);
   base__122->GetXaxis()->SetTitleOffset(0.9);
   base__122->GetXaxis()->SetTitleFont(42);
   base__122->GetYaxis()->SetTitle("Efficiency");
   base__122->GetYaxis()->SetLabelFont(42);
   base__122->GetYaxis()->SetLabelOffset(0.007);
   base__122->GetYaxis()->SetLabelSize(0.05);
   base__122->GetYaxis()->SetTitleSize(0.06);
   base__122->GetYaxis()->SetTitleOffset(0.9);
   base__122->GetYaxis()->SetTitleFont(42);
   base__122->GetZaxis()->SetLabelFont(42);
   base__122->GetZaxis()->SetLabelOffset(0.007);
   base__122->GetZaxis()->SetLabelSize(0.05);
   base__122->GetZaxis()->SetTitleSize(0.06);
   base__122->GetZaxis()->SetTitleFont(42);
   base__122->Draw("");
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
   
   TEfficiency * den_clone348 = new TEfficiency("den_clone","",25,1.7,2.4);
   
   den_clone348->SetConfidenceLevel(0.6826895);
   den_clone348->SetBetaAlpha(1);
   den_clone348->SetBetaBeta(1);
   den_clone348->SetWeight(1);
   den_clone348->SetStatisticOption(0);
   den_clone348->SetPosteriorMode(0);
   den_clone348->SetShortestInterval(0);
   den_clone348->SetTotalEvents(0,0);
   den_clone348->SetPassedEvents(0,0);
   den_clone348->SetTotalEvents(1,199);
   den_clone348->SetPassedEvents(1,44);
   den_clone348->SetTotalEvents(2,1045);
   den_clone348->SetPassedEvents(2,90);
   den_clone348->SetTotalEvents(3,1934);
   den_clone348->SetPassedEvents(3,24);
   den_clone348->SetTotalEvents(4,1973);
   den_clone348->SetPassedEvents(4,1);
   den_clone348->SetTotalEvents(5,1973);
   den_clone348->SetPassedEvents(5,5);
   den_clone348->SetTotalEvents(6,1905);
   den_clone348->SetPassedEvents(6,4);
   den_clone348->SetTotalEvents(7,1918);
   den_clone348->SetPassedEvents(7,8);
   den_clone348->SetTotalEvents(8,1906);
   den_clone348->SetPassedEvents(8,223);
   den_clone348->SetTotalEvents(9,1997);
   den_clone348->SetPassedEvents(9,296);
   den_clone348->SetTotalEvents(10,1962);
   den_clone348->SetPassedEvents(10,20);
   den_clone348->SetTotalEvents(11,1936);
   den_clone348->SetPassedEvents(11,5);
   den_clone348->SetTotalEvents(12,1940);
   den_clone348->SetPassedEvents(12,5);
   den_clone348->SetTotalEvents(13,1872);
   den_clone348->SetPassedEvents(13,3);
   den_clone348->SetTotalEvents(14,1829);
   den_clone348->SetPassedEvents(14,4);
   den_clone348->SetTotalEvents(15,1799);
   den_clone348->SetPassedEvents(15,3);
   den_clone348->SetTotalEvents(16,1916);
   den_clone348->SetPassedEvents(16,57);
   den_clone348->SetTotalEvents(17,1729);
   den_clone348->SetPassedEvents(17,181);
   den_clone348->SetTotalEvents(18,1822);
   den_clone348->SetPassedEvents(18,98);
   den_clone348->SetTotalEvents(19,1974);
   den_clone348->SetPassedEvents(19,4);
   den_clone348->SetTotalEvents(20,2010);
   den_clone348->SetPassedEvents(20,4);
   den_clone348->SetTotalEvents(21,1916);
   den_clone348->SetPassedEvents(21,7);
   den_clone348->SetTotalEvents(22,1949);
   den_clone348->SetPassedEvents(22,2);
   den_clone348->SetTotalEvents(23,1994);
   den_clone348->SetPassedEvents(23,8);
   den_clone348->SetTotalEvents(24,1950);
   den_clone348->SetPassedEvents(24,7);
   den_clone348->SetTotalEvents(25,1895);
   den_clone348->SetPassedEvents(25,11);
   den_clone348->SetTotalEvents(26,0);
   den_clone348->SetPassedEvents(26,0);
   den_clone348->SetFillColor(19);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ff0000");
   den_clone348->SetLineColor(ci);
   den_clone348->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   den_clone348->SetMarkerColor(ci);
   den_clone348->SetMarkerStyle(22);
   den_clone348->Draw("same samep");
   
   TEfficiency * den_clone349 = new TEfficiency("den_clone","",25,1.7,2.4);
   
   den_clone349->SetConfidenceLevel(0.6826895);
   den_clone349->SetBetaAlpha(1);
   den_clone349->SetBetaBeta(1);
   den_clone349->SetWeight(1);
   den_clone349->SetStatisticOption(0);
   den_clone349->SetPosteriorMode(0);
   den_clone349->SetShortestInterval(0);
   den_clone349->SetTotalEvents(0,0);
   den_clone349->SetPassedEvents(0,0);
   den_clone349->SetTotalEvents(1,197);
   den_clone349->SetPassedEvents(1,40);
   den_clone349->SetTotalEvents(2,1130);
   den_clone349->SetPassedEvents(2,83);
   den_clone349->SetTotalEvents(3,1712);
   den_clone349->SetPassedEvents(3,32);
   den_clone349->SetTotalEvents(4,1807);
   den_clone349->SetPassedEvents(4,4);
   den_clone349->SetTotalEvents(5,1938);
   den_clone349->SetPassedEvents(5,6);
   den_clone349->SetTotalEvents(6,1866);
   den_clone349->SetPassedEvents(6,7);
   den_clone349->SetTotalEvents(7,1814);
   den_clone349->SetPassedEvents(7,15);
   den_clone349->SetTotalEvents(8,1866);
   den_clone349->SetPassedEvents(8,213);
   den_clone349->SetTotalEvents(9,1932);
   den_clone349->SetPassedEvents(9,282);
   den_clone349->SetTotalEvents(10,1829);
   den_clone349->SetPassedEvents(10,21);
   den_clone349->SetTotalEvents(11,1878);
   den_clone349->SetPassedEvents(11,8);
   den_clone349->SetTotalEvents(12,1833);
   den_clone349->SetPassedEvents(12,6);
   den_clone349->SetTotalEvents(13,1890);
   den_clone349->SetPassedEvents(13,4);
   den_clone349->SetTotalEvents(14,1888);
   den_clone349->SetPassedEvents(14,5);
   den_clone349->SetTotalEvents(15,1831);
   den_clone349->SetPassedEvents(15,9);
   den_clone349->SetTotalEvents(16,1767);
   den_clone349->SetPassedEvents(16,61);
   den_clone349->SetTotalEvents(17,1670);
   den_clone349->SetPassedEvents(17,160);
   den_clone349->SetTotalEvents(18,1737);
   den_clone349->SetPassedEvents(18,89);
   den_clone349->SetTotalEvents(19,1849);
   den_clone349->SetPassedEvents(19,5);
   den_clone349->SetTotalEvents(20,1838);
   den_clone349->SetPassedEvents(20,4);
   den_clone349->SetTotalEvents(21,1850);
   den_clone349->SetPassedEvents(21,11);
   den_clone349->SetTotalEvents(22,1854);
   den_clone349->SetPassedEvents(22,11);
   den_clone349->SetTotalEvents(23,1889);
   den_clone349->SetPassedEvents(23,7);
   den_clone349->SetTotalEvents(24,1750);
   den_clone349->SetPassedEvents(24,13);
   den_clone349->SetTotalEvents(25,1801);
   den_clone349->SetPassedEvents(25,21);
   den_clone349->SetTotalEvents(26,0);
   den_clone349->SetPassedEvents(26,0);
   den_clone349->SetFillColor(19);

   ci = TColor::GetColor("#0000ff");
   den_clone349->SetLineColor(ci);
   den_clone349->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   den_clone349->SetMarkerColor(ci);
   den_clone349->SetMarkerStyle(21);
   den_clone349->Draw("same samep");
   
   TEfficiency * den_clone350 = new TEfficiency("den_clone","",25,1.7,2.4);
   
   den_clone350->SetConfidenceLevel(0.6826895);
   den_clone350->SetBetaAlpha(1);
   den_clone350->SetBetaBeta(1);
   den_clone350->SetWeight(1);
   den_clone350->SetStatisticOption(0);
   den_clone350->SetPosteriorMode(0);
   den_clone350->SetShortestInterval(0);
   den_clone350->SetTotalEvents(0,0);
   den_clone350->SetPassedEvents(0,0);
   den_clone350->SetTotalEvents(1,189);
   den_clone350->SetPassedEvents(1,37);
   den_clone350->SetTotalEvents(2,1126);
   den_clone350->SetPassedEvents(2,77);
   den_clone350->SetTotalEvents(3,1694);
   den_clone350->SetPassedEvents(3,31);
   den_clone350->SetTotalEvents(4,1769);
   den_clone350->SetPassedEvents(4,2);
   den_clone350->SetTotalEvents(5,1924);
   den_clone350->SetPassedEvents(5,3);
   den_clone350->SetTotalEvents(6,1852);
   den_clone350->SetPassedEvents(6,6);
   den_clone350->SetTotalEvents(7,1789);
   den_clone350->SetPassedEvents(7,11);
   den_clone350->SetTotalEvents(8,1836);
   den_clone350->SetPassedEvents(8,211);
   den_clone350->SetTotalEvents(9,1921);
   den_clone350->SetPassedEvents(9,285);
   den_clone350->SetTotalEvents(10,1817);
   den_clone350->SetPassedEvents(10,20);
   den_clone350->SetTotalEvents(11,1856);
   den_clone350->SetPassedEvents(11,7);
   den_clone350->SetTotalEvents(12,1813);
   den_clone350->SetPassedEvents(12,3);
   den_clone350->SetTotalEvents(13,1842);
   den_clone350->SetPassedEvents(13,1);
   den_clone350->SetTotalEvents(14,1898);
   den_clone350->SetPassedEvents(14,4);
   den_clone350->SetTotalEvents(15,1833);
   den_clone350->SetPassedEvents(15,6);
   den_clone350->SetTotalEvents(16,1755);
   den_clone350->SetPassedEvents(16,59);
   den_clone350->SetTotalEvents(17,1630);
   den_clone350->SetPassedEvents(17,156);
   den_clone350->SetTotalEvents(18,1711);
   den_clone350->SetPassedEvents(18,82);
   den_clone350->SetTotalEvents(19,1825);
   den_clone350->SetPassedEvents(19,6);
   den_clone350->SetTotalEvents(20,1826);
   den_clone350->SetPassedEvents(20,2);
   den_clone350->SetTotalEvents(21,1826);
   den_clone350->SetPassedEvents(21,7);
   den_clone350->SetTotalEvents(22,1852);
   den_clone350->SetPassedEvents(22,6);
   den_clone350->SetTotalEvents(23,1847);
   den_clone350->SetPassedEvents(23,1);
   den_clone350->SetTotalEvents(24,1734);
   den_clone350->SetPassedEvents(24,8);
   den_clone350->SetTotalEvents(25,1799);
   den_clone350->SetPassedEvents(25,15);
   den_clone350->SetTotalEvents(26,0);
   den_clone350->SetPassedEvents(26,0);
   den_clone350->SetFillColor(19);
   den_clone350->SetLineWidth(2);
   den_clone350->SetMarkerStyle(23);
   den_clone350->Draw("same samep");
   
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
   leg->Draw();
   TText *text = new TText(0.17,0.17,"ME3/1");
   text->SetNDC();
   text->Draw();
   text = new TText(0.17,0.24,"notHQALCTnotHQCLCT");
   text->SetNDC();
   text->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
