void Eff_ME22_notCLCT_Combined()
{
//=========Macro generated from canvas: c/c
//=========  (Wed Oct  9 14:19:23 2019) by ROOT version 6.14/09
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
   
   TH1F *base__43 = new TH1F("base__43","",25,1,1.6);
   base__43->SetMinimum(0);
   base__43->SetMaximum(1.025);
   base__43->SetLineStyle(0);
   base__43->SetMarkerStyle(20);
   base__43->GetXaxis()->SetTitle("True muon |#eta|");
   base__43->GetXaxis()->SetLabelFont(42);
   base__43->GetXaxis()->SetLabelOffset(0.007);
   base__43->GetXaxis()->SetLabelSize(0.05);
   base__43->GetXaxis()->SetTitleSize(0.06);
   base__43->GetXaxis()->SetTitleOffset(0.9);
   base__43->GetXaxis()->SetTitleFont(42);
   base__43->GetYaxis()->SetTitle("Efficiency");
   base__43->GetYaxis()->SetLabelFont(42);
   base__43->GetYaxis()->SetLabelOffset(0.007);
   base__43->GetYaxis()->SetLabelSize(0.05);
   base__43->GetYaxis()->SetTitleSize(0.06);
   base__43->GetYaxis()->SetTitleOffset(0.9);
   base__43->GetYaxis()->SetTitleFont(42);
   base__43->GetZaxis()->SetLabelFont(42);
   base__43->GetZaxis()->SetLabelOffset(0.007);
   base__43->GetZaxis()->SetLabelSize(0.05);
   base__43->GetZaxis()->SetTitleSize(0.06);
   base__43->GetZaxis()->SetTitleFont(42);
   base__43->Draw("");
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
   
   TEfficiency * den_clone169 = new TEfficiency("den_clone","",25,1,1.6);
   
   den_clone169->SetConfidenceLevel(0.6826895);
   den_clone169->SetBetaAlpha(1);
   den_clone169->SetBetaBeta(1);
   den_clone169->SetWeight(1);
   den_clone169->SetStatisticOption(0);
   den_clone169->SetPosteriorMode(0);
   den_clone169->SetShortestInterval(0);
   den_clone169->SetTotalEvents(0,0);
   den_clone169->SetPassedEvents(0,0);
   den_clone169->SetTotalEvents(1,722);
   den_clone169->SetPassedEvents(1,143);
   den_clone169->SetTotalEvents(2,1378);
   den_clone169->SetPassedEvents(2,115);
   den_clone169->SetTotalEvents(3,1586);
   den_clone169->SetPassedEvents(3,53);
   den_clone169->SetTotalEvents(4,1615);
   den_clone169->SetPassedEvents(4,67);
   den_clone169->SetTotalEvents(5,1558);
   den_clone169->SetPassedEvents(5,61);
   den_clone169->SetTotalEvents(6,1637);
   den_clone169->SetPassedEvents(6,44);
   den_clone169->SetTotalEvents(7,1701);
   den_clone169->SetPassedEvents(7,85);
   den_clone169->SetTotalEvents(8,1602);
   den_clone169->SetPassedEvents(8,86);
   den_clone169->SetTotalEvents(9,1691);
   den_clone169->SetPassedEvents(9,53);
   den_clone169->SetTotalEvents(10,1712);
   den_clone169->SetPassedEvents(10,52);
   den_clone169->SetTotalEvents(11,1605);
   den_clone169->SetPassedEvents(11,115);
   den_clone169->SetTotalEvents(12,1587);
   den_clone169->SetPassedEvents(12,107);
   den_clone169->SetTotalEvents(13,1710);
   den_clone169->SetPassedEvents(13,56);
   den_clone169->SetTotalEvents(14,1719);
   den_clone169->SetPassedEvents(14,57);
   den_clone169->SetTotalEvents(15,1694);
   den_clone169->SetPassedEvents(15,80);
   den_clone169->SetTotalEvents(16,1598);
   den_clone169->SetPassedEvents(16,135);
   den_clone169->SetTotalEvents(17,1631);
   den_clone169->SetPassedEvents(17,152);
   den_clone169->SetTotalEvents(18,1701);
   den_clone169->SetPassedEvents(18,59);
   den_clone169->SetTotalEvents(19,1613);
   den_clone169->SetPassedEvents(19,56);
   den_clone169->SetTotalEvents(20,1634);
   den_clone169->SetPassedEvents(20,57);
   den_clone169->SetTotalEvents(21,1586);
   den_clone169->SetPassedEvents(21,55);
   den_clone169->SetTotalEvents(22,1604);
   den_clone169->SetPassedEvents(22,59);
   den_clone169->SetTotalEvents(23,1430);
   den_clone169->SetPassedEvents(23,197);
   den_clone169->SetTotalEvents(24,648);
   den_clone169->SetPassedEvents(24,146);
   den_clone169->SetTotalEvents(25,52);
   den_clone169->SetPassedEvents(25,35);
   den_clone169->SetTotalEvents(26,0);
   den_clone169->SetPassedEvents(26,0);
   den_clone169->SetFillColor(19);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ff0000");
   den_clone169->SetLineColor(ci);
   den_clone169->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   den_clone169->SetMarkerColor(ci);
   den_clone169->SetMarkerStyle(22);
   den_clone169->Draw("same samep");
   
   TEfficiency * den_clone170 = new TEfficiency("den_clone","",25,1,1.6);
   
   den_clone170->SetConfidenceLevel(0.6826895);
   den_clone170->SetBetaAlpha(1);
   den_clone170->SetBetaBeta(1);
   den_clone170->SetWeight(1);
   den_clone170->SetStatisticOption(0);
   den_clone170->SetPosteriorMode(0);
   den_clone170->SetShortestInterval(0);
   den_clone170->SetTotalEvents(0,0);
   den_clone170->SetPassedEvents(0,0);
   den_clone170->SetTotalEvents(1,661);
   den_clone170->SetPassedEvents(1,126);
   den_clone170->SetTotalEvents(2,1447);
   den_clone170->SetPassedEvents(2,118);
   den_clone170->SetTotalEvents(3,1653);
   den_clone170->SetPassedEvents(3,62);
   den_clone170->SetTotalEvents(4,1576);
   den_clone170->SetPassedEvents(4,61);
   den_clone170->SetTotalEvents(5,1546);
   den_clone170->SetPassedEvents(5,76);
   den_clone170->SetTotalEvents(6,1515);
   den_clone170->SetPassedEvents(6,42);
   den_clone170->SetTotalEvents(7,1658);
   den_clone170->SetPassedEvents(7,81);
   den_clone170->SetTotalEvents(8,1664);
   den_clone170->SetPassedEvents(8,101);
   den_clone170->SetTotalEvents(9,1619);
   den_clone170->SetPassedEvents(9,53);
   den_clone170->SetTotalEvents(10,1699);
   den_clone170->SetPassedEvents(10,55);
   den_clone170->SetTotalEvents(11,1658);
   den_clone170->SetPassedEvents(11,103);
   den_clone170->SetTotalEvents(12,1727);
   den_clone170->SetPassedEvents(12,112);
   den_clone170->SetTotalEvents(13,1713);
   den_clone170->SetPassedEvents(13,62);
   den_clone170->SetTotalEvents(14,1631);
   den_clone170->SetPassedEvents(14,46);
   den_clone170->SetTotalEvents(15,1649);
   den_clone170->SetPassedEvents(15,75);
   den_clone170->SetTotalEvents(16,1566);
   den_clone170->SetPassedEvents(16,168);
   den_clone170->SetTotalEvents(17,1784);
   den_clone170->SetPassedEvents(17,165);
   den_clone170->SetTotalEvents(18,1572);
   den_clone170->SetPassedEvents(18,52);
   den_clone170->SetTotalEvents(19,1752);
   den_clone170->SetPassedEvents(19,54);
   den_clone170->SetTotalEvents(20,1661);
   den_clone170->SetPassedEvents(20,59);
   den_clone170->SetTotalEvents(21,1604);
   den_clone170->SetPassedEvents(21,67);
   den_clone170->SetTotalEvents(22,1589);
   den_clone170->SetPassedEvents(22,81);
   den_clone170->SetTotalEvents(23,1526);
   den_clone170->SetPassedEvents(23,223);
   den_clone170->SetTotalEvents(24,750);
   den_clone170->SetPassedEvents(24,163);
   den_clone170->SetTotalEvents(25,65);
   den_clone170->SetPassedEvents(25,44);
   den_clone170->SetTotalEvents(26,0);
   den_clone170->SetPassedEvents(26,0);
   den_clone170->SetFillColor(19);

   ci = TColor::GetColor("#0000ff");
   den_clone170->SetLineColor(ci);
   den_clone170->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   den_clone170->SetMarkerColor(ci);
   den_clone170->SetMarkerStyle(21);
   den_clone170->Draw("same samep");
   
   TEfficiency * den_clone171 = new TEfficiency("den_clone","",25,1,1.6);
   
   den_clone171->SetConfidenceLevel(0.6826895);
   den_clone171->SetBetaAlpha(1);
   den_clone171->SetBetaBeta(1);
   den_clone171->SetWeight(1);
   den_clone171->SetStatisticOption(0);
   den_clone171->SetPosteriorMode(0);
   den_clone171->SetShortestInterval(0);
   den_clone171->SetTotalEvents(0,0);
   den_clone171->SetPassedEvents(0,0);
   den_clone171->SetTotalEvents(1,661);
   den_clone171->SetPassedEvents(1,126);
   den_clone171->SetTotalEvents(2,1447);
   den_clone171->SetPassedEvents(2,118);
   den_clone171->SetTotalEvents(3,1653);
   den_clone171->SetPassedEvents(3,62);
   den_clone171->SetTotalEvents(4,1576);
   den_clone171->SetPassedEvents(4,61);
   den_clone171->SetTotalEvents(5,1546);
   den_clone171->SetPassedEvents(5,76);
   den_clone171->SetTotalEvents(6,1515);
   den_clone171->SetPassedEvents(6,42);
   den_clone171->SetTotalEvents(7,1658);
   den_clone171->SetPassedEvents(7,81);
   den_clone171->SetTotalEvents(8,1664);
   den_clone171->SetPassedEvents(8,101);
   den_clone171->SetTotalEvents(9,1619);
   den_clone171->SetPassedEvents(9,53);
   den_clone171->SetTotalEvents(10,1699);
   den_clone171->SetPassedEvents(10,55);
   den_clone171->SetTotalEvents(11,1658);
   den_clone171->SetPassedEvents(11,103);
   den_clone171->SetTotalEvents(12,1727);
   den_clone171->SetPassedEvents(12,112);
   den_clone171->SetTotalEvents(13,1713);
   den_clone171->SetPassedEvents(13,62);
   den_clone171->SetTotalEvents(14,1631);
   den_clone171->SetPassedEvents(14,46);
   den_clone171->SetTotalEvents(15,1649);
   den_clone171->SetPassedEvents(15,75);
   den_clone171->SetTotalEvents(16,1566);
   den_clone171->SetPassedEvents(16,168);
   den_clone171->SetTotalEvents(17,1784);
   den_clone171->SetPassedEvents(17,165);
   den_clone171->SetTotalEvents(18,1572);
   den_clone171->SetPassedEvents(18,52);
   den_clone171->SetTotalEvents(19,1752);
   den_clone171->SetPassedEvents(19,54);
   den_clone171->SetTotalEvents(20,1661);
   den_clone171->SetPassedEvents(20,59);
   den_clone171->SetTotalEvents(21,1604);
   den_clone171->SetPassedEvents(21,67);
   den_clone171->SetTotalEvents(22,1589);
   den_clone171->SetPassedEvents(22,81);
   den_clone171->SetTotalEvents(23,1526);
   den_clone171->SetPassedEvents(23,223);
   den_clone171->SetTotalEvents(24,750);
   den_clone171->SetPassedEvents(24,163);
   den_clone171->SetTotalEvents(25,65);
   den_clone171->SetPassedEvents(25,44);
   den_clone171->SetTotalEvents(26,0);
   den_clone171->SetPassedEvents(26,0);
   den_clone171->SetFillColor(19);
   den_clone171->SetLineWidth(2);
   den_clone171->SetMarkerStyle(23);
   den_clone171->Draw("same samep");
   
   TEfficiency * den_clone172 = new TEfficiency("den_clone","",25,1,1.6);
   
   den_clone172->SetConfidenceLevel(0.6826895);
   den_clone172->SetBetaAlpha(1);
   den_clone172->SetBetaBeta(1);
   den_clone172->SetWeight(1);
   den_clone172->SetStatisticOption(0);
   den_clone172->SetPosteriorMode(0);
   den_clone172->SetShortestInterval(0);
   den_clone172->SetTotalEvents(0,0);
   den_clone172->SetPassedEvents(0,0);
   den_clone172->SetTotalEvents(1,243);
   den_clone172->SetPassedEvents(1,21);
   den_clone172->SetTotalEvents(2,569);
   den_clone172->SetPassedEvents(2,30);
   den_clone172->SetTotalEvents(3,604);
   den_clone172->SetPassedEvents(3,26);
   den_clone172->SetTotalEvents(4,566);
   den_clone172->SetPassedEvents(4,23);
   den_clone172->SetTotalEvents(5,576);
   den_clone172->SetPassedEvents(5,30);
   den_clone172->SetTotalEvents(6,585);
   den_clone172->SetPassedEvents(6,10);
   den_clone172->SetTotalEvents(7,605);
   den_clone172->SetPassedEvents(7,36);
   den_clone172->SetTotalEvents(8,549);
   den_clone172->SetPassedEvents(8,41);
   den_clone172->SetTotalEvents(9,532);
   den_clone172->SetPassedEvents(9,11);
   den_clone172->SetTotalEvents(10,593);
   den_clone172->SetPassedEvents(10,20);
   den_clone172->SetTotalEvents(11,614);
   den_clone172->SetPassedEvents(11,52);
   den_clone172->SetTotalEvents(12,616);
   den_clone172->SetPassedEvents(12,43);
   den_clone172->SetTotalEvents(13,590);
   den_clone172->SetPassedEvents(13,22);
   den_clone172->SetTotalEvents(14,630);
   den_clone172->SetPassedEvents(14,27);
   den_clone172->SetTotalEvents(15,514);
   den_clone172->SetPassedEvents(15,28);
   den_clone172->SetTotalEvents(16,549);
   den_clone172->SetPassedEvents(16,48);
   den_clone172->SetTotalEvents(17,580);
   den_clone172->SetPassedEvents(17,51);
   den_clone172->SetTotalEvents(18,622);
   den_clone172->SetPassedEvents(18,25);
   den_clone172->SetTotalEvents(19,608);
   den_clone172->SetPassedEvents(19,17);
   den_clone172->SetTotalEvents(20,580);
   den_clone172->SetPassedEvents(20,19);
   den_clone172->SetTotalEvents(21,534);
   den_clone172->SetPassedEvents(21,19);
   den_clone172->SetTotalEvents(22,588);
   den_clone172->SetPassedEvents(22,22);
   den_clone172->SetTotalEvents(23,457);
   den_clone172->SetPassedEvents(23,38);
   den_clone172->SetTotalEvents(24,230);
   den_clone172->SetPassedEvents(24,24);
   den_clone172->SetTotalEvents(25,12);
   den_clone172->SetPassedEvents(25,2);
   den_clone172->SetTotalEvents(26,0);
   den_clone172->SetPassedEvents(26,0);
   den_clone172->SetFillColor(19);

   ci = TColor::GetColor("#00cc00");
   den_clone172->SetLineColor(ci);
   den_clone172->SetLineWidth(2);

   ci = TColor::GetColor("#00cc00");
   den_clone172->SetMarkerColor(ci);
   den_clone172->SetMarkerStyle(23);
   den_clone172->Draw("same samep");
   
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
   text = new TText(0.17,0.24,"notCLCT");
   text->SetNDC();
   text->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
