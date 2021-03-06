void Eff_ME22_ALCT_Combined_PU300()
{
//=========Macro generated from canvas: c/c
//=========  (Wed Oct  9 13:21:04 2019) by ROOT version 6.14/09
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   c->SetHighLightColor(2);
   c->Range(0.9142857,0.42125,1.628571,1.0775);
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
   
   TH1F *base__72 = new TH1F("base__72","",25,1,1.6);
   base__72->SetMinimum(0.5);
   base__72->SetMaximum(1.025);
   base__72->SetLineStyle(0);
   base__72->SetMarkerStyle(20);
   base__72->GetXaxis()->SetTitle("True muon |#eta|");
   base__72->GetXaxis()->SetLabelFont(42);
   base__72->GetXaxis()->SetLabelOffset(0.007);
   base__72->GetXaxis()->SetLabelSize(0.05);
   base__72->GetXaxis()->SetTitleSize(0.06);
   base__72->GetXaxis()->SetTitleOffset(0.9);
   base__72->GetXaxis()->SetTitleFont(42);
   base__72->GetYaxis()->SetTitle("Efficiency");
   base__72->GetYaxis()->SetLabelFont(42);
   base__72->GetYaxis()->SetLabelOffset(0.007);
   base__72->GetYaxis()->SetLabelSize(0.05);
   base__72->GetYaxis()->SetTitleSize(0.06);
   base__72->GetYaxis()->SetTitleOffset(0.9);
   base__72->GetYaxis()->SetTitleFont(42);
   base__72->GetZaxis()->SetLabelFont(42);
   base__72->GetZaxis()->SetLabelOffset(0.007);
   base__72->GetZaxis()->SetLabelSize(0.05);
   base__72->GetZaxis()->SetTitleSize(0.06);
   base__72->GetZaxis()->SetTitleFont(42);
   base__72->Draw("");
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
   
   TEfficiency * den_clone216 = new TEfficiency("den_clone","",25,1,1.6);
   
   den_clone216->SetConfidenceLevel(0.6826895);
   den_clone216->SetBetaAlpha(1);
   den_clone216->SetBetaBeta(1);
   den_clone216->SetWeight(1);
   den_clone216->SetStatisticOption(0);
   den_clone216->SetPosteriorMode(0);
   den_clone216->SetShortestInterval(0);
   den_clone216->SetTotalEvents(0,0);
   den_clone216->SetPassedEvents(0,0);
   den_clone216->SetTotalEvents(1,661);
   den_clone216->SetPassedEvents(1,583);
   den_clone216->SetTotalEvents(2,1447);
   den_clone216->SetPassedEvents(2,1389);
   den_clone216->SetTotalEvents(3,1653);
   den_clone216->SetPassedEvents(3,1653);
   den_clone216->SetTotalEvents(4,1576);
   den_clone216->SetPassedEvents(4,1576);
   den_clone216->SetTotalEvents(5,1546);
   den_clone216->SetPassedEvents(5,1544);
   den_clone216->SetTotalEvents(6,1515);
   den_clone216->SetPassedEvents(6,1513);
   den_clone216->SetTotalEvents(7,1658);
   den_clone216->SetPassedEvents(7,1657);
   den_clone216->SetTotalEvents(8,1664);
   den_clone216->SetPassedEvents(8,1664);
   den_clone216->SetTotalEvents(9,1619);
   den_clone216->SetPassedEvents(9,1615);
   den_clone216->SetTotalEvents(10,1699);
   den_clone216->SetPassedEvents(10,1694);
   den_clone216->SetTotalEvents(11,1658);
   den_clone216->SetPassedEvents(11,1654);
   den_clone216->SetTotalEvents(12,1727);
   den_clone216->SetPassedEvents(12,1725);
   den_clone216->SetTotalEvents(13,1713);
   den_clone216->SetPassedEvents(13,1711);
   den_clone216->SetTotalEvents(14,1631);
   den_clone216->SetPassedEvents(14,1630);
   den_clone216->SetTotalEvents(15,1649);
   den_clone216->SetPassedEvents(15,1646);
   den_clone216->SetTotalEvents(16,1566);
   den_clone216->SetPassedEvents(16,1563);
   den_clone216->SetTotalEvents(17,1784);
   den_clone216->SetPassedEvents(17,1783);
   den_clone216->SetTotalEvents(18,1572);
   den_clone216->SetPassedEvents(18,1572);
   den_clone216->SetTotalEvents(19,1752);
   den_clone216->SetPassedEvents(19,1748);
   den_clone216->SetTotalEvents(20,1661);
   den_clone216->SetPassedEvents(20,1659);
   den_clone216->SetTotalEvents(21,1604);
   den_clone216->SetPassedEvents(21,1602);
   den_clone216->SetTotalEvents(22,1589);
   den_clone216->SetPassedEvents(22,1586);
   den_clone216->SetTotalEvents(23,1526);
   den_clone216->SetPassedEvents(23,1429);
   den_clone216->SetTotalEvents(24,750);
   den_clone216->SetPassedEvents(24,677);
   den_clone216->SetTotalEvents(25,65);
   den_clone216->SetPassedEvents(25,32);
   den_clone216->SetTotalEvents(26,0);
   den_clone216->SetPassedEvents(26,0);
   den_clone216->SetFillColor(19);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#999999");
   den_clone216->SetLineColor(ci);
   den_clone216->SetLineWidth(2);

   ci = TColor::GetColor("#999999");
   den_clone216->SetMarkerColor(ci);
   den_clone216->SetMarkerStyle(23);
   den_clone216->Draw("same samep");
   
   TEfficiency * den_clone217 = new TEfficiency("den_clone","",25,1,1.6);
   
   den_clone217->SetConfidenceLevel(0.6826895);
   den_clone217->SetBetaAlpha(1);
   den_clone217->SetBetaBeta(1);
   den_clone217->SetWeight(1);
   den_clone217->SetStatisticOption(0);
   den_clone217->SetPosteriorMode(0);
   den_clone217->SetShortestInterval(0);
   den_clone217->SetTotalEvents(0,0);
   den_clone217->SetPassedEvents(0,0);
   den_clone217->SetTotalEvents(1,661);
   den_clone217->SetPassedEvents(1,583);
   den_clone217->SetTotalEvents(2,1447);
   den_clone217->SetPassedEvents(2,1389);
   den_clone217->SetTotalEvents(3,1653);
   den_clone217->SetPassedEvents(3,1653);
   den_clone217->SetTotalEvents(4,1576);
   den_clone217->SetPassedEvents(4,1576);
   den_clone217->SetTotalEvents(5,1546);
   den_clone217->SetPassedEvents(5,1544);
   den_clone217->SetTotalEvents(6,1515);
   den_clone217->SetPassedEvents(6,1513);
   den_clone217->SetTotalEvents(7,1658);
   den_clone217->SetPassedEvents(7,1657);
   den_clone217->SetTotalEvents(8,1664);
   den_clone217->SetPassedEvents(8,1664);
   den_clone217->SetTotalEvents(9,1619);
   den_clone217->SetPassedEvents(9,1615);
   den_clone217->SetTotalEvents(10,1699);
   den_clone217->SetPassedEvents(10,1694);
   den_clone217->SetTotalEvents(11,1658);
   den_clone217->SetPassedEvents(11,1654);
   den_clone217->SetTotalEvents(12,1727);
   den_clone217->SetPassedEvents(12,1725);
   den_clone217->SetTotalEvents(13,1713);
   den_clone217->SetPassedEvents(13,1711);
   den_clone217->SetTotalEvents(14,1631);
   den_clone217->SetPassedEvents(14,1630);
   den_clone217->SetTotalEvents(15,1649);
   den_clone217->SetPassedEvents(15,1646);
   den_clone217->SetTotalEvents(16,1566);
   den_clone217->SetPassedEvents(16,1563);
   den_clone217->SetTotalEvents(17,1784);
   den_clone217->SetPassedEvents(17,1783);
   den_clone217->SetTotalEvents(18,1572);
   den_clone217->SetPassedEvents(18,1572);
   den_clone217->SetTotalEvents(19,1752);
   den_clone217->SetPassedEvents(19,1748);
   den_clone217->SetTotalEvents(20,1661);
   den_clone217->SetPassedEvents(20,1659);
   den_clone217->SetTotalEvents(21,1604);
   den_clone217->SetPassedEvents(21,1602);
   den_clone217->SetTotalEvents(22,1589);
   den_clone217->SetPassedEvents(22,1586);
   den_clone217->SetTotalEvents(23,1526);
   den_clone217->SetPassedEvents(23,1429);
   den_clone217->SetTotalEvents(24,750);
   den_clone217->SetPassedEvents(24,677);
   den_clone217->SetTotalEvents(25,65);
   den_clone217->SetPassedEvents(25,32);
   den_clone217->SetTotalEvents(26,0);
   den_clone217->SetPassedEvents(26,0);
   den_clone217->SetFillColor(19);

   ci = TColor::GetColor("#ff0000");
   den_clone217->SetLineColor(ci);
   den_clone217->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   den_clone217->SetMarkerColor(ci);
   den_clone217->SetMarkerStyle(22);
   den_clone217->Draw("same samep");
   
   TEfficiency * den_clone218 = new TEfficiency("den_clone","",25,1,1.6);
   
   den_clone218->SetConfidenceLevel(0.6826895);
   den_clone218->SetBetaAlpha(1);
   den_clone218->SetBetaBeta(1);
   den_clone218->SetWeight(1);
   den_clone218->SetStatisticOption(0);
   den_clone218->SetPosteriorMode(0);
   den_clone218->SetShortestInterval(0);
   den_clone218->SetTotalEvents(0,0);
   den_clone218->SetPassedEvents(0,0);
   den_clone218->SetTotalEvents(1,661);
   den_clone218->SetPassedEvents(1,583);
   den_clone218->SetTotalEvents(2,1447);
   den_clone218->SetPassedEvents(2,1389);
   den_clone218->SetTotalEvents(3,1653);
   den_clone218->SetPassedEvents(3,1653);
   den_clone218->SetTotalEvents(4,1576);
   den_clone218->SetPassedEvents(4,1576);
   den_clone218->SetTotalEvents(5,1546);
   den_clone218->SetPassedEvents(5,1544);
   den_clone218->SetTotalEvents(6,1515);
   den_clone218->SetPassedEvents(6,1513);
   den_clone218->SetTotalEvents(7,1658);
   den_clone218->SetPassedEvents(7,1657);
   den_clone218->SetTotalEvents(8,1664);
   den_clone218->SetPassedEvents(8,1664);
   den_clone218->SetTotalEvents(9,1619);
   den_clone218->SetPassedEvents(9,1615);
   den_clone218->SetTotalEvents(10,1699);
   den_clone218->SetPassedEvents(10,1694);
   den_clone218->SetTotalEvents(11,1658);
   den_clone218->SetPassedEvents(11,1654);
   den_clone218->SetTotalEvents(12,1727);
   den_clone218->SetPassedEvents(12,1725);
   den_clone218->SetTotalEvents(13,1713);
   den_clone218->SetPassedEvents(13,1711);
   den_clone218->SetTotalEvents(14,1631);
   den_clone218->SetPassedEvents(14,1630);
   den_clone218->SetTotalEvents(15,1649);
   den_clone218->SetPassedEvents(15,1646);
   den_clone218->SetTotalEvents(16,1566);
   den_clone218->SetPassedEvents(16,1563);
   den_clone218->SetTotalEvents(17,1784);
   den_clone218->SetPassedEvents(17,1783);
   den_clone218->SetTotalEvents(18,1572);
   den_clone218->SetPassedEvents(18,1572);
   den_clone218->SetTotalEvents(19,1752);
   den_clone218->SetPassedEvents(19,1748);
   den_clone218->SetTotalEvents(20,1661);
   den_clone218->SetPassedEvents(20,1659);
   den_clone218->SetTotalEvents(21,1604);
   den_clone218->SetPassedEvents(21,1602);
   den_clone218->SetTotalEvents(22,1589);
   den_clone218->SetPassedEvents(22,1586);
   den_clone218->SetTotalEvents(23,1526);
   den_clone218->SetPassedEvents(23,1429);
   den_clone218->SetTotalEvents(24,750);
   den_clone218->SetPassedEvents(24,677);
   den_clone218->SetTotalEvents(25,65);
   den_clone218->SetPassedEvents(25,32);
   den_clone218->SetTotalEvents(26,0);
   den_clone218->SetPassedEvents(26,0);
   den_clone218->SetFillColor(19);

   ci = TColor::GetColor("#0000ff");
   den_clone218->SetLineColor(ci);
   den_clone218->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   den_clone218->SetMarkerColor(ci);
   den_clone218->SetMarkerStyle(21);
   den_clone218->Draw("same samep");
   
   TEfficiency * den_clone219 = new TEfficiency("den_clone","",25,1,1.6);
   
   den_clone219->SetConfidenceLevel(0.6826895);
   den_clone219->SetBetaAlpha(1);
   den_clone219->SetBetaBeta(1);
   den_clone219->SetWeight(1);
   den_clone219->SetStatisticOption(0);
   den_clone219->SetPosteriorMode(0);
   den_clone219->SetShortestInterval(0);
   den_clone219->SetTotalEvents(0,0);
   den_clone219->SetPassedEvents(0,0);
   den_clone219->SetTotalEvents(1,285);
   den_clone219->SetPassedEvents(1,246);
   den_clone219->SetTotalEvents(2,588);
   den_clone219->SetPassedEvents(2,570);
   den_clone219->SetTotalEvents(3,604);
   den_clone219->SetPassedEvents(3,603);
   den_clone219->SetTotalEvents(4,566);
   den_clone219->SetPassedEvents(4,566);
   den_clone219->SetTotalEvents(5,576);
   den_clone219->SetPassedEvents(5,574);
   den_clone219->SetTotalEvents(6,585);
   den_clone219->SetPassedEvents(6,585);
   den_clone219->SetTotalEvents(7,605);
   den_clone219->SetPassedEvents(7,603);
   den_clone219->SetTotalEvents(8,549);
   den_clone219->SetPassedEvents(8,549);
   den_clone219->SetTotalEvents(9,532);
   den_clone219->SetPassedEvents(9,530);
   den_clone219->SetTotalEvents(10,593);
   den_clone219->SetPassedEvents(10,592);
   den_clone219->SetTotalEvents(11,614);
   den_clone219->SetPassedEvents(11,613);
   den_clone219->SetTotalEvents(12,616);
   den_clone219->SetPassedEvents(12,614);
   den_clone219->SetTotalEvents(13,590);
   den_clone219->SetPassedEvents(13,590);
   den_clone219->SetTotalEvents(14,630);
   den_clone219->SetPassedEvents(14,629);
   den_clone219->SetTotalEvents(15,514);
   den_clone219->SetPassedEvents(15,513);
   den_clone219->SetTotalEvents(16,550);
   den_clone219->SetPassedEvents(16,549);
   den_clone219->SetTotalEvents(17,580);
   den_clone219->SetPassedEvents(17,579);
   den_clone219->SetTotalEvents(18,622);
   den_clone219->SetPassedEvents(18,621);
   den_clone219->SetTotalEvents(19,608);
   den_clone219->SetPassedEvents(19,608);
   den_clone219->SetTotalEvents(20,581);
   den_clone219->SetPassedEvents(20,580);
   den_clone219->SetTotalEvents(21,534);
   den_clone219->SetPassedEvents(21,532);
   den_clone219->SetTotalEvents(22,590);
   den_clone219->SetPassedEvents(22,588);
   den_clone219->SetTotalEvents(23,479);
   den_clone219->SetPassedEvents(23,457);
   den_clone219->SetTotalEvents(24,258);
   den_clone219->SetPassedEvents(24,231);
   den_clone219->SetTotalEvents(25,21);
   den_clone219->SetPassedEvents(25,12);
   den_clone219->SetTotalEvents(26,0);
   den_clone219->SetPassedEvents(26,0);
   den_clone219->SetFillColor(19);
   den_clone219->SetLineWidth(2);
   den_clone219->SetMarkerStyle(24);
   den_clone219->Draw("same samep");
   
   TLegend *leg = new TLegend(0,0,0,0,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextFont(62);
   leg->SetTextSize(0.05);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(0);
   TLegendEntry *entry=leg->AddEntry("den_clone","PU200 CSC Run-2","pl");
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
   entry=leg->AddEntry("den_clone","PU200 GEM-CSC","pl");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("den_clone","PU300 GEM-CSC","pl");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   leg->Draw();
   TText *text = new TText(0.17,0.17,"ME2/2");
   text->SetNDC();
   text->Draw();
   text = new TText(0.17,0.24,"ALCT");
   text->SetNDC();
   text->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
