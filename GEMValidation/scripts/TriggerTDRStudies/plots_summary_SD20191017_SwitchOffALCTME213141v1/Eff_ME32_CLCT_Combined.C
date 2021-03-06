void Eff_ME32_CLCT_Combined()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Oct 17 16:28:24 2019) by ROOT version 6.14/09
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   c->SetHighLightColor(2);
   c->Range(1.014286,-0.15375,1.728571,1.1275);
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
   
   TH1F *base__124 = new TH1F("base__124","",25,1.1,1.7);
   base__124->SetMinimum(0);
   base__124->SetMaximum(1.025);
   base__124->SetLineStyle(0);
   base__124->SetMarkerStyle(20);
   base__124->GetXaxis()->SetTitle("True muon |#eta|");
   base__124->GetXaxis()->SetLabelFont(42);
   base__124->GetXaxis()->SetLabelOffset(0.007);
   base__124->GetXaxis()->SetLabelSize(0.05);
   base__124->GetXaxis()->SetTitleSize(0.06);
   base__124->GetXaxis()->SetTitleOffset(0.9);
   base__124->GetXaxis()->SetTitleFont(42);
   base__124->GetYaxis()->SetTitle("Efficiency");
   base__124->GetYaxis()->SetLabelFont(42);
   base__124->GetYaxis()->SetLabelOffset(0.007);
   base__124->GetYaxis()->SetLabelSize(0.05);
   base__124->GetYaxis()->SetTitleSize(0.06);
   base__124->GetYaxis()->SetTitleOffset(0.9);
   base__124->GetYaxis()->SetTitleFont(42);
   base__124->GetZaxis()->SetLabelFont(42);
   base__124->GetZaxis()->SetLabelOffset(0.007);
   base__124->GetZaxis()->SetLabelSize(0.05);
   base__124->GetZaxis()->SetTitleSize(0.06);
   base__124->GetZaxis()->SetTitleFont(42);
   base__124->Draw("");
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
   
   TEfficiency * den_clone354 = new TEfficiency("den_clone","",25,1.1,1.7);
   
   den_clone354->SetConfidenceLevel(0.6826895);
   den_clone354->SetBetaAlpha(1);
   den_clone354->SetBetaBeta(1);
   den_clone354->SetWeight(1);
   den_clone354->SetStatisticOption(0);
   den_clone354->SetPosteriorMode(0);
   den_clone354->SetShortestInterval(0);
   den_clone354->SetTotalEvents(0,0);
   den_clone354->SetPassedEvents(0,0);
   den_clone354->SetTotalEvents(1,855);
   den_clone354->SetPassedEvents(1,731);
   den_clone354->SetTotalEvents(2,1593);
   den_clone354->SetPassedEvents(2,1473);
   den_clone354->SetTotalEvents(3,1701);
   den_clone354->SetPassedEvents(3,1626);
   den_clone354->SetTotalEvents(4,1553);
   den_clone354->SetPassedEvents(4,1446);
   den_clone354->SetTotalEvents(5,1726);
   den_clone354->SetPassedEvents(5,1631);
   den_clone354->SetTotalEvents(6,1720);
   den_clone354->SetPassedEvents(6,1657);
   den_clone354->SetTotalEvents(7,1576);
   den_clone354->SetPassedEvents(7,1473);
   den_clone354->SetTotalEvents(8,1615);
   den_clone354->SetPassedEvents(8,1499);
   den_clone354->SetTotalEvents(9,1703);
   den_clone354->SetPassedEvents(9,1625);
   den_clone354->SetTotalEvents(10,1708);
   den_clone354->SetPassedEvents(10,1639);
   den_clone354->SetTotalEvents(11,1714);
   den_clone354->SetPassedEvents(11,1585);
   den_clone354->SetTotalEvents(12,1599);
   den_clone354->SetPassedEvents(12,1430);
   den_clone354->SetTotalEvents(13,1632);
   den_clone354->SetPassedEvents(13,1547);
   den_clone354->SetTotalEvents(14,1725);
   den_clone354->SetPassedEvents(14,1672);
   den_clone354->SetTotalEvents(15,1623);
   den_clone354->SetPassedEvents(15,1566);
   den_clone354->SetTotalEvents(16,1611);
   den_clone354->SetPassedEvents(16,1410);
   den_clone354->SetTotalEvents(17,1618);
   den_clone354->SetPassedEvents(17,1403);
   den_clone354->SetTotalEvents(18,1639);
   den_clone354->SetPassedEvents(18,1550);
   den_clone354->SetTotalEvents(19,1544);
   den_clone354->SetPassedEvents(19,1470);
   den_clone354->SetTotalEvents(20,1568);
   den_clone354->SetPassedEvents(20,1496);
   den_clone354->SetTotalEvents(21,1679);
   den_clone354->SetPassedEvents(21,1614);
   den_clone354->SetTotalEvents(22,1515);
   den_clone354->SetPassedEvents(22,1437);
   den_clone354->SetTotalEvents(23,1569);
   den_clone354->SetPassedEvents(23,1477);
   den_clone354->SetTotalEvents(24,1145);
   den_clone354->SetPassedEvents(24,936);
   den_clone354->SetTotalEvents(25,309);
   den_clone354->SetPassedEvents(25,167);
   den_clone354->SetTotalEvents(26,0);
   den_clone354->SetPassedEvents(26,0);
   den_clone354->SetFillColor(19);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ff0000");
   den_clone354->SetLineColor(ci);
   den_clone354->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   den_clone354->SetMarkerColor(ci);
   den_clone354->SetMarkerStyle(22);
   den_clone354->Draw("same samep");
   
   TEfficiency * den_clone355 = new TEfficiency("den_clone","",25,1.1,1.7);
   
   den_clone355->SetConfidenceLevel(0.6826895);
   den_clone355->SetBetaAlpha(1);
   den_clone355->SetBetaBeta(1);
   den_clone355->SetWeight(1);
   den_clone355->SetStatisticOption(0);
   den_clone355->SetPosteriorMode(0);
   den_clone355->SetShortestInterval(0);
   den_clone355->SetTotalEvents(0,0);
   den_clone355->SetPassedEvents(0,0);
   den_clone355->SetTotalEvents(1,742);
   den_clone355->SetPassedEvents(1,627);
   den_clone355->SetTotalEvents(2,1439);
   den_clone355->SetPassedEvents(2,1358);
   den_clone355->SetTotalEvents(3,1590);
   den_clone355->SetPassedEvents(3,1531);
   den_clone355->SetTotalEvents(4,1567);
   den_clone355->SetPassedEvents(4,1461);
   den_clone355->SetTotalEvents(5,1559);
   den_clone355->SetPassedEvents(5,1476);
   den_clone355->SetTotalEvents(6,1619);
   den_clone355->SetPassedEvents(6,1563);
   den_clone355->SetTotalEvents(7,1650);
   den_clone355->SetPassedEvents(7,1553);
   den_clone355->SetTotalEvents(8,1631);
   den_clone355->SetPassedEvents(8,1519);
   den_clone355->SetTotalEvents(9,1640);
   den_clone355->SetPassedEvents(9,1561);
   den_clone355->SetTotalEvents(10,1566);
   den_clone355->SetPassedEvents(10,1512);
   den_clone355->SetTotalEvents(11,1602);
   den_clone355->SetPassedEvents(11,1483);
   den_clone355->SetTotalEvents(12,1502);
   den_clone355->SetPassedEvents(12,1349);
   den_clone355->SetTotalEvents(13,1713);
   den_clone355->SetPassedEvents(13,1616);
   den_clone355->SetTotalEvents(14,1533);
   den_clone355->SetPassedEvents(14,1471);
   den_clone355->SetTotalEvents(15,1664);
   den_clone355->SetPassedEvents(15,1593);
   den_clone355->SetTotalEvents(16,1649);
   den_clone355->SetPassedEvents(16,1440);
   den_clone355->SetTotalEvents(17,1491);
   den_clone355->SetPassedEvents(17,1251);
   den_clone355->SetTotalEvents(18,1635);
   den_clone355->SetPassedEvents(18,1556);
   den_clone355->SetTotalEvents(19,1628);
   den_clone355->SetPassedEvents(19,1547);
   den_clone355->SetTotalEvents(20,1624);
   den_clone355->SetPassedEvents(20,1548);
   den_clone355->SetTotalEvents(21,1572);
   den_clone355->SetPassedEvents(21,1499);
   den_clone355->SetTotalEvents(22,1537);
   den_clone355->SetPassedEvents(22,1457);
   den_clone355->SetTotalEvents(23,1564);
   den_clone355->SetPassedEvents(23,1452);
   den_clone355->SetTotalEvents(24,1060);
   den_clone355->SetPassedEvents(24,870);
   den_clone355->SetTotalEvents(25,301);
   den_clone355->SetPassedEvents(25,172);
   den_clone355->SetTotalEvents(26,0);
   den_clone355->SetPassedEvents(26,0);
   den_clone355->SetFillColor(19);

   ci = TColor::GetColor("#0000ff");
   den_clone355->SetLineColor(ci);
   den_clone355->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   den_clone355->SetMarkerColor(ci);
   den_clone355->SetMarkerStyle(21);
   den_clone355->Draw("same samep");
   
   TEfficiency * den_clone356 = new TEfficiency("den_clone","",25,1.1,1.7);
   
   den_clone356->SetConfidenceLevel(0.6826895);
   den_clone356->SetBetaAlpha(1);
   den_clone356->SetBetaBeta(1);
   den_clone356->SetWeight(1);
   den_clone356->SetStatisticOption(0);
   den_clone356->SetPosteriorMode(0);
   den_clone356->SetShortestInterval(0);
   den_clone356->SetTotalEvents(0,0);
   den_clone356->SetPassedEvents(0,0);
   den_clone356->SetTotalEvents(1,729);
   den_clone356->SetPassedEvents(1,616);
   den_clone356->SetTotalEvents(2,1435);
   den_clone356->SetPassedEvents(2,1356);
   den_clone356->SetTotalEvents(3,1570);
   den_clone356->SetPassedEvents(3,1510);
   den_clone356->SetTotalEvents(4,1568);
   den_clone356->SetPassedEvents(4,1463);
   den_clone356->SetTotalEvents(5,1565);
   den_clone356->SetPassedEvents(5,1488);
   den_clone356->SetTotalEvents(6,1590);
   den_clone356->SetPassedEvents(6,1539);
   den_clone356->SetTotalEvents(7,1634);
   den_clone356->SetPassedEvents(7,1534);
   den_clone356->SetTotalEvents(8,1637);
   den_clone356->SetPassedEvents(8,1529);
   den_clone356->SetTotalEvents(9,1650);
   den_clone356->SetPassedEvents(9,1571);
   den_clone356->SetTotalEvents(10,1552);
   den_clone356->SetPassedEvents(10,1499);
   den_clone356->SetTotalEvents(11,1610);
   den_clone356->SetPassedEvents(11,1491);
   den_clone356->SetTotalEvents(12,1476);
   den_clone356->SetPassedEvents(12,1326);
   den_clone356->SetTotalEvents(13,1727);
   den_clone356->SetPassedEvents(13,1624);
   den_clone356->SetTotalEvents(14,1523);
   den_clone356->SetPassedEvents(14,1461);
   den_clone356->SetTotalEvents(15,1658);
   den_clone356->SetPassedEvents(15,1589);
   den_clone356->SetTotalEvents(16,1597);
   den_clone356->SetPassedEvents(16,1388);
   den_clone356->SetTotalEvents(17,1481);
   den_clone356->SetPassedEvents(17,1247);
   den_clone356->SetTotalEvents(18,1581);
   den_clone356->SetPassedEvents(18,1504);
   den_clone356->SetTotalEvents(19,1610);
   den_clone356->SetPassedEvents(19,1532);
   den_clone356->SetTotalEvents(20,1610);
   den_clone356->SetPassedEvents(20,1536);
   den_clone356->SetTotalEvents(21,1566);
   den_clone356->SetPassedEvents(21,1491);
   den_clone356->SetTotalEvents(22,1534);
   den_clone356->SetPassedEvents(22,1453);
   den_clone356->SetTotalEvents(23,1570);
   den_clone356->SetPassedEvents(23,1461);
   den_clone356->SetTotalEvents(24,1023);
   den_clone356->SetPassedEvents(24,838);
   den_clone356->SetTotalEvents(25,285);
   den_clone356->SetPassedEvents(25,163);
   den_clone356->SetTotalEvents(26,0);
   den_clone356->SetPassedEvents(26,0);
   den_clone356->SetFillColor(19);
   den_clone356->SetLineWidth(2);
   den_clone356->SetMarkerStyle(23);
   den_clone356->Draw("same samep");
   
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
   TText *text = new TText(0.17,0.17,"ME3/2");
   text->SetNDC();
   text->Draw();
   text = new TText(0.17,0.24,"CLCT");
   text->SetNDC();
   text->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
