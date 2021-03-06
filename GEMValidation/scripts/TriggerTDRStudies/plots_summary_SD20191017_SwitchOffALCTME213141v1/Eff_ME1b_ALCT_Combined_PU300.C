void Eff_ME1b_ALCT_Combined_PU300()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Oct 17 16:26:49 2019) by ROOT version 6.14/09
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   c->SetHighLightColor(2);
   c->Range(1.514286,-0.15375,2.228571,1.1275);
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
   
   TH1F *base__36 = new TH1F("base__36","",25,1.6,2.2);
   base__36->SetMinimum(0);
   base__36->SetMaximum(1.025);
   base__36->SetLineStyle(0);
   base__36->SetMarkerStyle(20);
   base__36->GetXaxis()->SetTitle("True muon |#eta|");
   base__36->GetXaxis()->SetLabelFont(42);
   base__36->GetXaxis()->SetLabelOffset(0.007);
   base__36->GetXaxis()->SetLabelSize(0.05);
   base__36->GetXaxis()->SetTitleSize(0.06);
   base__36->GetXaxis()->SetTitleOffset(0.9);
   base__36->GetXaxis()->SetTitleFont(42);
   base__36->GetYaxis()->SetTitle("Efficiency");
   base__36->GetYaxis()->SetLabelFont(42);
   base__36->GetYaxis()->SetLabelOffset(0.007);
   base__36->GetYaxis()->SetLabelSize(0.05);
   base__36->GetYaxis()->SetTitleSize(0.06);
   base__36->GetYaxis()->SetTitleOffset(0.9);
   base__36->GetYaxis()->SetTitleFont(42);
   base__36->GetZaxis()->SetLabelFont(42);
   base__36->GetZaxis()->SetLabelOffset(0.007);
   base__36->GetZaxis()->SetLabelSize(0.05);
   base__36->GetZaxis()->SetTitleSize(0.06);
   base__36->GetZaxis()->SetTitleFont(42);
   base__36->Draw("");
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
   
   TEfficiency * den_clone102 = new TEfficiency("den_clone","",25,1.6,2.2);
   
   den_clone102->SetConfidenceLevel(0.6826895);
   den_clone102->SetBetaAlpha(1);
   den_clone102->SetBetaBeta(1);
   den_clone102->SetWeight(1);
   den_clone102->SetStatisticOption(0);
   den_clone102->SetPosteriorMode(0);
   den_clone102->SetShortestInterval(0);
   den_clone102->SetTotalEvents(0,0);
   den_clone102->SetPassedEvents(0,0);
   den_clone102->SetTotalEvents(1,1197);
   den_clone102->SetPassedEvents(1,1120);
   den_clone102->SetTotalEvents(2,1646);
   den_clone102->SetPassedEvents(2,1638);
   den_clone102->SetTotalEvents(3,1589);
   den_clone102->SetPassedEvents(3,1585);
   den_clone102->SetTotalEvents(4,1699);
   den_clone102->SetPassedEvents(4,1685);
   den_clone102->SetTotalEvents(5,1494);
   den_clone102->SetPassedEvents(5,1477);
   den_clone102->SetTotalEvents(6,1577);
   den_clone102->SetPassedEvents(6,1559);
   den_clone102->SetTotalEvents(7,1588);
   den_clone102->SetPassedEvents(7,1575);
   den_clone102->SetTotalEvents(8,1471);
   den_clone102->SetPassedEvents(8,1455);
   den_clone102->SetTotalEvents(9,1577);
   den_clone102->SetPassedEvents(9,1563);
   den_clone102->SetTotalEvents(10,1672);
   den_clone102->SetPassedEvents(10,1657);
   den_clone102->SetTotalEvents(11,1604);
   den_clone102->SetPassedEvents(11,1581);
   den_clone102->SetTotalEvents(12,1517);
   den_clone102->SetPassedEvents(12,1493);
   den_clone102->SetTotalEvents(13,1643);
   den_clone102->SetPassedEvents(13,1626);
   den_clone102->SetTotalEvents(14,1634);
   den_clone102->SetPassedEvents(14,1607);
   den_clone102->SetTotalEvents(15,1587);
   den_clone102->SetPassedEvents(15,1560);
   den_clone102->SetTotalEvents(16,1594);
   den_clone102->SetPassedEvents(16,1566);
   den_clone102->SetTotalEvents(17,1607);
   den_clone102->SetPassedEvents(17,1580);
   den_clone102->SetTotalEvents(18,1575);
   den_clone102->SetPassedEvents(18,1535);
   den_clone102->SetTotalEvents(19,1572);
   den_clone102->SetPassedEvents(19,1515);
   den_clone102->SetTotalEvents(20,1555);
   den_clone102->SetPassedEvents(20,1367);
   den_clone102->SetTotalEvents(21,951);
   den_clone102->SetPassedEvents(21,863);
   den_clone102->SetTotalEvents(22,745);
   den_clone102->SetPassedEvents(22,602);
   den_clone102->SetTotalEvents(23,115);
   den_clone102->SetPassedEvents(23,59);
   den_clone102->SetTotalEvents(24,0);
   den_clone102->SetPassedEvents(24,0);
   den_clone102->SetTotalEvents(25,0);
   den_clone102->SetPassedEvents(25,0);
   den_clone102->SetTotalEvents(26,0);
   den_clone102->SetPassedEvents(26,0);
   den_clone102->SetFillColor(19);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   den_clone102->SetLineColor(ci);
   den_clone102->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   den_clone102->SetMarkerColor(ci);
   den_clone102->SetMarkerStyle(23);
   den_clone102->Draw("same samep");
   
   TEfficiency * den_clone103 = new TEfficiency("den_clone","",25,1.6,2.2);
   
   den_clone103->SetConfidenceLevel(0.6826895);
   den_clone103->SetBetaAlpha(1);
   den_clone103->SetBetaBeta(1);
   den_clone103->SetWeight(1);
   den_clone103->SetStatisticOption(0);
   den_clone103->SetPosteriorMode(0);
   den_clone103->SetShortestInterval(0);
   den_clone103->SetTotalEvents(0,0);
   den_clone103->SetPassedEvents(0,0);
   den_clone103->SetTotalEvents(1,1208);
   den_clone103->SetPassedEvents(1,1126);
   den_clone103->SetTotalEvents(2,1658);
   den_clone103->SetPassedEvents(2,1651);
   den_clone103->SetTotalEvents(3,1531);
   den_clone103->SetPassedEvents(3,1531);
   den_clone103->SetTotalEvents(4,1653);
   den_clone103->SetPassedEvents(4,1651);
   den_clone103->SetTotalEvents(5,1480);
   den_clone103->SetPassedEvents(5,1477);
   den_clone103->SetTotalEvents(6,1553);
   den_clone103->SetPassedEvents(6,1550);
   den_clone103->SetTotalEvents(7,1560);
   den_clone103->SetPassedEvents(7,1556);
   den_clone103->SetTotalEvents(8,1469);
   den_clone103->SetPassedEvents(8,1464);
   den_clone103->SetTotalEvents(9,1539);
   den_clone103->SetPassedEvents(9,1537);
   den_clone103->SetTotalEvents(10,1660);
   den_clone103->SetPassedEvents(10,1657);
   den_clone103->SetTotalEvents(11,1588);
   den_clone103->SetPassedEvents(11,1585);
   den_clone103->SetTotalEvents(12,1505);
   den_clone103->SetPassedEvents(12,1500);
   den_clone103->SetTotalEvents(13,1619);
   den_clone103->SetPassedEvents(13,1619);
   den_clone103->SetTotalEvents(14,1604);
   den_clone103->SetPassedEvents(14,1602);
   den_clone103->SetTotalEvents(15,1585);
   den_clone103->SetPassedEvents(15,1577);
   den_clone103->SetTotalEvents(16,1588);
   den_clone103->SetPassedEvents(16,1584);
   den_clone103->SetTotalEvents(17,1583);
   den_clone103->SetPassedEvents(17,1580);
   den_clone103->SetTotalEvents(18,1559);
   den_clone103->SetPassedEvents(18,1549);
   den_clone103->SetTotalEvents(19,1536);
   den_clone103->SetPassedEvents(19,1530);
   den_clone103->SetTotalEvents(20,1566);
   den_clone103->SetPassedEvents(20,1523);
   den_clone103->SetTotalEvents(21,959);
   den_clone103->SetPassedEvents(21,930);
   den_clone103->SetTotalEvents(22,724);
   den_clone103->SetPassedEvents(22,672);
   den_clone103->SetTotalEvents(23,113);
   den_clone103->SetPassedEvents(23,91);
   den_clone103->SetTotalEvents(24,0);
   den_clone103->SetPassedEvents(24,0);
   den_clone103->SetTotalEvents(25,0);
   den_clone103->SetPassedEvents(25,0);
   den_clone103->SetTotalEvents(26,0);
   den_clone103->SetPassedEvents(26,0);
   den_clone103->SetFillColor(19);
   den_clone103->SetLineWidth(2);
   den_clone103->SetMarkerStyle(22);
   den_clone103->Draw("same samep");
   
   TEfficiency * den_clone104 = new TEfficiency("den_clone","",25,1.6,2.2);
   
   den_clone104->SetConfidenceLevel(0.6826895);
   den_clone104->SetBetaAlpha(1);
   den_clone104->SetBetaBeta(1);
   den_clone104->SetWeight(1);
   den_clone104->SetStatisticOption(0);
   den_clone104->SetPosteriorMode(0);
   den_clone104->SetShortestInterval(0);
   den_clone104->SetTotalEvents(0,0);
   den_clone104->SetPassedEvents(0,0);
   den_clone104->SetTotalEvents(1,1199);
   den_clone104->SetPassedEvents(1,1115);
   den_clone104->SetTotalEvents(2,1698);
   den_clone104->SetPassedEvents(2,1691);
   den_clone104->SetTotalEvents(3,1559);
   den_clone104->SetPassedEvents(3,1559);
   den_clone104->SetTotalEvents(4,1709);
   den_clone104->SetPassedEvents(4,1706);
   den_clone104->SetTotalEvents(5,1508);
   den_clone104->SetPassedEvents(5,1505);
   den_clone104->SetTotalEvents(6,1573);
   den_clone104->SetPassedEvents(6,1569);
   den_clone104->SetTotalEvents(7,1590);
   den_clone104->SetPassedEvents(7,1586);
   den_clone104->SetTotalEvents(8,1467);
   den_clone104->SetPassedEvents(8,1462);
   den_clone104->SetTotalEvents(9,1570);
   den_clone104->SetPassedEvents(9,1568);
   den_clone104->SetTotalEvents(10,1698);
   den_clone104->SetPassedEvents(10,1695);
   den_clone104->SetTotalEvents(11,1617);
   den_clone104->SetPassedEvents(11,1614);
   den_clone104->SetTotalEvents(12,1535);
   den_clone104->SetPassedEvents(12,1530);
   den_clone104->SetTotalEvents(13,1663);
   den_clone104->SetPassedEvents(13,1662);
   den_clone104->SetTotalEvents(14,1652);
   den_clone104->SetPassedEvents(14,1650);
   den_clone104->SetTotalEvents(15,1601);
   den_clone104->SetPassedEvents(15,1593);
   den_clone104->SetTotalEvents(16,1624);
   den_clone104->SetPassedEvents(16,1620);
   den_clone104->SetTotalEvents(17,1631);
   den_clone104->SetPassedEvents(17,1628);
   den_clone104->SetTotalEvents(18,1559);
   den_clone104->SetPassedEvents(18,1550);
   den_clone104->SetTotalEvents(19,1564);
   den_clone104->SetPassedEvents(19,1558);
   den_clone104->SetTotalEvents(20,1587);
   den_clone104->SetPassedEvents(20,1543);
   den_clone104->SetTotalEvents(21,975);
   den_clone104->SetPassedEvents(21,945);
   den_clone104->SetTotalEvents(22,735);
   den_clone104->SetPassedEvents(22,685);
   den_clone104->SetTotalEvents(23,116);
   den_clone104->SetPassedEvents(23,93);
   den_clone104->SetTotalEvents(24,0);
   den_clone104->SetPassedEvents(24,0);
   den_clone104->SetTotalEvents(25,0);
   den_clone104->SetPassedEvents(25,0);
   den_clone104->SetTotalEvents(26,0);
   den_clone104->SetPassedEvents(26,0);
   den_clone104->SetFillColor(19);

   ci = TColor::GetColor("#009900");
   den_clone104->SetLineColor(ci);
   den_clone104->SetLineWidth(2);

   ci = TColor::GetColor("#009900");
   den_clone104->SetMarkerColor(ci);
   den_clone104->SetMarkerStyle(21);
   den_clone104->Draw("same samep");
   
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
   leg->Draw();
   TText *text = new TText(0.17,0.17,"ME1/b");
   text->SetNDC();
   text->Draw();
   text = new TText(0.17,0.24,"ALCT");
   text->SetNDC();
   text->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
