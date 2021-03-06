void Eff_ME41_ALCT_Combined()
{
//=========Macro generated from canvas: c/c
//=========  (Mon Oct  7 10:16:53 2019) by ROOT version 6.14/09
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   c->SetHighLightColor(2);
   c->Range(1.714286,0.42125,2.428571,1.0775);
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
   
   TH1F *base__48 = new TH1F("base__48","",25,1.8,2.4);
   base__48->SetMinimum(0.5);
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
      tex = new TLatex(0.2208,0.936,"Simulation Preliminary");
tex->SetNDC();
   tex->SetTextFont(52);
   tex->SetTextSize(0.0456);
   tex->SetLineWidth(2);
   tex->Draw();
   
   TEfficiency * den_clone162 = new TEfficiency("den_clone","",25,1.8,2.4);
   
   den_clone162->SetConfidenceLevel(0.6826895);
   den_clone162->SetBetaAlpha(1);
   den_clone162->SetBetaBeta(1);
   den_clone162->SetWeight(1);
   den_clone162->SetStatisticOption(0);
   den_clone162->SetPosteriorMode(0);
   den_clone162->SetShortestInterval(0);
   den_clone162->SetTotalEvents(0,0);
   den_clone162->SetPassedEvents(0,0);
   den_clone162->SetTotalEvents(1,384);
   den_clone162->SetPassedEvents(1,324);
   den_clone162->SetTotalEvents(2,1206);
   den_clone162->SetPassedEvents(2,1152);
   den_clone162->SetTotalEvents(3,1660);
   den_clone162->SetPassedEvents(3,1647);
   den_clone162->SetTotalEvents(4,1637);
   den_clone162->SetPassedEvents(4,1634);
   den_clone162->SetTotalEvents(5,1600);
   den_clone162->SetPassedEvents(5,1595);
   den_clone162->SetTotalEvents(6,1744);
   den_clone162->SetPassedEvents(6,1733);
   den_clone162->SetTotalEvents(7,1690);
   den_clone162->SetPassedEvents(7,1594);
   den_clone162->SetTotalEvents(8,1651);
   den_clone162->SetPassedEvents(8,1389);
   den_clone162->SetTotalEvents(9,1621);
   den_clone162->SetPassedEvents(9,1474);
   den_clone162->SetTotalEvents(10,1622);
   den_clone162->SetPassedEvents(10,1618);
   den_clone162->SetTotalEvents(11,1604);
   den_clone162->SetPassedEvents(11,1600);
   den_clone162->SetTotalEvents(12,1562);
   den_clone162->SetPassedEvents(12,1557);
   den_clone162->SetTotalEvents(13,1540);
   den_clone162->SetPassedEvents(13,1535);
   den_clone162->SetTotalEvents(14,1674);
   den_clone162->SetPassedEvents(14,1658);
   den_clone162->SetTotalEvents(15,1562);
   den_clone162->SetPassedEvents(15,1452);
   den_clone162->SetTotalEvents(16,1466);
   den_clone162->SetPassedEvents(16,1316);
   den_clone162->SetTotalEvents(17,1545);
   den_clone162->SetPassedEvents(17,1481);
   den_clone162->SetTotalEvents(18,1726);
   den_clone162->SetPassedEvents(18,1720);
   den_clone162->SetTotalEvents(19,1733);
   den_clone162->SetPassedEvents(19,1729);
   den_clone162->SetTotalEvents(20,1676);
   den_clone162->SetPassedEvents(20,1670);
   den_clone162->SetTotalEvents(21,1605);
   den_clone162->SetPassedEvents(21,1597);
   den_clone162->SetTotalEvents(22,1742);
   den_clone162->SetPassedEvents(22,1730);
   den_clone162->SetTotalEvents(23,1686);
   den_clone162->SetPassedEvents(23,1678);
   den_clone162->SetTotalEvents(24,1623);
   den_clone162->SetPassedEvents(24,1611);
   den_clone162->SetTotalEvents(25,1231);
   den_clone162->SetPassedEvents(25,1151);
   den_clone162->SetTotalEvents(26,0);
   den_clone162->SetPassedEvents(26,0);
   den_clone162->SetFillColor(19);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ff0000");
   den_clone162->SetLineColor(ci);
   den_clone162->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   den_clone162->SetMarkerColor(ci);
   den_clone162->SetMarkerStyle(22);
   den_clone162->Draw("same samep");
   
   TEfficiency * den_clone163 = new TEfficiency("den_clone","",25,1.8,2.4);
   
   den_clone163->SetConfidenceLevel(0.6826895);
   den_clone163->SetBetaAlpha(1);
   den_clone163->SetBetaBeta(1);
   den_clone163->SetWeight(1);
   den_clone163->SetStatisticOption(0);
   den_clone163->SetPosteriorMode(0);
   den_clone163->SetShortestInterval(0);
   den_clone163->SetTotalEvents(0,0);
   den_clone163->SetPassedEvents(0,0);
   den_clone163->SetTotalEvents(1,419);
   den_clone163->SetPassedEvents(1,350);
   den_clone163->SetTotalEvents(2,1266);
   den_clone163->SetPassedEvents(2,1190);
   den_clone163->SetTotalEvents(3,1615);
   den_clone163->SetPassedEvents(3,1604);
   den_clone163->SetTotalEvents(4,1644);
   den_clone163->SetPassedEvents(4,1637);
   den_clone163->SetTotalEvents(5,1669);
   den_clone163->SetPassedEvents(5,1667);
   den_clone163->SetTotalEvents(6,1730);
   den_clone163->SetPassedEvents(6,1724);
   den_clone163->SetTotalEvents(7,1670);
   den_clone163->SetPassedEvents(7,1577);
   den_clone163->SetTotalEvents(8,1608);
   den_clone163->SetPassedEvents(8,1344);
   den_clone163->SetTotalEvents(9,1563);
   den_clone163->SetPassedEvents(9,1413);
   den_clone163->SetTotalEvents(10,1655);
   den_clone163->SetPassedEvents(10,1648);
   den_clone163->SetTotalEvents(11,1672);
   den_clone163->SetPassedEvents(11,1667);
   den_clone163->SetTotalEvents(12,1684);
   den_clone163->SetPassedEvents(12,1677);
   den_clone163->SetTotalEvents(13,1670);
   den_clone163->SetPassedEvents(13,1663);
   den_clone163->SetTotalEvents(14,1681);
   den_clone163->SetPassedEvents(14,1665);
   den_clone163->SetTotalEvents(15,1440);
   den_clone163->SetPassedEvents(15,1325);
   den_clone163->SetTotalEvents(16,1495);
   den_clone163->SetPassedEvents(16,1350);
   den_clone163->SetTotalEvents(17,1640);
   den_clone163->SetPassedEvents(17,1584);
   den_clone163->SetTotalEvents(18,1602);
   den_clone163->SetPassedEvents(18,1595);
   den_clone163->SetTotalEvents(19,1626);
   den_clone163->SetPassedEvents(19,1621);
   den_clone163->SetTotalEvents(20,1674);
   den_clone163->SetPassedEvents(20,1664);
   den_clone163->SetTotalEvents(21,1670);
   den_clone163->SetPassedEvents(21,1662);
   den_clone163->SetTotalEvents(22,1674);
   den_clone163->SetPassedEvents(22,1668);
   den_clone163->SetTotalEvents(23,1598);
   den_clone163->SetPassedEvents(23,1587);
   den_clone163->SetTotalEvents(24,1580);
   den_clone163->SetPassedEvents(24,1565);
   den_clone163->SetTotalEvents(25,1205);
   den_clone163->SetPassedEvents(25,1135);
   den_clone163->SetTotalEvents(26,0);
   den_clone163->SetPassedEvents(26,0);
   den_clone163->SetFillColor(19);

   ci = TColor::GetColor("#0000ff");
   den_clone163->SetLineColor(ci);
   den_clone163->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   den_clone163->SetMarkerColor(ci);
   den_clone163->SetMarkerStyle(21);
   den_clone163->Draw("same samep");
   
   TEfficiency * den_clone164 = new TEfficiency("den_clone","",25,1.8,2.4);
   
   den_clone164->SetConfidenceLevel(0.6826895);
   den_clone164->SetBetaAlpha(1);
   den_clone164->SetBetaBeta(1);
   den_clone164->SetWeight(1);
   den_clone164->SetStatisticOption(0);
   den_clone164->SetPosteriorMode(0);
   den_clone164->SetShortestInterval(0);
   den_clone164->SetTotalEvents(0,0);
   den_clone164->SetPassedEvents(0,0);
   den_clone164->SetTotalEvents(1,419);
   den_clone164->SetPassedEvents(1,345);
   den_clone164->SetTotalEvents(2,1266);
   den_clone164->SetPassedEvents(2,1190);
   den_clone164->SetTotalEvents(3,1615);
   den_clone164->SetPassedEvents(3,1602);
   den_clone164->SetTotalEvents(4,1644);
   den_clone164->SetPassedEvents(4,1638);
   den_clone164->SetTotalEvents(5,1669);
   den_clone164->SetPassedEvents(5,1666);
   den_clone164->SetTotalEvents(6,1730);
   den_clone164->SetPassedEvents(6,1721);
   den_clone164->SetTotalEvents(7,1670);
   den_clone164->SetPassedEvents(7,1539);
   den_clone164->SetTotalEvents(8,1608);
   den_clone164->SetPassedEvents(8,1278);
   den_clone164->SetTotalEvents(9,1563);
   den_clone164->SetPassedEvents(9,1396);
   den_clone164->SetTotalEvents(10,1655);
   den_clone164->SetPassedEvents(10,1650);
   den_clone164->SetTotalEvents(11,1672);
   den_clone164->SetPassedEvents(11,1670);
   den_clone164->SetTotalEvents(12,1684);
   den_clone164->SetPassedEvents(12,1681);
   den_clone164->SetTotalEvents(13,1670);
   den_clone164->SetPassedEvents(13,1664);
   den_clone164->SetTotalEvents(14,1681);
   den_clone164->SetPassedEvents(14,1667);
   den_clone164->SetTotalEvents(15,1440);
   den_clone164->SetPassedEvents(15,1282);
   den_clone164->SetTotalEvents(16,1495);
   den_clone164->SetPassedEvents(16,1309);
   den_clone164->SetTotalEvents(17,1640);
   den_clone164->SetPassedEvents(17,1582);
   den_clone164->SetTotalEvents(18,1602);
   den_clone164->SetPassedEvents(18,1597);
   den_clone164->SetTotalEvents(19,1626);
   den_clone164->SetPassedEvents(19,1623);
   den_clone164->SetTotalEvents(20,1674);
   den_clone164->SetPassedEvents(20,1670);
   den_clone164->SetTotalEvents(21,1670);
   den_clone164->SetPassedEvents(21,1668);
   den_clone164->SetTotalEvents(22,1674);
   den_clone164->SetPassedEvents(22,1671);
   den_clone164->SetTotalEvents(23,1598);
   den_clone164->SetPassedEvents(23,1589);
   den_clone164->SetTotalEvents(24,1580);
   den_clone164->SetPassedEvents(24,1571);
   den_clone164->SetTotalEvents(25,1205);
   den_clone164->SetPassedEvents(25,1141);
   den_clone164->SetTotalEvents(26,0);
   den_clone164->SetPassedEvents(26,0);
   den_clone164->SetFillColor(19);
   den_clone164->SetLineWidth(2);
   den_clone164->SetMarkerStyle(23);
   den_clone164->Draw("same samep");
   
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
   TText *text = new TText(0.17,0.17,"ME4/1");
   text->SetNDC();
   text->Draw();
   text = new TText(0.17,0.24,"ALCT");
   text->SetNDC();
   text->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
