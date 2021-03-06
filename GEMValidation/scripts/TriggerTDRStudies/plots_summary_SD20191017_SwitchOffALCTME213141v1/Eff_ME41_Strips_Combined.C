void Eff_ME41_Strips_Combined()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Oct 17 16:28:52 2019) by ROOT version 6.14/09
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   c->SetHighLightColor(2);
   c->Range(1.714286,-0.15375,2.428571,1.1275);
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
   
   TH1F *base__144 = new TH1F("base__144","",25,1.8,2.4);
   base__144->SetMinimum(0);
   base__144->SetMaximum(1.025);
   base__144->SetLineStyle(0);
   base__144->SetMarkerStyle(20);
   base__144->GetXaxis()->SetTitle("True muon |#eta|");
   base__144->GetXaxis()->SetLabelFont(42);
   base__144->GetXaxis()->SetLabelOffset(0.007);
   base__144->GetXaxis()->SetLabelSize(0.05);
   base__144->GetXaxis()->SetTitleSize(0.06);
   base__144->GetXaxis()->SetTitleOffset(0.9);
   base__144->GetXaxis()->SetTitleFont(42);
   base__144->GetYaxis()->SetTitle("Efficiency");
   base__144->GetYaxis()->SetLabelFont(42);
   base__144->GetYaxis()->SetLabelOffset(0.007);
   base__144->GetYaxis()->SetLabelSize(0.05);
   base__144->GetYaxis()->SetTitleSize(0.06);
   base__144->GetYaxis()->SetTitleOffset(0.9);
   base__144->GetYaxis()->SetTitleFont(42);
   base__144->GetZaxis()->SetLabelFont(42);
   base__144->GetZaxis()->SetLabelOffset(0.007);
   base__144->GetZaxis()->SetLabelSize(0.05);
   base__144->GetZaxis()->SetTitleSize(0.06);
   base__144->GetZaxis()->SetTitleFont(42);
   base__144->Draw("");
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
   
   TEfficiency * den_clone411 = new TEfficiency("den_clone","",25,1.8,2.4);
   
   den_clone411->SetConfidenceLevel(0.6826895);
   den_clone411->SetBetaAlpha(1);
   den_clone411->SetBetaBeta(1);
   den_clone411->SetWeight(1);
   den_clone411->SetStatisticOption(0);
   den_clone411->SetPosteriorMode(0);
   den_clone411->SetShortestInterval(0);
   den_clone411->SetTotalEvents(0,0);
   den_clone411->SetPassedEvents(0,0);
   den_clone411->SetTotalEvents(1,384);
   den_clone411->SetPassedEvents(1,373);
   den_clone411->SetTotalEvents(2,1206);
   den_clone411->SetPassedEvents(2,1186);
   den_clone411->SetTotalEvents(3,1660);
   den_clone411->SetPassedEvents(3,1656);
   den_clone411->SetTotalEvents(4,1637);
   den_clone411->SetPassedEvents(4,1636);
   den_clone411->SetTotalEvents(5,1600);
   den_clone411->SetPassedEvents(5,1599);
   den_clone411->SetTotalEvents(6,1744);
   den_clone411->SetPassedEvents(6,1741);
   den_clone411->SetTotalEvents(7,1690);
   den_clone411->SetPassedEvents(7,1637);
   den_clone411->SetTotalEvents(8,1651);
   den_clone411->SetPassedEvents(8,1540);
   den_clone411->SetTotalEvents(9,1621);
   den_clone411->SetPassedEvents(9,1562);
   den_clone411->SetTotalEvents(10,1622);
   den_clone411->SetPassedEvents(10,1621);
   den_clone411->SetTotalEvents(11,1604);
   den_clone411->SetPassedEvents(11,1603);
   den_clone411->SetTotalEvents(12,1562);
   den_clone411->SetPassedEvents(12,1560);
   den_clone411->SetTotalEvents(13,1540);
   den_clone411->SetPassedEvents(13,1539);
   den_clone411->SetTotalEvents(14,1674);
   den_clone411->SetPassedEvents(14,1665);
   den_clone411->SetTotalEvents(15,1562);
   den_clone411->SetPassedEvents(15,1507);
   den_clone411->SetTotalEvents(16,1466);
   den_clone411->SetPassedEvents(16,1387);
   den_clone411->SetTotalEvents(17,1545);
   den_clone411->SetPassedEvents(17,1514);
   den_clone411->SetTotalEvents(18,1726);
   den_clone411->SetPassedEvents(18,1725);
   den_clone411->SetTotalEvents(19,1733);
   den_clone411->SetPassedEvents(19,1733);
   den_clone411->SetTotalEvents(20,1676);
   den_clone411->SetPassedEvents(20,1676);
   den_clone411->SetTotalEvents(21,1605);
   den_clone411->SetPassedEvents(21,1604);
   den_clone411->SetTotalEvents(22,1742);
   den_clone411->SetPassedEvents(22,1739);
   den_clone411->SetTotalEvents(23,1686);
   den_clone411->SetPassedEvents(23,1684);
   den_clone411->SetTotalEvents(24,1623);
   den_clone411->SetPassedEvents(24,1614);
   den_clone411->SetTotalEvents(25,1231);
   den_clone411->SetPassedEvents(25,1184);
   den_clone411->SetTotalEvents(26,0);
   den_clone411->SetPassedEvents(26,0);
   den_clone411->SetFillColor(19);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ff0000");
   den_clone411->SetLineColor(ci);
   den_clone411->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   den_clone411->SetMarkerColor(ci);
   den_clone411->SetMarkerStyle(22);
   den_clone411->Draw("same samep");
   
   TEfficiency * den_clone412 = new TEfficiency("den_clone","",25,1.8,2.4);
   
   den_clone412->SetConfidenceLevel(0.6826895);
   den_clone412->SetBetaAlpha(1);
   den_clone412->SetBetaBeta(1);
   den_clone412->SetWeight(1);
   den_clone412->SetStatisticOption(0);
   den_clone412->SetPosteriorMode(0);
   den_clone412->SetShortestInterval(0);
   den_clone412->SetTotalEvents(0,0);
   den_clone412->SetPassedEvents(0,0);
   den_clone412->SetTotalEvents(1,395);
   den_clone412->SetPassedEvents(1,369);
   den_clone412->SetTotalEvents(2,1200);
   den_clone412->SetPassedEvents(2,1173);
   den_clone412->SetTotalEvents(3,1547);
   den_clone412->SetPassedEvents(3,1544);
   den_clone412->SetTotalEvents(4,1562);
   den_clone412->SetPassedEvents(4,1559);
   den_clone412->SetTotalEvents(5,1587);
   den_clone412->SetPassedEvents(5,1585);
   den_clone412->SetTotalEvents(6,1652);
   den_clone412->SetPassedEvents(6,1651);
   den_clone412->SetTotalEvents(7,1579);
   den_clone412->SetPassedEvents(7,1550);
   den_clone412->SetTotalEvents(8,1544);
   den_clone412->SetPassedEvents(8,1447);
   den_clone412->SetTotalEvents(9,1476);
   den_clone412->SetPassedEvents(9,1408);
   den_clone412->SetTotalEvents(10,1589);
   den_clone412->SetPassedEvents(10,1586);
   den_clone412->SetTotalEvents(11,1590);
   den_clone412->SetPassedEvents(11,1590);
   den_clone412->SetTotalEvents(12,1614);
   den_clone412->SetPassedEvents(12,1613);
   den_clone412->SetTotalEvents(13,1610);
   den_clone412->SetPassedEvents(13,1609);
   den_clone412->SetTotalEvents(14,1607);
   den_clone412->SetPassedEvents(14,1602);
   den_clone412->SetTotalEvents(15,1377);
   den_clone412->SetPassedEvents(15,1328);
   den_clone412->SetTotalEvents(16,1414);
   den_clone412->SetPassedEvents(16,1354);
   den_clone412->SetTotalEvents(17,1560);
   den_clone412->SetPassedEvents(17,1531);
   den_clone412->SetTotalEvents(18,1530);
   den_clone412->SetPassedEvents(18,1530);
   den_clone412->SetTotalEvents(19,1536);
   den_clone412->SetPassedEvents(19,1536);
   den_clone412->SetTotalEvents(20,1588);
   den_clone412->SetPassedEvents(20,1586);
   den_clone412->SetTotalEvents(21,1602);
   den_clone412->SetPassedEvents(21,1601);
   den_clone412->SetTotalEvents(22,1586);
   den_clone412->SetPassedEvents(22,1583);
   den_clone412->SetTotalEvents(23,1512);
   den_clone412->SetPassedEvents(23,1510);
   den_clone412->SetTotalEvents(24,1508);
   den_clone412->SetPassedEvents(24,1501);
   den_clone412->SetTotalEvents(25,1150);
   den_clone412->SetPassedEvents(25,1112);
   den_clone412->SetTotalEvents(26,0);
   den_clone412->SetPassedEvents(26,0);
   den_clone412->SetFillColor(19);

   ci = TColor::GetColor("#0000ff");
   den_clone412->SetLineColor(ci);
   den_clone412->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   den_clone412->SetMarkerColor(ci);
   den_clone412->SetMarkerStyle(21);
   den_clone412->Draw("same samep");
   
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
   TText *text = new TText(0.17,0.17,"ME4/1");
   text->SetNDC();
   text->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
