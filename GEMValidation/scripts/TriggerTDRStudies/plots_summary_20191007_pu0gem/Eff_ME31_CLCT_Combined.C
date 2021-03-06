void Eff_ME31_CLCT_Combined()
{
//=========Macro generated from canvas: c/c
//=========  (Tue Oct  8 12:39:57 2019) by ROOT version 6.14/09
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
   
   TH1F *base__39 = new TH1F("base__39","",25,1.7,2.4);
   base__39->SetMinimum(0.5);
   base__39->SetMaximum(1.025);
   base__39->SetLineStyle(0);
   base__39->SetMarkerStyle(20);
   base__39->GetXaxis()->SetTitle("True muon |#eta|");
   base__39->GetXaxis()->SetLabelFont(42);
   base__39->GetXaxis()->SetLabelOffset(0.007);
   base__39->GetXaxis()->SetLabelSize(0.05);
   base__39->GetXaxis()->SetTitleSize(0.06);
   base__39->GetXaxis()->SetTitleOffset(0.9);
   base__39->GetXaxis()->SetTitleFont(42);
   base__39->GetYaxis()->SetTitle("Efficiency");
   base__39->GetYaxis()->SetLabelFont(42);
   base__39->GetYaxis()->SetLabelOffset(0.007);
   base__39->GetYaxis()->SetLabelSize(0.05);
   base__39->GetYaxis()->SetTitleSize(0.06);
   base__39->GetYaxis()->SetTitleOffset(0.9);
   base__39->GetYaxis()->SetTitleFont(42);
   base__39->GetZaxis()->SetLabelFont(42);
   base__39->GetZaxis()->SetLabelOffset(0.007);
   base__39->GetZaxis()->SetLabelSize(0.05);
   base__39->GetZaxis()->SetTitleSize(0.06);
   base__39->GetZaxis()->SetTitleFont(42);
   base__39->Draw("");
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
   
   TEfficiency * den_clone147 = new TEfficiency("den_clone","",25,1.7,2.4);
   
   den_clone147->SetConfidenceLevel(0.6826895);
   den_clone147->SetBetaAlpha(1);
   den_clone147->SetBetaBeta(1);
   den_clone147->SetWeight(1);
   den_clone147->SetStatisticOption(0);
   den_clone147->SetPosteriorMode(0);
   den_clone147->SetShortestInterval(0);
   den_clone147->SetTotalEvents(0,0);
   den_clone147->SetPassedEvents(0,0);
   den_clone147->SetTotalEvents(1,199);
   den_clone147->SetPassedEvents(1,120);
   den_clone147->SetTotalEvents(2,1045);
   den_clone147->SetPassedEvents(2,865);
   den_clone147->SetTotalEvents(3,1934);
   den_clone147->SetPassedEvents(3,1826);
   den_clone147->SetTotalEvents(4,1973);
   den_clone147->SetPassedEvents(4,1891);
   den_clone147->SetTotalEvents(5,1973);
   den_clone147->SetPassedEvents(5,1880);
   den_clone147->SetTotalEvents(6,1905);
   den_clone147->SetPassedEvents(6,1820);
   den_clone147->SetTotalEvents(7,1918);
   den_clone147->SetPassedEvents(7,1821);
   den_clone147->SetTotalEvents(8,1906);
   den_clone147->SetPassedEvents(8,1491);
   den_clone147->SetTotalEvents(9,1997);
   den_clone147->SetPassedEvents(9,1511);
   den_clone147->SetTotalEvents(10,1962);
   den_clone147->SetPassedEvents(10,1837);
   den_clone147->SetTotalEvents(11,1936);
   den_clone147->SetPassedEvents(11,1853);
   den_clone147->SetTotalEvents(12,1940);
   den_clone147->SetPassedEvents(12,1861);
   den_clone147->SetTotalEvents(13,1872);
   den_clone147->SetPassedEvents(13,1789);
   den_clone147->SetTotalEvents(14,1829);
   den_clone147->SetPassedEvents(14,1741);
   den_clone147->SetTotalEvents(15,1799);
   den_clone147->SetPassedEvents(15,1713);
   den_clone147->SetTotalEvents(16,1916);
   den_clone147->SetPassedEvents(16,1718);
   den_clone147->SetTotalEvents(17,1729);
   den_clone147->SetPassedEvents(17,1359);
   den_clone147->SetTotalEvents(18,1822);
   den_clone147->SetPassedEvents(18,1569);
   den_clone147->SetTotalEvents(19,1974);
   den_clone147->SetPassedEvents(19,1881);
   den_clone147->SetTotalEvents(20,2010);
   den_clone147->SetPassedEvents(20,1881);
   den_clone147->SetTotalEvents(21,1916);
   den_clone147->SetPassedEvents(21,1792);
   den_clone147->SetTotalEvents(22,1949);
   den_clone147->SetPassedEvents(22,1841);
   den_clone147->SetTotalEvents(23,1994);
   den_clone147->SetPassedEvents(23,1846);
   den_clone147->SetTotalEvents(24,1950);
   den_clone147->SetPassedEvents(24,1831);
   den_clone147->SetTotalEvents(25,1895);
   den_clone147->SetPassedEvents(25,1741);
   den_clone147->SetTotalEvents(26,0);
   den_clone147->SetPassedEvents(26,0);
   den_clone147->SetFillColor(19);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ff0000");
   den_clone147->SetLineColor(ci);
   den_clone147->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   den_clone147->SetMarkerColor(ci);
   den_clone147->SetMarkerStyle(22);
   den_clone147->Draw("same samep");
   
   TEfficiency * den_clone148 = new TEfficiency("den_clone","",25,1.7,2.4);
   
   den_clone148->SetConfidenceLevel(0.6826895);
   den_clone148->SetBetaAlpha(1);
   den_clone148->SetBetaBeta(1);
   den_clone148->SetWeight(1);
   den_clone148->SetStatisticOption(0);
   den_clone148->SetPosteriorMode(0);
   den_clone148->SetShortestInterval(0);
   den_clone148->SetTotalEvents(0,0);
   den_clone148->SetPassedEvents(0,0);
   den_clone148->SetTotalEvents(1,201);
   den_clone148->SetPassedEvents(1,125);
   den_clone148->SetTotalEvents(2,1175);
   den_clone148->SetPassedEvents(2,982);
   den_clone148->SetTotalEvents(3,1773);
   den_clone148->SetPassedEvents(3,1613);
   den_clone148->SetTotalEvents(4,1857);
   den_clone148->SetPassedEvents(4,1722);
   den_clone148->SetTotalEvents(5,2022);
   den_clone148->SetPassedEvents(5,1899);
   den_clone148->SetTotalEvents(6,1936);
   den_clone148->SetPassedEvents(6,1803);
   den_clone148->SetTotalEvents(7,1885);
   den_clone148->SetPassedEvents(7,1765);
   den_clone148->SetTotalEvents(8,1930);
   den_clone148->SetPassedEvents(8,1495);
   den_clone148->SetTotalEvents(9,2006);
   den_clone148->SetPassedEvents(9,1496);
   den_clone148->SetTotalEvents(10,1919);
   den_clone148->SetPassedEvents(10,1758);
   den_clone148->SetTotalEvents(11,1948);
   den_clone148->SetPassedEvents(11,1814);
   den_clone148->SetTotalEvents(12,1895);
   den_clone148->SetPassedEvents(12,1756);
   den_clone148->SetTotalEvents(13,1940);
   den_clone148->SetPassedEvents(13,1812);
   den_clone148->SetTotalEvents(14,1976);
   den_clone148->SetPassedEvents(14,1845);
   den_clone148->SetTotalEvents(15,1915);
   den_clone148->SetPassedEvents(15,1786);
   den_clone148->SetTotalEvents(16,1826);
   den_clone148->SetPassedEvents(16,1590);
   den_clone148->SetTotalEvents(17,1724);
   den_clone148->SetPassedEvents(17,1335);
   den_clone148->SetTotalEvents(18,1798);
   den_clone148->SetPassedEvents(18,1537);
   den_clone148->SetTotalEvents(19,1915);
   den_clone148->SetPassedEvents(19,1780);
   den_clone148->SetTotalEvents(20,1924);
   den_clone148->SetPassedEvents(20,1761);
   den_clone148->SetTotalEvents(21,1930);
   den_clone148->SetPassedEvents(21,1771);
   den_clone148->SetTotalEvents(22,1936);
   den_clone148->SetPassedEvents(22,1781);
   den_clone148->SetTotalEvents(23,1955);
   den_clone148->SetPassedEvents(23,1797);
   den_clone148->SetTotalEvents(24,1818);
   den_clone148->SetPassedEvents(24,1663);
   den_clone148->SetTotalEvents(25,1891);
   den_clone148->SetPassedEvents(25,1685);
   den_clone148->SetTotalEvents(26,0);
   den_clone148->SetPassedEvents(26,0);
   den_clone148->SetFillColor(19);

   ci = TColor::GetColor("#0000ff");
   den_clone148->SetLineColor(ci);
   den_clone148->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   den_clone148->SetMarkerColor(ci);
   den_clone148->SetMarkerStyle(21);
   den_clone148->Draw("same samep");
   
   TEfficiency * den_clone149 = new TEfficiency("den_clone","",25,1.7,2.4);
   
   den_clone149->SetConfidenceLevel(0.6826895);
   den_clone149->SetBetaAlpha(1);
   den_clone149->SetBetaBeta(1);
   den_clone149->SetWeight(1);
   den_clone149->SetStatisticOption(0);
   den_clone149->SetPosteriorMode(0);
   den_clone149->SetShortestInterval(0);
   den_clone149->SetTotalEvents(0,0);
   den_clone149->SetPassedEvents(0,0);
   den_clone149->SetTotalEvents(1,201);
   den_clone149->SetPassedEvents(1,129);
   den_clone149->SetTotalEvents(2,1175);
   den_clone149->SetPassedEvents(2,1005);
   den_clone149->SetTotalEvents(3,1773);
   den_clone149->SetPassedEvents(3,1652);
   den_clone149->SetTotalEvents(4,1857);
   den_clone149->SetPassedEvents(4,1777);
   den_clone149->SetTotalEvents(5,2022);
   den_clone149->SetPassedEvents(5,1949);
   den_clone149->SetTotalEvents(6,1936);
   den_clone149->SetPassedEvents(6,1856);
   den_clone149->SetTotalEvents(7,1885);
   den_clone149->SetPassedEvents(7,1820);
   den_clone149->SetTotalEvents(8,1930);
   den_clone149->SetPassedEvents(8,1545);
   den_clone149->SetTotalEvents(9,2006);
   den_clone149->SetPassedEvents(9,1531);
   den_clone149->SetTotalEvents(10,1919);
   den_clone149->SetPassedEvents(10,1814);
   den_clone149->SetTotalEvents(11,1948);
   den_clone149->SetPassedEvents(11,1872);
   den_clone149->SetTotalEvents(12,1895);
   den_clone149->SetPassedEvents(12,1810);
   den_clone149->SetTotalEvents(13,1940);
   den_clone149->SetPassedEvents(13,1869);
   den_clone149->SetTotalEvents(14,1976);
   den_clone149->SetPassedEvents(14,1896);
   den_clone149->SetTotalEvents(15,1915);
   den_clone149->SetPassedEvents(15,1838);
   den_clone149->SetTotalEvents(16,1826);
   den_clone149->SetPassedEvents(16,1643);
   den_clone149->SetTotalEvents(17,1724);
   den_clone149->SetPassedEvents(17,1370);
   den_clone149->SetTotalEvents(18,1798);
   den_clone149->SetPassedEvents(18,1581);
   den_clone149->SetTotalEvents(19,1915);
   den_clone149->SetPassedEvents(19,1828);
   den_clone149->SetTotalEvents(20,1924);
   den_clone149->SetPassedEvents(20,1813);
   den_clone149->SetTotalEvents(21,1930);
   den_clone149->SetPassedEvents(21,1833);
   den_clone149->SetTotalEvents(22,1936);
   den_clone149->SetPassedEvents(22,1832);
   den_clone149->SetTotalEvents(23,1955);
   den_clone149->SetPassedEvents(23,1848);
   den_clone149->SetTotalEvents(24,1818);
   den_clone149->SetPassedEvents(24,1711);
   den_clone149->SetTotalEvents(25,1891);
   den_clone149->SetPassedEvents(25,1733);
   den_clone149->SetTotalEvents(26,0);
   den_clone149->SetPassedEvents(26,0);
   den_clone149->SetFillColor(19);
   den_clone149->SetLineWidth(2);
   den_clone149->SetMarkerStyle(23);
   den_clone149->Draw("same samep");
   
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
   TText *text = new TText(0.17,0.17,"ME3/1");
   text->SetNDC();
   text->Draw();
   text = new TText(0.17,0.24,"CLCT");
   text->SetNDC();
   text->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
