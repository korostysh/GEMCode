void Eff_ME32_Wires_Combined()
{
//=========Macro generated from canvas: c/c
//=========  (Wed Oct  9 13:21:23 2019) by ROOT version 6.14/09
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   c->SetHighLightColor(2);
   c->Range(1.014286,0.42125,1.728571,1.0775);
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
   
   TH1F *base__96 = new TH1F("base__96","",25,1.1,1.7);
   base__96->SetMinimum(0.5);
   base__96->SetMaximum(1.025);
   base__96->SetLineStyle(0);
   base__96->SetMarkerStyle(20);
   base__96->GetXaxis()->SetTitle("True muon |#eta|");
   base__96->GetXaxis()->SetLabelFont(42);
   base__96->GetXaxis()->SetLabelOffset(0.007);
   base__96->GetXaxis()->SetLabelSize(0.05);
   base__96->GetXaxis()->SetTitleSize(0.06);
   base__96->GetXaxis()->SetTitleOffset(0.9);
   base__96->GetXaxis()->SetTitleFont(42);
   base__96->GetYaxis()->SetTitle("Efficiency");
   base__96->GetYaxis()->SetLabelFont(42);
   base__96->GetYaxis()->SetLabelOffset(0.007);
   base__96->GetYaxis()->SetLabelSize(0.05);
   base__96->GetYaxis()->SetTitleSize(0.06);
   base__96->GetYaxis()->SetTitleOffset(0.9);
   base__96->GetYaxis()->SetTitleFont(42);
   base__96->GetZaxis()->SetLabelFont(42);
   base__96->GetZaxis()->SetLabelOffset(0.007);
   base__96->GetZaxis()->SetLabelSize(0.05);
   base__96->GetZaxis()->SetTitleSize(0.06);
   base__96->GetZaxis()->SetTitleFont(42);
   base__96->Draw("");
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
   
   TEfficiency * den_clone290 = new TEfficiency("den_clone","",25,1.1,1.7);
   
   den_clone290->SetConfidenceLevel(0.6826895);
   den_clone290->SetBetaAlpha(1);
   den_clone290->SetBetaBeta(1);
   den_clone290->SetWeight(1);
   den_clone290->SetStatisticOption(0);
   den_clone290->SetPosteriorMode(0);
   den_clone290->SetShortestInterval(0);
   den_clone290->SetTotalEvents(0,0);
   den_clone290->SetPassedEvents(0,0);
   den_clone290->SetTotalEvents(1,779);
   den_clone290->SetPassedEvents(1,779);
   den_clone290->SetTotalEvents(2,1555);
   den_clone290->SetPassedEvents(2,1555);
   den_clone290->SetTotalEvents(3,1700);
   den_clone290->SetPassedEvents(3,1700);
   den_clone290->SetTotalEvents(4,1553);
   den_clone290->SetPassedEvents(4,1553);
   den_clone290->SetTotalEvents(5,1726);
   den_clone290->SetPassedEvents(5,1726);
   den_clone290->SetTotalEvents(6,1720);
   den_clone290->SetPassedEvents(6,1720);
   den_clone290->SetTotalEvents(7,1576);
   den_clone290->SetPassedEvents(7,1576);
   den_clone290->SetTotalEvents(8,1615);
   den_clone290->SetPassedEvents(8,1615);
   den_clone290->SetTotalEvents(9,1703);
   den_clone290->SetPassedEvents(9,1703);
   den_clone290->SetTotalEvents(10,1707);
   den_clone290->SetPassedEvents(10,1707);
   den_clone290->SetTotalEvents(11,1713);
   den_clone290->SetPassedEvents(11,1713);
   den_clone290->SetTotalEvents(12,1597);
   den_clone290->SetPassedEvents(12,1597);
   den_clone290->SetTotalEvents(13,1631);
   den_clone290->SetPassedEvents(13,1631);
   den_clone290->SetTotalEvents(14,1725);
   den_clone290->SetPassedEvents(14,1725);
   den_clone290->SetTotalEvents(15,1623);
   den_clone290->SetPassedEvents(15,1623);
   den_clone290->SetTotalEvents(16,1611);
   den_clone290->SetPassedEvents(16,1611);
   den_clone290->SetTotalEvents(17,1618);
   den_clone290->SetPassedEvents(17,1618);
   den_clone290->SetTotalEvents(18,1639);
   den_clone290->SetPassedEvents(18,1639);
   den_clone290->SetTotalEvents(19,1544);
   den_clone290->SetPassedEvents(19,1544);
   den_clone290->SetTotalEvents(20,1565);
   den_clone290->SetPassedEvents(20,1565);
   den_clone290->SetTotalEvents(21,1678);
   den_clone290->SetPassedEvents(21,1678);
   den_clone290->SetTotalEvents(22,1514);
   den_clone290->SetPassedEvents(22,1514);
   den_clone290->SetTotalEvents(23,1560);
   den_clone290->SetPassedEvents(23,1560);
   den_clone290->SetTotalEvents(24,1050);
   den_clone290->SetPassedEvents(24,1049);
   den_clone290->SetTotalEvents(25,242);
   den_clone290->SetPassedEvents(25,242);
   den_clone290->SetTotalEvents(26,0);
   den_clone290->SetPassedEvents(26,0);
   den_clone290->SetFillColor(19);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ff0000");
   den_clone290->SetLineColor(ci);
   den_clone290->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   den_clone290->SetMarkerColor(ci);
   den_clone290->SetMarkerStyle(22);
   den_clone290->Draw("same samep");
   
   TEfficiency * den_clone291 = new TEfficiency("den_clone","",25,1.1,1.7);
   
   den_clone291->SetConfidenceLevel(0.6826895);
   den_clone291->SetBetaAlpha(1);
   den_clone291->SetBetaBeta(1);
   den_clone291->SetWeight(1);
   den_clone291->SetStatisticOption(0);
   den_clone291->SetPosteriorMode(0);
   den_clone291->SetShortestInterval(0);
   den_clone291->SetTotalEvents(0,0);
   den_clone291->SetPassedEvents(0,0);
   den_clone291->SetTotalEvents(1,773);
   den_clone291->SetPassedEvents(1,772);
   den_clone291->SetTotalEvents(2,1499);
   den_clone291->SetPassedEvents(2,1497);
   den_clone291->SetTotalEvents(3,1652);
   den_clone291->SetPassedEvents(3,1652);
   den_clone291->SetTotalEvents(4,1642);
   den_clone291->SetPassedEvents(4,1642);
   den_clone291->SetTotalEvents(5,1629);
   den_clone291->SetPassedEvents(5,1629);
   den_clone291->SetTotalEvents(6,1682);
   den_clone291->SetPassedEvents(6,1682);
   den_clone291->SetTotalEvents(7,1710);
   den_clone291->SetPassedEvents(7,1710);
   den_clone291->SetTotalEvents(8,1713);
   den_clone291->SetPassedEvents(8,1713);
   den_clone291->SetTotalEvents(9,1716);
   den_clone291->SetPassedEvents(9,1716);
   den_clone291->SetTotalEvents(10,1642);
   den_clone291->SetPassedEvents(10,1642);
   den_clone291->SetTotalEvents(11,1658);
   den_clone291->SetPassedEvents(11,1658);
   den_clone291->SetTotalEvents(12,1558);
   den_clone291->SetPassedEvents(12,1558);
   den_clone291->SetTotalEvents(13,1783);
   den_clone291->SetPassedEvents(13,1783);
   den_clone291->SetTotalEvents(14,1593);
   den_clone291->SetPassedEvents(14,1593);
   den_clone291->SetTotalEvents(15,1732);
   den_clone291->SetPassedEvents(15,1732);
   den_clone291->SetTotalEvents(16,1693);
   den_clone291->SetPassedEvents(16,1693);
   den_clone291->SetTotalEvents(17,1561);
   den_clone291->SetPassedEvents(17,1561);
   den_clone291->SetTotalEvents(18,1677);
   den_clone291->SetPassedEvents(18,1677);
   den_clone291->SetTotalEvents(19,1692);
   den_clone291->SetPassedEvents(19,1692);
   den_clone291->SetTotalEvents(20,1688);
   den_clone291->SetPassedEvents(20,1688);
   den_clone291->SetTotalEvents(21,1642);
   den_clone291->SetPassedEvents(21,1642);
   den_clone291->SetTotalEvents(22,1598);
   den_clone291->SetPassedEvents(22,1598);
   den_clone291->SetTotalEvents(23,1632);
   den_clone291->SetPassedEvents(23,1632);
   den_clone291->SetTotalEvents(24,1085);
   den_clone291->SetPassedEvents(24,1084);
   den_clone291->SetTotalEvents(25,306);
   den_clone291->SetPassedEvents(25,304);
   den_clone291->SetTotalEvents(26,0);
   den_clone291->SetPassedEvents(26,0);
   den_clone291->SetFillColor(19);

   ci = TColor::GetColor("#0000ff");
   den_clone291->SetLineColor(ci);
   den_clone291->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   den_clone291->SetMarkerColor(ci);
   den_clone291->SetMarkerStyle(21);
   den_clone291->Draw("same samep");
   
   TLegend *leg = new TLegend(0,0,0,0,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextFont(62);
   leg->SetTextSize(0.05);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(0);
   TLegendEntry *entry=leg->AddEntry("NULL","Wires","h");
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
   TText *text = new TText(0.17,0.17,"ME3/2");
   text->SetNDC();
   text->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
