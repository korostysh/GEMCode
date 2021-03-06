void Eff_ME41_Wires_Combined_PU300()
{
//=========Macro generated from canvas: c/c
//=========  (Tue Oct  8 12:51:35 2019) by ROOT version 6.14/09
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
   
   TH1F *base__71 = new TH1F("base__71","",25,1.8,2.4);
   base__71->SetMinimum(0.5);
   base__71->SetMaximum(1.025);
   base__71->SetLineStyle(0);
   base__71->SetMarkerStyle(20);
   base__71->GetXaxis()->SetTitle("True muon |#eta|");
   base__71->GetXaxis()->SetLabelFont(42);
   base__71->GetXaxis()->SetLabelOffset(0.007);
   base__71->GetXaxis()->SetLabelSize(0.05);
   base__71->GetXaxis()->SetTitleSize(0.06);
   base__71->GetXaxis()->SetTitleOffset(0.9);
   base__71->GetXaxis()->SetTitleFont(42);
   base__71->GetYaxis()->SetTitle("Efficiency");
   base__71->GetYaxis()->SetLabelFont(42);
   base__71->GetYaxis()->SetLabelOffset(0.007);
   base__71->GetYaxis()->SetLabelSize(0.05);
   base__71->GetYaxis()->SetTitleSize(0.06);
   base__71->GetYaxis()->SetTitleOffset(0.9);
   base__71->GetYaxis()->SetTitleFont(42);
   base__71->GetZaxis()->SetLabelFont(42);
   base__71->GetZaxis()->SetLabelOffset(0.007);
   base__71->GetZaxis()->SetLabelSize(0.05);
   base__71->GetZaxis()->SetTitleSize(0.06);
   base__71->GetZaxis()->SetTitleFont(42);
   base__71->Draw("");
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
   
   TEfficiency * den_clone291 = new TEfficiency("den_clone","",25,1.8,2.4);
   
   den_clone291->SetConfidenceLevel(0.6826895);
   den_clone291->SetBetaAlpha(1);
   den_clone291->SetBetaBeta(1);
   den_clone291->SetWeight(1);
   den_clone291->SetStatisticOption(0);
   den_clone291->SetPosteriorMode(0);
   den_clone291->SetShortestInterval(0);
   den_clone291->SetTotalEvents(0,0);
   den_clone291->SetPassedEvents(0,0);
   den_clone291->SetTotalEvents(1,419);
   den_clone291->SetPassedEvents(1,416);
   den_clone291->SetTotalEvents(2,1266);
   den_clone291->SetPassedEvents(2,1265);
   den_clone291->SetTotalEvents(3,1615);
   den_clone291->SetPassedEvents(3,1614);
   den_clone291->SetTotalEvents(4,1644);
   den_clone291->SetPassedEvents(4,1644);
   den_clone291->SetTotalEvents(5,1669);
   den_clone291->SetPassedEvents(5,1669);
   den_clone291->SetTotalEvents(6,1730);
   den_clone291->SetPassedEvents(6,1729);
   den_clone291->SetTotalEvents(7,1670);
   den_clone291->SetPassedEvents(7,1634);
   den_clone291->SetTotalEvents(8,1608);
   den_clone291->SetPassedEvents(8,1504);
   den_clone291->SetTotalEvents(9,1563);
   den_clone291->SetPassedEvents(9,1505);
   den_clone291->SetTotalEvents(10,1655);
   den_clone291->SetPassedEvents(10,1655);
   den_clone291->SetTotalEvents(11,1672);
   den_clone291->SetPassedEvents(11,1672);
   den_clone291->SetTotalEvents(12,1684);
   den_clone291->SetPassedEvents(12,1684);
   den_clone291->SetTotalEvents(13,1670);
   den_clone291->SetPassedEvents(13,1670);
   den_clone291->SetTotalEvents(14,1681);
   den_clone291->SetPassedEvents(14,1681);
   den_clone291->SetTotalEvents(15,1440);
   den_clone291->SetPassedEvents(15,1404);
   den_clone291->SetTotalEvents(16,1495);
   den_clone291->SetPassedEvents(16,1447);
   den_clone291->SetTotalEvents(17,1640);
   den_clone291->SetPassedEvents(17,1630);
   den_clone291->SetTotalEvents(18,1602);
   den_clone291->SetPassedEvents(18,1602);
   den_clone291->SetTotalEvents(19,1626);
   den_clone291->SetPassedEvents(19,1626);
   den_clone291->SetTotalEvents(20,1674);
   den_clone291->SetPassedEvents(20,1674);
   den_clone291->SetTotalEvents(21,1670);
   den_clone291->SetPassedEvents(21,1670);
   den_clone291->SetTotalEvents(22,1674);
   den_clone291->SetPassedEvents(22,1674);
   den_clone291->SetTotalEvents(23,1598);
   den_clone291->SetPassedEvents(23,1598);
   den_clone291->SetTotalEvents(24,1580);
   den_clone291->SetPassedEvents(24,1580);
   den_clone291->SetTotalEvents(25,1205);
   den_clone291->SetPassedEvents(25,1204);
   den_clone291->SetTotalEvents(26,0);
   den_clone291->SetPassedEvents(26,0);
   den_clone291->SetFillColor(19);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#999999");
   den_clone291->SetLineColor(ci);
   den_clone291->SetLineWidth(2);

   ci = TColor::GetColor("#999999");
   den_clone291->SetMarkerColor(ci);
   den_clone291->SetMarkerStyle(23);
   den_clone291->Draw("same samep");
   
   TEfficiency * den_clone292 = new TEfficiency("den_clone","",25,1.8,2.4);
   
   den_clone292->SetConfidenceLevel(0.6826895);
   den_clone292->SetBetaAlpha(1);
   den_clone292->SetBetaBeta(1);
   den_clone292->SetWeight(1);
   den_clone292->SetStatisticOption(0);
   den_clone292->SetPosteriorMode(0);
   den_clone292->SetShortestInterval(0);
   den_clone292->SetTotalEvents(0,0);
   den_clone292->SetPassedEvents(0,0);
   den_clone292->SetTotalEvents(1,419);
   den_clone292->SetPassedEvents(1,416);
   den_clone292->SetTotalEvents(2,1266);
   den_clone292->SetPassedEvents(2,1265);
   den_clone292->SetTotalEvents(3,1615);
   den_clone292->SetPassedEvents(3,1614);
   den_clone292->SetTotalEvents(4,1644);
   den_clone292->SetPassedEvents(4,1644);
   den_clone292->SetTotalEvents(5,1669);
   den_clone292->SetPassedEvents(5,1669);
   den_clone292->SetTotalEvents(6,1730);
   den_clone292->SetPassedEvents(6,1729);
   den_clone292->SetTotalEvents(7,1670);
   den_clone292->SetPassedEvents(7,1634);
   den_clone292->SetTotalEvents(8,1608);
   den_clone292->SetPassedEvents(8,1504);
   den_clone292->SetTotalEvents(9,1563);
   den_clone292->SetPassedEvents(9,1505);
   den_clone292->SetTotalEvents(10,1655);
   den_clone292->SetPassedEvents(10,1655);
   den_clone292->SetTotalEvents(11,1672);
   den_clone292->SetPassedEvents(11,1672);
   den_clone292->SetTotalEvents(12,1684);
   den_clone292->SetPassedEvents(12,1684);
   den_clone292->SetTotalEvents(13,1670);
   den_clone292->SetPassedEvents(13,1670);
   den_clone292->SetTotalEvents(14,1681);
   den_clone292->SetPassedEvents(14,1681);
   den_clone292->SetTotalEvents(15,1440);
   den_clone292->SetPassedEvents(15,1404);
   den_clone292->SetTotalEvents(16,1495);
   den_clone292->SetPassedEvents(16,1447);
   den_clone292->SetTotalEvents(17,1640);
   den_clone292->SetPassedEvents(17,1630);
   den_clone292->SetTotalEvents(18,1602);
   den_clone292->SetPassedEvents(18,1602);
   den_clone292->SetTotalEvents(19,1626);
   den_clone292->SetPassedEvents(19,1626);
   den_clone292->SetTotalEvents(20,1674);
   den_clone292->SetPassedEvents(20,1674);
   den_clone292->SetTotalEvents(21,1670);
   den_clone292->SetPassedEvents(21,1670);
   den_clone292->SetTotalEvents(22,1674);
   den_clone292->SetPassedEvents(22,1674);
   den_clone292->SetTotalEvents(23,1598);
   den_clone292->SetPassedEvents(23,1598);
   den_clone292->SetTotalEvents(24,1580);
   den_clone292->SetPassedEvents(24,1580);
   den_clone292->SetTotalEvents(25,1205);
   den_clone292->SetPassedEvents(25,1204);
   den_clone292->SetTotalEvents(26,0);
   den_clone292->SetPassedEvents(26,0);
   den_clone292->SetFillColor(19);

   ci = TColor::GetColor("#ff0000");
   den_clone292->SetLineColor(ci);
   den_clone292->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   den_clone292->SetMarkerColor(ci);
   den_clone292->SetMarkerStyle(22);
   den_clone292->Draw("same samep");
   
   TEfficiency * den_clone293 = new TEfficiency("den_clone","",25,1.8,2.4);
   
   den_clone293->SetConfidenceLevel(0.6826895);
   den_clone293->SetBetaAlpha(1);
   den_clone293->SetBetaBeta(1);
   den_clone293->SetWeight(1);
   den_clone293->SetStatisticOption(0);
   den_clone293->SetPosteriorMode(0);
   den_clone293->SetShortestInterval(0);
   den_clone293->SetTotalEvents(0,0);
   den_clone293->SetPassedEvents(0,0);
   den_clone293->SetTotalEvents(1,419);
   den_clone293->SetPassedEvents(1,416);
   den_clone293->SetTotalEvents(2,1266);
   den_clone293->SetPassedEvents(2,1265);
   den_clone293->SetTotalEvents(3,1615);
   den_clone293->SetPassedEvents(3,1614);
   den_clone293->SetTotalEvents(4,1644);
   den_clone293->SetPassedEvents(4,1644);
   den_clone293->SetTotalEvents(5,1669);
   den_clone293->SetPassedEvents(5,1669);
   den_clone293->SetTotalEvents(6,1730);
   den_clone293->SetPassedEvents(6,1729);
   den_clone293->SetTotalEvents(7,1670);
   den_clone293->SetPassedEvents(7,1634);
   den_clone293->SetTotalEvents(8,1608);
   den_clone293->SetPassedEvents(8,1504);
   den_clone293->SetTotalEvents(9,1563);
   den_clone293->SetPassedEvents(9,1505);
   den_clone293->SetTotalEvents(10,1655);
   den_clone293->SetPassedEvents(10,1655);
   den_clone293->SetTotalEvents(11,1672);
   den_clone293->SetPassedEvents(11,1672);
   den_clone293->SetTotalEvents(12,1684);
   den_clone293->SetPassedEvents(12,1684);
   den_clone293->SetTotalEvents(13,1670);
   den_clone293->SetPassedEvents(13,1670);
   den_clone293->SetTotalEvents(14,1681);
   den_clone293->SetPassedEvents(14,1681);
   den_clone293->SetTotalEvents(15,1440);
   den_clone293->SetPassedEvents(15,1404);
   den_clone293->SetTotalEvents(16,1495);
   den_clone293->SetPassedEvents(16,1447);
   den_clone293->SetTotalEvents(17,1640);
   den_clone293->SetPassedEvents(17,1630);
   den_clone293->SetTotalEvents(18,1602);
   den_clone293->SetPassedEvents(18,1602);
   den_clone293->SetTotalEvents(19,1626);
   den_clone293->SetPassedEvents(19,1626);
   den_clone293->SetTotalEvents(20,1674);
   den_clone293->SetPassedEvents(20,1674);
   den_clone293->SetTotalEvents(21,1670);
   den_clone293->SetPassedEvents(21,1670);
   den_clone293->SetTotalEvents(22,1674);
   den_clone293->SetPassedEvents(22,1674);
   den_clone293->SetTotalEvents(23,1598);
   den_clone293->SetPassedEvents(23,1598);
   den_clone293->SetTotalEvents(24,1580);
   den_clone293->SetPassedEvents(24,1580);
   den_clone293->SetTotalEvents(25,1205);
   den_clone293->SetPassedEvents(25,1204);
   den_clone293->SetTotalEvents(26,0);
   den_clone293->SetPassedEvents(26,0);
   den_clone293->SetFillColor(19);

   ci = TColor::GetColor("#0000ff");
   den_clone293->SetLineColor(ci);
   den_clone293->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   den_clone293->SetMarkerColor(ci);
   den_clone293->SetMarkerStyle(21);
   den_clone293->Draw("same samep");
   
   TEfficiency * den_clone294 = new TEfficiency("den_clone","",25,1.8,2.4);
   
   den_clone294->SetConfidenceLevel(0.6826895);
   den_clone294->SetBetaAlpha(1);
   den_clone294->SetBetaBeta(1);
   den_clone294->SetWeight(1);
   den_clone294->SetStatisticOption(0);
   den_clone294->SetPosteriorMode(0);
   den_clone294->SetShortestInterval(0);
   den_clone294->SetTotalEvents(0,0);
   den_clone294->SetPassedEvents(0,0);
   den_clone294->SetTotalEvents(1,169);
   den_clone294->SetPassedEvents(1,168);
   den_clone294->SetTotalEvents(2,465);
   den_clone294->SetPassedEvents(2,465);
   den_clone294->SetTotalEvents(3,560);
   den_clone294->SetPassedEvents(3,560);
   den_clone294->SetTotalEvents(4,578);
   den_clone294->SetPassedEvents(4,578);
   den_clone294->SetTotalEvents(5,562);
   den_clone294->SetPassedEvents(5,562);
   den_clone294->SetTotalEvents(6,564);
   den_clone294->SetPassedEvents(6,564);
   den_clone294->SetTotalEvents(7,627);
   den_clone294->SetPassedEvents(7,610);
   den_clone294->SetTotalEvents(8,545);
   den_clone294->SetPassedEvents(8,520);
   den_clone294->SetTotalEvents(9,592);
   den_clone294->SetPassedEvents(9,581);
   den_clone294->SetTotalEvents(10,556);
   den_clone294->SetPassedEvents(10,556);
   den_clone294->SetTotalEvents(11,608);
   den_clone294->SetPassedEvents(11,608);
   den_clone294->SetTotalEvents(12,566);
   den_clone294->SetPassedEvents(12,566);
   den_clone294->SetTotalEvents(13,586);
   den_clone294->SetPassedEvents(13,586);
   den_clone294->SetTotalEvents(14,603);
   den_clone294->SetPassedEvents(14,603);
   den_clone294->SetTotalEvents(15,527);
   den_clone294->SetPassedEvents(15,514);
   den_clone294->SetTotalEvents(16,499);
   den_clone294->SetPassedEvents(16,479);
   den_clone294->SetTotalEvents(17,606);
   den_clone294->SetPassedEvents(17,606);
   den_clone294->SetTotalEvents(18,623);
   den_clone294->SetPassedEvents(18,623);
   den_clone294->SetTotalEvents(19,550);
   den_clone294->SetPassedEvents(19,550);
   den_clone294->SetTotalEvents(20,571);
   den_clone294->SetPassedEvents(20,571);
   den_clone294->SetTotalEvents(21,663);
   den_clone294->SetPassedEvents(21,663);
   den_clone294->SetTotalEvents(22,540);
   den_clone294->SetPassedEvents(22,540);
   den_clone294->SetTotalEvents(23,642);
   den_clone294->SetPassedEvents(23,642);
   den_clone294->SetTotalEvents(24,596);
   den_clone294->SetPassedEvents(24,596);
   den_clone294->SetTotalEvents(25,407);
   den_clone294->SetPassedEvents(25,406);
   den_clone294->SetTotalEvents(26,0);
   den_clone294->SetPassedEvents(26,0);
   den_clone294->SetFillColor(19);
   den_clone294->SetLineWidth(2);
   den_clone294->SetMarkerStyle(24);
   den_clone294->Draw("same samep");
   
   TEfficiency * den_clone295 = new TEfficiency("den_clone","",25,1.8,2.4);
   
   den_clone295->SetConfidenceLevel(0.6826895);
   den_clone295->SetBetaAlpha(1);
   den_clone295->SetBetaBeta(1);
   den_clone295->SetWeight(1);
   den_clone295->SetStatisticOption(0);
   den_clone295->SetPosteriorMode(0);
   den_clone295->SetShortestInterval(0);
   den_clone295->SetTotalEvents(0,0);
   den_clone295->SetPassedEvents(0,0);
   den_clone295->SetTotalEvents(1,384);
   den_clone295->SetPassedEvents(1,384);
   den_clone295->SetTotalEvents(2,1206);
   den_clone295->SetPassedEvents(2,1206);
   den_clone295->SetTotalEvents(3,1660);
   den_clone295->SetPassedEvents(3,1660);
   den_clone295->SetTotalEvents(4,1637);
   den_clone295->SetPassedEvents(4,1636);
   den_clone295->SetTotalEvents(5,1600);
   den_clone295->SetPassedEvents(5,1600);
   den_clone295->SetTotalEvents(6,1744);
   den_clone295->SetPassedEvents(6,1742);
   den_clone295->SetTotalEvents(7,1690);
   den_clone295->SetPassedEvents(7,1654);
   den_clone295->SetTotalEvents(8,1651);
   den_clone295->SetPassedEvents(8,1556);
   den_clone295->SetTotalEvents(9,1621);
   den_clone295->SetPassedEvents(9,1568);
   den_clone295->SetTotalEvents(10,1622);
   den_clone295->SetPassedEvents(10,1622);
   den_clone295->SetTotalEvents(11,1604);
   den_clone295->SetPassedEvents(11,1603);
   den_clone295->SetTotalEvents(12,1562);
   den_clone295->SetPassedEvents(12,1562);
   den_clone295->SetTotalEvents(13,1540);
   den_clone295->SetPassedEvents(13,1540);
   den_clone295->SetTotalEvents(14,1674);
   den_clone295->SetPassedEvents(14,1672);
   den_clone295->SetTotalEvents(15,1562);
   den_clone295->SetPassedEvents(15,1517);
   den_clone295->SetTotalEvents(16,1466);
   den_clone295->SetPassedEvents(16,1427);
   den_clone295->SetTotalEvents(17,1545);
   den_clone295->SetPassedEvents(17,1536);
   den_clone295->SetTotalEvents(18,1726);
   den_clone295->SetPassedEvents(18,1725);
   den_clone295->SetTotalEvents(19,1733);
   den_clone295->SetPassedEvents(19,1733);
   den_clone295->SetTotalEvents(20,1676);
   den_clone295->SetPassedEvents(20,1676);
   den_clone295->SetTotalEvents(21,1605);
   den_clone295->SetPassedEvents(21,1605);
   den_clone295->SetTotalEvents(22,1742);
   den_clone295->SetPassedEvents(22,1742);
   den_clone295->SetTotalEvents(23,1686);
   den_clone295->SetPassedEvents(23,1686);
   den_clone295->SetTotalEvents(24,1623);
   den_clone295->SetPassedEvents(24,1623);
   den_clone295->SetTotalEvents(25,1231);
   den_clone295->SetPassedEvents(25,1226);
   den_clone295->SetTotalEvents(26,0);
   den_clone295->SetPassedEvents(26,0);
   den_clone295->SetFillColor(19);

   ci = TColor::GetColor("#ff00ff");
   den_clone295->SetLineColor(ci);
   den_clone295->SetLineWidth(2);

   ci = TColor::GetColor("#ff00ff");
   den_clone295->SetMarkerColor(ci);
   den_clone295->SetMarkerStyle(24);
   den_clone295->Draw("same samep");
   
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
   entry=leg->AddEntry("den_clone","PU0 GEM-CSC","pl");
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
   text = new TText(0.17,0.24,"Wires");
   text->SetNDC();
   text->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
