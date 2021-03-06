void Eff_ME42_ALCTandCLCT_Combined()
{
//=========Macro generated from canvas: c/c
//=========  (Fri Oct 11 07:51:20 2019) by ROOT version 6.14/09
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
   
   TH1F *base__153 = new TH1F("base__153","",25,1.1,1.8);
   base__153->SetMinimum(0.5);
   base__153->SetMaximum(1.025);
   base__153->SetLineStyle(0);
   base__153->SetMarkerStyle(20);
   base__153->GetXaxis()->SetTitle("True muon |#eta|");
   base__153->GetXaxis()->SetLabelFont(42);
   base__153->GetXaxis()->SetLabelOffset(0.007);
   base__153->GetXaxis()->SetLabelSize(0.05);
   base__153->GetXaxis()->SetTitleSize(0.06);
   base__153->GetXaxis()->SetTitleOffset(0.9);
   base__153->GetXaxis()->SetTitleFont(42);
   base__153->GetYaxis()->SetTitle("Efficiency");
   base__153->GetYaxis()->SetLabelFont(42);
   base__153->GetYaxis()->SetLabelOffset(0.007);
   base__153->GetYaxis()->SetLabelSize(0.05);
   base__153->GetYaxis()->SetTitleSize(0.06);
   base__153->GetYaxis()->SetTitleOffset(0.9);
   base__153->GetYaxis()->SetTitleFont(42);
   base__153->GetZaxis()->SetLabelFont(42);
   base__153->GetZaxis()->SetLabelOffset(0.007);
   base__153->GetZaxis()->SetLabelSize(0.05);
   base__153->GetZaxis()->SetTitleSize(0.06);
   base__153->GetZaxis()->SetTitleFont(42);
   base__153->Draw("");
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
   
   TEfficiency * den_clone565 = new TEfficiency("den_clone","",25,1.1,1.8);
   
   den_clone565->SetConfidenceLevel(0.6826895);
   den_clone565->SetBetaAlpha(1);
   den_clone565->SetBetaBeta(1);
   den_clone565->SetWeight(1);
   den_clone565->SetStatisticOption(0);
   den_clone565->SetPosteriorMode(0);
   den_clone565->SetShortestInterval(0);
   den_clone565->SetTotalEvents(0,0);
   den_clone565->SetPassedEvents(0,0);
   den_clone565->SetTotalEvents(1,15);
   den_clone565->SetPassedEvents(1,15);
   den_clone565->SetTotalEvents(2,49);
   den_clone565->SetPassedEvents(2,44);
   den_clone565->SetTotalEvents(3,365);
   den_clone565->SetPassedEvents(3,274);
   den_clone565->SetTotalEvents(4,1528);
   den_clone565->SetPassedEvents(4,1393);
   den_clone565->SetTotalEvents(5,1998);
   den_clone565->SetPassedEvents(5,1929);
   den_clone565->SetTotalEvents(6,1867);
   den_clone565->SetPassedEvents(6,1755);
   den_clone565->SetTotalEvents(7,1882);
   den_clone565->SetPassedEvents(7,1755);
   den_clone565->SetTotalEvents(8,2038);
   den_clone565->SetPassedEvents(8,1966);
   den_clone565->SetTotalEvents(9,1957);
   den_clone565->SetPassedEvents(9,1817);
   den_clone565->SetTotalEvents(10,1907);
   den_clone565->SetPassedEvents(10,1768);
   den_clone565->SetTotalEvents(11,1928);
   den_clone565->SetPassedEvents(11,1852);
   den_clone565->SetTotalEvents(12,1994);
   den_clone565->SetPassedEvents(12,1903);
   den_clone565->SetTotalEvents(13,1910);
   den_clone565->SetPassedEvents(13,1714);
   den_clone565->SetTotalEvents(14,1837);
   den_clone565->SetPassedEvents(14,1706);
   den_clone565->SetTotalEvents(15,1967);
   den_clone565->SetPassedEvents(15,1898);
   den_clone565->SetTotalEvents(16,1864);
   den_clone565->SetPassedEvents(16,1780);
   den_clone565->SetTotalEvents(17,1753);
   den_clone565->SetPassedEvents(17,1491);
   den_clone565->SetTotalEvents(18,1982);
   den_clone565->SetPassedEvents(18,1755);
   den_clone565->SetTotalEvents(19,1802);
   den_clone565->SetPassedEvents(19,1721);
   den_clone565->SetTotalEvents(20,1925);
   den_clone565->SetPassedEvents(20,1855);
   den_clone565->SetTotalEvents(21,1900);
   den_clone565->SetPassedEvents(21,1819);
   den_clone565->SetTotalEvents(22,1946);
   den_clone565->SetPassedEvents(22,1864);
   den_clone565->SetTotalEvents(23,1858);
   den_clone565->SetPassedEvents(23,1733);
   den_clone565->SetTotalEvents(24,939);
   den_clone565->SetPassedEvents(24,721);
   den_clone565->SetTotalEvents(25,32);
   den_clone565->SetPassedEvents(25,13);
   den_clone565->SetTotalEvents(26,0);
   den_clone565->SetPassedEvents(26,0);
   den_clone565->SetFillColor(19);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ff0000");
   den_clone565->SetLineColor(ci);
   den_clone565->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   den_clone565->SetMarkerColor(ci);
   den_clone565->SetMarkerStyle(22);
   den_clone565->Draw("same samep");
   
   TEfficiency * den_clone566 = new TEfficiency("den_clone","",25,1.1,1.8);
   
   den_clone566->SetConfidenceLevel(0.6826895);
   den_clone566->SetBetaAlpha(1);
   den_clone566->SetBetaBeta(1);
   den_clone566->SetWeight(1);
   den_clone566->SetStatisticOption(0);
   den_clone566->SetPosteriorMode(0);
   den_clone566->SetShortestInterval(0);
   den_clone566->SetTotalEvents(0,0);
   den_clone566->SetPassedEvents(0,0);
   den_clone566->SetTotalEvents(1,12);
   den_clone566->SetPassedEvents(1,10);
   den_clone566->SetTotalEvents(2,33);
   den_clone566->SetPassedEvents(2,30);
   den_clone566->SetTotalEvents(3,378);
   den_clone566->SetPassedEvents(3,264);
   den_clone566->SetTotalEvents(4,1482);
   den_clone566->SetPassedEvents(4,1327);
   den_clone566->SetTotalEvents(5,1960);
   den_clone566->SetPassedEvents(5,1890);
   den_clone566->SetTotalEvents(6,1946);
   den_clone566->SetPassedEvents(6,1807);
   den_clone566->SetTotalEvents(7,2014);
   den_clone566->SetPassedEvents(7,1885);
   den_clone566->SetTotalEvents(8,1984);
   den_clone566->SetPassedEvents(8,1904);
   den_clone566->SetTotalEvents(9,1927);
   den_clone566->SetPassedEvents(9,1791);
   den_clone566->SetTotalEvents(10,1815);
   den_clone566->SetPassedEvents(10,1677);
   den_clone566->SetTotalEvents(11,2052);
   den_clone566->SetPassedEvents(11,1979);
   den_clone566->SetTotalEvents(12,1874);
   den_clone566->SetPassedEvents(12,1778);
   den_clone566->SetTotalEvents(13,1997);
   den_clone566->SetPassedEvents(13,1777);
   den_clone566->SetTotalEvents(14,1964);
   den_clone566->SetPassedEvents(14,1810);
   den_clone566->SetTotalEvents(15,1853);
   den_clone566->SetPassedEvents(15,1760);
   den_clone566->SetTotalEvents(16,2061);
   den_clone566->SetPassedEvents(16,1952);
   den_clone566->SetTotalEvents(17,1946);
   den_clone566->SetPassedEvents(17,1659);
   den_clone566->SetTotalEvents(18,1899);
   den_clone566->SetPassedEvents(18,1676);
   den_clone566->SetTotalEvents(19,1921);
   den_clone566->SetPassedEvents(19,1826);
   den_clone566->SetTotalEvents(20,1951);
   den_clone566->SetPassedEvents(20,1845);
   den_clone566->SetTotalEvents(21,1903);
   den_clone566->SetPassedEvents(21,1809);
   den_clone566->SetTotalEvents(22,1814);
   den_clone566->SetPassedEvents(22,1725);
   den_clone566->SetTotalEvents(23,1798);
   den_clone566->SetPassedEvents(23,1665);
   den_clone566->SetTotalEvents(24,977);
   den_clone566->SetPassedEvents(24,756);
   den_clone566->SetTotalEvents(25,35);
   den_clone566->SetPassedEvents(25,13);
   den_clone566->SetTotalEvents(26,0);
   den_clone566->SetPassedEvents(26,0);
   den_clone566->SetFillColor(19);

   ci = TColor::GetColor("#0000ff");
   den_clone566->SetLineColor(ci);
   den_clone566->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   den_clone566->SetMarkerColor(ci);
   den_clone566->SetMarkerStyle(21);
   den_clone566->Draw("same samep");
   
   TEfficiency * den_clone567 = new TEfficiency("den_clone","",25,1.1,1.8);
   
   den_clone567->SetConfidenceLevel(0.6826895);
   den_clone567->SetBetaAlpha(1);
   den_clone567->SetBetaBeta(1);
   den_clone567->SetWeight(1);
   den_clone567->SetStatisticOption(0);
   den_clone567->SetPosteriorMode(0);
   den_clone567->SetShortestInterval(0);
   den_clone567->SetTotalEvents(0,0);
   den_clone567->SetPassedEvents(0,0);
   den_clone567->SetTotalEvents(1,12);
   den_clone567->SetPassedEvents(1,10);
   den_clone567->SetTotalEvents(2,33);
   den_clone567->SetPassedEvents(2,30);
   den_clone567->SetTotalEvents(3,378);
   den_clone567->SetPassedEvents(3,264);
   den_clone567->SetTotalEvents(4,1482);
   den_clone567->SetPassedEvents(4,1327);
   den_clone567->SetTotalEvents(5,1960);
   den_clone567->SetPassedEvents(5,1890);
   den_clone567->SetTotalEvents(6,1946);
   den_clone567->SetPassedEvents(6,1807);
   den_clone567->SetTotalEvents(7,2014);
   den_clone567->SetPassedEvents(7,1885);
   den_clone567->SetTotalEvents(8,1984);
   den_clone567->SetPassedEvents(8,1904);
   den_clone567->SetTotalEvents(9,1927);
   den_clone567->SetPassedEvents(9,1791);
   den_clone567->SetTotalEvents(10,1815);
   den_clone567->SetPassedEvents(10,1677);
   den_clone567->SetTotalEvents(11,2052);
   den_clone567->SetPassedEvents(11,1979);
   den_clone567->SetTotalEvents(12,1874);
   den_clone567->SetPassedEvents(12,1778);
   den_clone567->SetTotalEvents(13,1997);
   den_clone567->SetPassedEvents(13,1777);
   den_clone567->SetTotalEvents(14,1964);
   den_clone567->SetPassedEvents(14,1810);
   den_clone567->SetTotalEvents(15,1853);
   den_clone567->SetPassedEvents(15,1760);
   den_clone567->SetTotalEvents(16,2061);
   den_clone567->SetPassedEvents(16,1952);
   den_clone567->SetTotalEvents(17,1946);
   den_clone567->SetPassedEvents(17,1659);
   den_clone567->SetTotalEvents(18,1899);
   den_clone567->SetPassedEvents(18,1676);
   den_clone567->SetTotalEvents(19,1921);
   den_clone567->SetPassedEvents(19,1826);
   den_clone567->SetTotalEvents(20,1951);
   den_clone567->SetPassedEvents(20,1845);
   den_clone567->SetTotalEvents(21,1903);
   den_clone567->SetPassedEvents(21,1809);
   den_clone567->SetTotalEvents(22,1814);
   den_clone567->SetPassedEvents(22,1725);
   den_clone567->SetTotalEvents(23,1798);
   den_clone567->SetPassedEvents(23,1665);
   den_clone567->SetTotalEvents(24,977);
   den_clone567->SetPassedEvents(24,756);
   den_clone567->SetTotalEvents(25,35);
   den_clone567->SetPassedEvents(25,13);
   den_clone567->SetTotalEvents(26,0);
   den_clone567->SetPassedEvents(26,0);
   den_clone567->SetFillColor(19);
   den_clone567->SetLineWidth(2);
   den_clone567->SetMarkerStyle(23);
   den_clone567->Draw("same samep");
   
   TEfficiency * den_clone568 = new TEfficiency("den_clone","",25,1.1,1.8);
   
   den_clone568->SetConfidenceLevel(0.6826895);
   den_clone568->SetBetaAlpha(1);
   den_clone568->SetBetaBeta(1);
   den_clone568->SetWeight(1);
   den_clone568->SetStatisticOption(0);
   den_clone568->SetPosteriorMode(0);
   den_clone568->SetShortestInterval(0);
   den_clone568->SetTotalEvents(0,0);
   den_clone568->SetPassedEvents(0,0);
   den_clone568->SetTotalEvents(1,6);
   den_clone568->SetPassedEvents(1,4);
   den_clone568->SetTotalEvents(2,15);
   den_clone568->SetPassedEvents(2,12);
   den_clone568->SetTotalEvents(3,109);
   den_clone568->SetPassedEvents(3,96);
   den_clone568->SetTotalEvents(4,463);
   den_clone568->SetPassedEvents(4,442);
   den_clone568->SetTotalEvents(5,686);
   den_clone568->SetPassedEvents(5,657);
   den_clone568->SetTotalEvents(6,715);
   den_clone568->SetPassedEvents(6,657);
   den_clone568->SetTotalEvents(7,735);
   den_clone568->SetPassedEvents(7,682);
   den_clone568->SetTotalEvents(8,700);
   den_clone568->SetPassedEvents(8,659);
   den_clone568->SetTotalEvents(9,621);
   den_clone568->SetPassedEvents(9,568);
   den_clone568->SetTotalEvents(10,650);
   den_clone568->SetPassedEvents(10,606);
   den_clone568->SetTotalEvents(11,679);
   den_clone568->SetPassedEvents(11,661);
   den_clone568->SetTotalEvents(12,748);
   den_clone568->SetPassedEvents(12,721);
   den_clone568->SetTotalEvents(13,695);
   den_clone568->SetPassedEvents(13,611);
   den_clone568->SetTotalEvents(14,649);
   den_clone568->SetPassedEvents(14,597);
   den_clone568->SetTotalEvents(15,656);
   den_clone568->SetPassedEvents(15,635);
   den_clone568->SetTotalEvents(16,670);
   den_clone568->SetPassedEvents(16,640);
   den_clone568->SetTotalEvents(17,738);
   den_clone568->SetPassedEvents(17,652);
   den_clone568->SetTotalEvents(18,695);
   den_clone568->SetPassedEvents(18,604);
   den_clone568->SetTotalEvents(19,669);
   den_clone568->SetPassedEvents(19,645);
   den_clone568->SetTotalEvents(20,690);
   den_clone568->SetPassedEvents(20,653);
   den_clone568->SetTotalEvents(21,682);
   den_clone568->SetPassedEvents(21,645);
   den_clone568->SetTotalEvents(22,708);
   den_clone568->SetPassedEvents(22,657);
   den_clone568->SetTotalEvents(23,694);
   den_clone568->SetPassedEvents(23,642);
   den_clone568->SetTotalEvents(24,315);
   den_clone568->SetPassedEvents(24,275);
   den_clone568->SetTotalEvents(25,6);
   den_clone568->SetPassedEvents(25,3);
   den_clone568->SetTotalEvents(26,0);
   den_clone568->SetPassedEvents(26,0);
   den_clone568->SetFillColor(19);

   ci = TColor::GetColor("#00cc00");
   den_clone568->SetLineColor(ci);
   den_clone568->SetLineWidth(2);

   ci = TColor::GetColor("#00cc00");
   den_clone568->SetMarkerColor(ci);
   den_clone568->SetMarkerStyle(23);
   den_clone568->Draw("same samep");
   
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
   TText *text = new TText(0.17,0.17,"ME4/2");
   text->SetNDC();
   text->Draw();
   text = new TText(0.17,0.24,"ALCTandCLCT");
   text->SetNDC();
   text->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
