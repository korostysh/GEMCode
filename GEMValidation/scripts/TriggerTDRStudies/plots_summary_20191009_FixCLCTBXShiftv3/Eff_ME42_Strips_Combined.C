void Eff_ME42_Strips_Combined()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Oct 10 20:24:17 2019) by ROOT version 6.14/09
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   c->SetHighLightColor(2);
   c->Range(1,0.42125,1.833333,1.0775);
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
   
   TH1F *base__149 = new TH1F("base__149","",25,1.1,1.8);
   base__149->SetMinimum(0.5);
   base__149->SetMaximum(1.025);
   base__149->SetLineStyle(0);
   base__149->SetMarkerStyle(20);
   base__149->GetXaxis()->SetTitle("True muon |#eta|");
   base__149->GetXaxis()->SetLabelFont(42);
   base__149->GetXaxis()->SetLabelOffset(0.007);
   base__149->GetXaxis()->SetLabelSize(0.05);
   base__149->GetXaxis()->SetTitleSize(0.06);
   base__149->GetXaxis()->SetTitleOffset(0.9);
   base__149->GetXaxis()->SetTitleFont(42);
   base__149->GetYaxis()->SetTitle("Efficiency");
   base__149->GetYaxis()->SetLabelFont(42);
   base__149->GetYaxis()->SetLabelOffset(0.007);
   base__149->GetYaxis()->SetLabelSize(0.05);
   base__149->GetYaxis()->SetTitleSize(0.06);
   base__149->GetYaxis()->SetTitleOffset(0.9);
   base__149->GetYaxis()->SetTitleFont(42);
   base__149->GetZaxis()->SetLabelFont(42);
   base__149->GetZaxis()->SetLabelOffset(0.007);
   base__149->GetZaxis()->SetLabelSize(0.05);
   base__149->GetZaxis()->SetTitleSize(0.06);
   base__149->GetZaxis()->SetTitleFont(42);
   base__149->Draw("");
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
   
   TEfficiency * den_clone551 = new TEfficiency("den_clone","",25,1.1,1.8);
   
   den_clone551->SetConfidenceLevel(0.6826895);
   den_clone551->SetBetaAlpha(1);
   den_clone551->SetBetaBeta(1);
   den_clone551->SetWeight(1);
   den_clone551->SetStatisticOption(0);
   den_clone551->SetPosteriorMode(0);
   den_clone551->SetShortestInterval(0);
   den_clone551->SetTotalEvents(0,0);
   den_clone551->SetPassedEvents(0,0);
   den_clone551->SetTotalEvents(1,15);
   den_clone551->SetPassedEvents(1,15);
   den_clone551->SetTotalEvents(2,49);
   den_clone551->SetPassedEvents(2,49);
   den_clone551->SetTotalEvents(3,365);
   den_clone551->SetPassedEvents(3,345);
   den_clone551->SetTotalEvents(4,1528);
   den_clone551->SetPassedEvents(4,1515);
   den_clone551->SetTotalEvents(5,1998);
   den_clone551->SetPassedEvents(5,1996);
   den_clone551->SetTotalEvents(6,1867);
   den_clone551->SetPassedEvents(6,1865);
   den_clone551->SetTotalEvents(7,1882);
   den_clone551->SetPassedEvents(7,1880);
   den_clone551->SetTotalEvents(8,2038);
   den_clone551->SetPassedEvents(8,2037);
   den_clone551->SetTotalEvents(9,1957);
   den_clone551->SetPassedEvents(9,1954);
   den_clone551->SetTotalEvents(10,1907);
   den_clone551->SetPassedEvents(10,1904);
   den_clone551->SetTotalEvents(11,1928);
   den_clone551->SetPassedEvents(11,1926);
   den_clone551->SetTotalEvents(12,1994);
   den_clone551->SetPassedEvents(12,1985);
   den_clone551->SetTotalEvents(13,1910);
   den_clone551->SetPassedEvents(13,1903);
   den_clone551->SetTotalEvents(14,1837);
   den_clone551->SetPassedEvents(14,1834);
   den_clone551->SetTotalEvents(15,1967);
   den_clone551->SetPassedEvents(15,1967);
   den_clone551->SetTotalEvents(16,1864);
   den_clone551->SetPassedEvents(16,1857);
   den_clone551->SetTotalEvents(17,1753);
   den_clone551->SetPassedEvents(17,1730);
   den_clone551->SetTotalEvents(18,1982);
   den_clone551->SetPassedEvents(18,1972);
   den_clone551->SetTotalEvents(19,1802);
   den_clone551->SetPassedEvents(19,1800);
   den_clone551->SetTotalEvents(20,1925);
   den_clone551->SetPassedEvents(20,1921);
   den_clone551->SetTotalEvents(21,1900);
   den_clone551->SetPassedEvents(21,1899);
   den_clone551->SetTotalEvents(22,1946);
   den_clone551->SetPassedEvents(22,1939);
   den_clone551->SetTotalEvents(23,1858);
   den_clone551->SetPassedEvents(23,1842);
   den_clone551->SetTotalEvents(24,939);
   den_clone551->SetPassedEvents(24,885);
   den_clone551->SetTotalEvents(25,32);
   den_clone551->SetPassedEvents(25,24);
   den_clone551->SetTotalEvents(26,0);
   den_clone551->SetPassedEvents(26,0);
   den_clone551->SetFillColor(19);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ff0000");
   den_clone551->SetLineColor(ci);
   den_clone551->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   den_clone551->SetMarkerColor(ci);
   den_clone551->SetMarkerStyle(22);
   den_clone551->Draw("same samep");
   
   TEfficiency * den_clone552 = new TEfficiency("den_clone","",25,1.1,1.8);
   
   den_clone552->SetConfidenceLevel(0.6826895);
   den_clone552->SetBetaAlpha(1);
   den_clone552->SetBetaBeta(1);
   den_clone552->SetWeight(1);
   den_clone552->SetStatisticOption(0);
   den_clone552->SetPosteriorMode(0);
   den_clone552->SetShortestInterval(0);
   den_clone552->SetTotalEvents(0,0);
   den_clone552->SetPassedEvents(0,0);
   den_clone552->SetTotalEvents(1,12);
   den_clone552->SetPassedEvents(1,12);
   den_clone552->SetTotalEvents(2,33);
   den_clone552->SetPassedEvents(2,32);
   den_clone552->SetTotalEvents(3,378);
   den_clone552->SetPassedEvents(3,364);
   den_clone552->SetTotalEvents(4,1482);
   den_clone552->SetPassedEvents(4,1469);
   den_clone552->SetTotalEvents(5,1960);
   den_clone552->SetPassedEvents(5,1960);
   den_clone552->SetTotalEvents(6,1946);
   den_clone552->SetPassedEvents(6,1946);
   den_clone552->SetTotalEvents(7,2014);
   den_clone552->SetPassedEvents(7,2013);
   den_clone552->SetTotalEvents(8,1984);
   den_clone552->SetPassedEvents(8,1981);
   den_clone552->SetTotalEvents(9,1927);
   den_clone552->SetPassedEvents(9,1924);
   den_clone552->SetTotalEvents(10,1815);
   den_clone552->SetPassedEvents(10,1810);
   den_clone552->SetTotalEvents(11,2052);
   den_clone552->SetPassedEvents(11,2050);
   den_clone552->SetTotalEvents(12,1874);
   den_clone552->SetPassedEvents(12,1871);
   den_clone552->SetTotalEvents(13,1997);
   den_clone552->SetPassedEvents(13,1989);
   den_clone552->SetTotalEvents(14,1964);
   den_clone552->SetPassedEvents(14,1959);
   den_clone552->SetTotalEvents(15,1853);
   den_clone552->SetPassedEvents(15,1851);
   den_clone552->SetTotalEvents(16,2061);
   den_clone552->SetPassedEvents(16,2059);
   den_clone552->SetTotalEvents(17,1946);
   den_clone552->SetPassedEvents(17,1924);
   den_clone552->SetTotalEvents(18,1899);
   den_clone552->SetPassedEvents(18,1883);
   den_clone552->SetTotalEvents(19,1921);
   den_clone552->SetPassedEvents(19,1921);
   den_clone552->SetTotalEvents(20,1951);
   den_clone552->SetPassedEvents(20,1950);
   den_clone552->SetTotalEvents(21,1903);
   den_clone552->SetPassedEvents(21,1898);
   den_clone552->SetTotalEvents(22,1814);
   den_clone552->SetPassedEvents(22,1810);
   den_clone552->SetTotalEvents(23,1798);
   den_clone552->SetPassedEvents(23,1785);
   den_clone552->SetTotalEvents(24,977);
   den_clone552->SetPassedEvents(24,936);
   den_clone552->SetTotalEvents(25,35);
   den_clone552->SetPassedEvents(25,29);
   den_clone552->SetTotalEvents(26,0);
   den_clone552->SetPassedEvents(26,0);
   den_clone552->SetFillColor(19);

   ci = TColor::GetColor("#0000ff");
   den_clone552->SetLineColor(ci);
   den_clone552->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   den_clone552->SetMarkerColor(ci);
   den_clone552->SetMarkerStyle(21);
   den_clone552->Draw("same samep");
   
   TLegend *leg = new TLegend(0,0,0,0,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextFont(62);
   leg->SetTextSize(0.05);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(0);
   TLegendEntry *entry=leg->AddEntry("NULL","Strips","h");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("den_clone","PU0","pl");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("den_clone","PU200","pl");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   leg->Draw();
   TText *text = new TText(0.17,0.17,"ME4/2");
   text->SetNDC();
   text->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
