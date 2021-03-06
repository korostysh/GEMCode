void Eff_ME22_ALCTandCLCT_Combined()
{
//=========Macro generated from canvas: c/c
//=========  (Wed Oct  9 14:54:27 2019) by ROOT version 6.14/09
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   c->SetHighLightColor(2);
   c->Range(0.9142857,-0.15375,1.628571,1.1275);
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
   
   TH1F *base__48 = new TH1F("base__48","",25,1,1.6);
   base__48->SetMinimum(0);
   base__48->SetMaximum(1.025);
   base__48->SetLineStyle(0);
   base__48->SetMarkerStyle(20);
   base__48->GetXaxis()->SetTitle("True muon |#eta|");
   base__48->GetXaxis()->SetLabelFont(42);
   base__48->GetXaxis()->SetLabelOffset(0.007);
   base__48->GetXaxis()->SetLabelSize(0.05);
   base__48->GetXaxis()->SetTitleSize(0.06);
   base__48->GetXaxis()->SetTitleOffset(0.9);
   base__48->GetXaxis()->SetTitleFont(42);
   base__48->GetYaxis()->SetTitle("Efficiency");
   base__48->GetYaxis()->SetLabelFont(42);
   base__48->GetYaxis()->SetLabelOffset(0.007);
   base__48->GetYaxis()->SetLabelSize(0.05);
   base__48->GetYaxis()->SetTitleSize(0.06);
   base__48->GetYaxis()->SetTitleOffset(0.9);
   base__48->GetYaxis()->SetTitleFont(42);
   base__48->GetZaxis()->SetLabelFont(42);
   base__48->GetZaxis()->SetLabelOffset(0.007);
   base__48->GetZaxis()->SetLabelSize(0.05);
   base__48->GetZaxis()->SetTitleSize(0.06);
   base__48->GetZaxis()->SetTitleFont(42);
   base__48->Draw("");
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
   
   TEfficiency * den_clone189 = new TEfficiency("den_clone","",25,1,1.6);
   
   den_clone189->SetConfidenceLevel(0.6826895);
   den_clone189->SetBetaAlpha(1);
   den_clone189->SetBetaBeta(1);
   den_clone189->SetWeight(1);
   den_clone189->SetStatisticOption(0);
   den_clone189->SetPosteriorMode(0);
   den_clone189->SetShortestInterval(0);
   den_clone189->SetTotalEvents(0,0);
   den_clone189->SetPassedEvents(0,0);
   den_clone189->SetTotalEvents(1,722);
   den_clone189->SetPassedEvents(1,577);
   den_clone189->SetTotalEvents(2,1378);
   den_clone189->SetPassedEvents(2,1263);
   den_clone189->SetTotalEvents(3,1586);
   den_clone189->SetPassedEvents(3,1533);
   den_clone189->SetTotalEvents(4,1615);
   den_clone189->SetPassedEvents(4,1546);
   den_clone189->SetTotalEvents(5,1558);
   den_clone189->SetPassedEvents(5,1496);
   den_clone189->SetTotalEvents(6,1637);
   den_clone189->SetPassedEvents(6,1592);
   den_clone189->SetTotalEvents(7,1701);
   den_clone189->SetPassedEvents(7,1616);
   den_clone189->SetTotalEvents(8,1602);
   den_clone189->SetPassedEvents(8,1515);
   den_clone189->SetTotalEvents(9,1691);
   den_clone189->SetPassedEvents(9,1636);
   den_clone189->SetTotalEvents(10,1712);
   den_clone189->SetPassedEvents(10,1659);
   den_clone189->SetTotalEvents(11,1605);
   den_clone189->SetPassedEvents(11,1489);
   den_clone189->SetTotalEvents(12,1587);
   den_clone189->SetPassedEvents(12,1480);
   den_clone189->SetTotalEvents(13,1710);
   den_clone189->SetPassedEvents(13,1652);
   den_clone189->SetTotalEvents(14,1719);
   den_clone189->SetPassedEvents(14,1661);
   den_clone189->SetTotalEvents(15,1694);
   den_clone189->SetPassedEvents(15,1613);
   den_clone189->SetTotalEvents(16,1598);
   den_clone189->SetPassedEvents(16,1463);
   den_clone189->SetTotalEvents(17,1631);
   den_clone189->SetPassedEvents(17,1479);
   den_clone189->SetTotalEvents(18,1701);
   den_clone189->SetPassedEvents(18,1641);
   den_clone189->SetTotalEvents(19,1613);
   den_clone189->SetPassedEvents(19,1556);
   den_clone189->SetTotalEvents(20,1634);
   den_clone189->SetPassedEvents(20,1577);
   den_clone189->SetTotalEvents(21,1586);
   den_clone189->SetPassedEvents(21,1530);
   den_clone189->SetTotalEvents(22,1604);
   den_clone189->SetPassedEvents(22,1544);
   den_clone189->SetTotalEvents(23,1430);
   den_clone189->SetPassedEvents(23,1232);
   den_clone189->SetTotalEvents(24,648);
   den_clone189->SetPassedEvents(24,502);
   den_clone189->SetTotalEvents(25,52);
   den_clone189->SetPassedEvents(25,17);
   den_clone189->SetTotalEvents(26,0);
   den_clone189->SetPassedEvents(26,0);
   den_clone189->SetFillColor(19);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ff0000");
   den_clone189->SetLineColor(ci);
   den_clone189->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   den_clone189->SetMarkerColor(ci);
   den_clone189->SetMarkerStyle(22);
   den_clone189->Draw("same samep");
   
   TEfficiency * den_clone190 = new TEfficiency("den_clone","",25,1,1.6);
   
   den_clone190->SetConfidenceLevel(0.6826895);
   den_clone190->SetBetaAlpha(1);
   den_clone190->SetBetaBeta(1);
   den_clone190->SetWeight(1);
   den_clone190->SetStatisticOption(0);
   den_clone190->SetPosteriorMode(0);
   den_clone190->SetShortestInterval(0);
   den_clone190->SetTotalEvents(0,0);
   den_clone190->SetPassedEvents(0,0);
   den_clone190->SetTotalEvents(1,661);
   den_clone190->SetPassedEvents(1,535);
   den_clone190->SetTotalEvents(2,1447);
   den_clone190->SetPassedEvents(2,1329);
   den_clone190->SetTotalEvents(3,1653);
   den_clone190->SetPassedEvents(3,1591);
   den_clone190->SetTotalEvents(4,1576);
   den_clone190->SetPassedEvents(4,1515);
   den_clone190->SetTotalEvents(5,1546);
   den_clone190->SetPassedEvents(5,1470);
   den_clone190->SetTotalEvents(6,1515);
   den_clone190->SetPassedEvents(6,1472);
   den_clone190->SetTotalEvents(7,1658);
   den_clone190->SetPassedEvents(7,1576);
   den_clone190->SetTotalEvents(8,1664);
   den_clone190->SetPassedEvents(8,1563);
   den_clone190->SetTotalEvents(9,1619);
   den_clone190->SetPassedEvents(9,1563);
   den_clone190->SetTotalEvents(10,1699);
   den_clone190->SetPassedEvents(10,1644);
   den_clone190->SetTotalEvents(11,1658);
   den_clone190->SetPassedEvents(11,1553);
   den_clone190->SetTotalEvents(12,1727);
   den_clone190->SetPassedEvents(12,1615);
   den_clone190->SetTotalEvents(13,1713);
   den_clone190->SetPassedEvents(13,1651);
   den_clone190->SetTotalEvents(14,1631);
   den_clone190->SetPassedEvents(14,1584);
   den_clone190->SetTotalEvents(15,1649);
   den_clone190->SetPassedEvents(15,1572);
   den_clone190->SetTotalEvents(16,1566);
   den_clone190->SetPassedEvents(16,1398);
   den_clone190->SetTotalEvents(17,1784);
   den_clone190->SetPassedEvents(17,1619);
   den_clone190->SetTotalEvents(18,1572);
   den_clone190->SetPassedEvents(18,1520);
   den_clone190->SetTotalEvents(19,1752);
   den_clone190->SetPassedEvents(19,1696);
   den_clone190->SetTotalEvents(20,1661);
   den_clone190->SetPassedEvents(20,1602);
   den_clone190->SetTotalEvents(21,1604);
   den_clone190->SetPassedEvents(21,1537);
   den_clone190->SetTotalEvents(22,1589);
   den_clone190->SetPassedEvents(22,1508);
   den_clone190->SetTotalEvents(23,1526);
   den_clone190->SetPassedEvents(23,1302);
   den_clone190->SetTotalEvents(24,750);
   den_clone190->SetPassedEvents(24,587);
   den_clone190->SetTotalEvents(25,65);
   den_clone190->SetPassedEvents(25,21);
   den_clone190->SetTotalEvents(26,0);
   den_clone190->SetPassedEvents(26,0);
   den_clone190->SetFillColor(19);

   ci = TColor::GetColor("#0000ff");
   den_clone190->SetLineColor(ci);
   den_clone190->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   den_clone190->SetMarkerColor(ci);
   den_clone190->SetMarkerStyle(21);
   den_clone190->Draw("same samep");
   
   TEfficiency * den_clone191 = new TEfficiency("den_clone","",25,1,1.6);
   
   den_clone191->SetConfidenceLevel(0.6826895);
   den_clone191->SetBetaAlpha(1);
   den_clone191->SetBetaBeta(1);
   den_clone191->SetWeight(1);
   den_clone191->SetStatisticOption(0);
   den_clone191->SetPosteriorMode(0);
   den_clone191->SetShortestInterval(0);
   den_clone191->SetTotalEvents(0,0);
   den_clone191->SetPassedEvents(0,0);
   den_clone191->SetTotalEvents(1,661);
   den_clone191->SetPassedEvents(1,535);
   den_clone191->SetTotalEvents(2,1447);
   den_clone191->SetPassedEvents(2,1329);
   den_clone191->SetTotalEvents(3,1653);
   den_clone191->SetPassedEvents(3,1591);
   den_clone191->SetTotalEvents(4,1576);
   den_clone191->SetPassedEvents(4,1515);
   den_clone191->SetTotalEvents(5,1546);
   den_clone191->SetPassedEvents(5,1470);
   den_clone191->SetTotalEvents(6,1515);
   den_clone191->SetPassedEvents(6,1472);
   den_clone191->SetTotalEvents(7,1658);
   den_clone191->SetPassedEvents(7,1576);
   den_clone191->SetTotalEvents(8,1664);
   den_clone191->SetPassedEvents(8,1563);
   den_clone191->SetTotalEvents(9,1619);
   den_clone191->SetPassedEvents(9,1563);
   den_clone191->SetTotalEvents(10,1699);
   den_clone191->SetPassedEvents(10,1644);
   den_clone191->SetTotalEvents(11,1658);
   den_clone191->SetPassedEvents(11,1553);
   den_clone191->SetTotalEvents(12,1727);
   den_clone191->SetPassedEvents(12,1615);
   den_clone191->SetTotalEvents(13,1713);
   den_clone191->SetPassedEvents(13,1651);
   den_clone191->SetTotalEvents(14,1631);
   den_clone191->SetPassedEvents(14,1584);
   den_clone191->SetTotalEvents(15,1649);
   den_clone191->SetPassedEvents(15,1572);
   den_clone191->SetTotalEvents(16,1566);
   den_clone191->SetPassedEvents(16,1398);
   den_clone191->SetTotalEvents(17,1784);
   den_clone191->SetPassedEvents(17,1619);
   den_clone191->SetTotalEvents(18,1572);
   den_clone191->SetPassedEvents(18,1520);
   den_clone191->SetTotalEvents(19,1752);
   den_clone191->SetPassedEvents(19,1696);
   den_clone191->SetTotalEvents(20,1661);
   den_clone191->SetPassedEvents(20,1602);
   den_clone191->SetTotalEvents(21,1604);
   den_clone191->SetPassedEvents(21,1537);
   den_clone191->SetTotalEvents(22,1589);
   den_clone191->SetPassedEvents(22,1508);
   den_clone191->SetTotalEvents(23,1526);
   den_clone191->SetPassedEvents(23,1302);
   den_clone191->SetTotalEvents(24,750);
   den_clone191->SetPassedEvents(24,587);
   den_clone191->SetTotalEvents(25,65);
   den_clone191->SetPassedEvents(25,21);
   den_clone191->SetTotalEvents(26,0);
   den_clone191->SetPassedEvents(26,0);
   den_clone191->SetFillColor(19);
   den_clone191->SetLineWidth(2);
   den_clone191->SetMarkerStyle(23);
   den_clone191->Draw("same samep");
   
   TEfficiency * den_clone192 = new TEfficiency("den_clone","",25,1,1.6);
   
   den_clone192->SetConfidenceLevel(0.6826895);
   den_clone192->SetBetaAlpha(1);
   den_clone192->SetBetaBeta(1);
   den_clone192->SetWeight(1);
   den_clone192->SetStatisticOption(0);
   den_clone192->SetPosteriorMode(0);
   den_clone192->SetShortestInterval(0);
   den_clone192->SetTotalEvents(0,0);
   den_clone192->SetPassedEvents(0,0);
   den_clone192->SetTotalEvents(1,243);
   den_clone192->SetPassedEvents(1,222);
   den_clone192->SetTotalEvents(2,569);
   den_clone192->SetPassedEvents(2,539);
   den_clone192->SetTotalEvents(3,604);
   den_clone192->SetPassedEvents(3,577);
   den_clone192->SetTotalEvents(4,566);
   den_clone192->SetPassedEvents(4,543);
   den_clone192->SetTotalEvents(5,576);
   den_clone192->SetPassedEvents(5,546);
   den_clone192->SetTotalEvents(6,585);
   den_clone192->SetPassedEvents(6,575);
   den_clone192->SetTotalEvents(7,605);
   den_clone192->SetPassedEvents(7,568);
   den_clone192->SetTotalEvents(8,549);
   den_clone192->SetPassedEvents(8,508);
   den_clone192->SetTotalEvents(9,532);
   den_clone192->SetPassedEvents(9,520);
   den_clone192->SetTotalEvents(10,593);
   den_clone192->SetPassedEvents(10,572);
   den_clone192->SetTotalEvents(11,614);
   den_clone192->SetPassedEvents(11,561);
   den_clone192->SetTotalEvents(12,616);
   den_clone192->SetPassedEvents(12,572);
   den_clone192->SetTotalEvents(13,590);
   den_clone192->SetPassedEvents(13,568);
   den_clone192->SetTotalEvents(14,630);
   den_clone192->SetPassedEvents(14,602);
   den_clone192->SetTotalEvents(15,514);
   den_clone192->SetPassedEvents(15,486);
   den_clone192->SetTotalEvents(16,549);
   den_clone192->SetPassedEvents(16,501);
   den_clone192->SetTotalEvents(17,580);
   den_clone192->SetPassedEvents(17,528);
   den_clone192->SetTotalEvents(18,622);
   den_clone192->SetPassedEvents(18,596);
   den_clone192->SetTotalEvents(19,608);
   den_clone192->SetPassedEvents(19,591);
   den_clone192->SetTotalEvents(20,580);
   den_clone192->SetPassedEvents(20,561);
   den_clone192->SetTotalEvents(21,534);
   den_clone192->SetPassedEvents(21,515);
   den_clone192->SetTotalEvents(22,588);
   den_clone192->SetPassedEvents(22,566);
   den_clone192->SetTotalEvents(23,457);
   den_clone192->SetPassedEvents(23,418);
   den_clone192->SetTotalEvents(24,230);
   den_clone192->SetPassedEvents(24,206);
   den_clone192->SetTotalEvents(25,12);
   den_clone192->SetPassedEvents(25,10);
   den_clone192->SetTotalEvents(26,0);
   den_clone192->SetPassedEvents(26,0);
   den_clone192->SetFillColor(19);

   ci = TColor::GetColor("#00cc00");
   den_clone192->SetLineColor(ci);
   den_clone192->SetLineWidth(2);

   ci = TColor::GetColor("#00cc00");
   den_clone192->SetMarkerColor(ci);
   den_clone192->SetMarkerStyle(23);
   den_clone192->Draw("same samep");
   
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
   TText *text = new TText(0.17,0.17,"ME2/2");
   text->SetNDC();
   text->Draw();
   text = new TText(0.17,0.24,"ALCTandCLCT");
   text->SetNDC();
   text->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
