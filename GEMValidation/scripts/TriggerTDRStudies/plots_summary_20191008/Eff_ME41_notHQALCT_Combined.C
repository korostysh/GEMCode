void Eff_ME41_notHQALCT_Combined()
{
//=========Macro generated from canvas: c/c
//=========  (Wed Oct  9 14:55:15 2019) by ROOT version 6.14/09
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
   
   TH1F *base__71 = new TH1F("base__71","",25,1.8,2.4);
   base__71->SetMinimum(0);
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
      tex = new TLatex(0.2208,0.936,"Phase-2 Simulation");
tex->SetNDC();
   tex->SetTextFont(52);
   tex->SetTextSize(0.0456);
   tex->SetLineWidth(2);
   tex->Draw();
   
   TEfficiency * den_clone281 = new TEfficiency("den_clone","",25,1.8,2.4);
   
   den_clone281->SetConfidenceLevel(0.6826895);
   den_clone281->SetBetaAlpha(1);
   den_clone281->SetBetaBeta(1);
   den_clone281->SetWeight(1);
   den_clone281->SetStatisticOption(0);
   den_clone281->SetPosteriorMode(0);
   den_clone281->SetShortestInterval(0);
   den_clone281->SetTotalEvents(0,0);
   den_clone281->SetPassedEvents(0,0);
   den_clone281->SetTotalEvents(1,384);
   den_clone281->SetPassedEvents(1,60);
   den_clone281->SetTotalEvents(2,1206);
   den_clone281->SetPassedEvents(2,54);
   den_clone281->SetTotalEvents(3,1660);
   den_clone281->SetPassedEvents(3,13);
   den_clone281->SetTotalEvents(4,1637);
   den_clone281->SetPassedEvents(4,3);
   den_clone281->SetTotalEvents(5,1600);
   den_clone281->SetPassedEvents(5,5);
   den_clone281->SetTotalEvents(6,1744);
   den_clone281->SetPassedEvents(6,11);
   den_clone281->SetTotalEvents(7,1690);
   den_clone281->SetPassedEvents(7,96);
   den_clone281->SetTotalEvents(8,1651);
   den_clone281->SetPassedEvents(8,262);
   den_clone281->SetTotalEvents(9,1621);
   den_clone281->SetPassedEvents(9,147);
   den_clone281->SetTotalEvents(10,1622);
   den_clone281->SetPassedEvents(10,4);
   den_clone281->SetTotalEvents(11,1604);
   den_clone281->SetPassedEvents(11,4);
   den_clone281->SetTotalEvents(12,1562);
   den_clone281->SetPassedEvents(12,5);
   den_clone281->SetTotalEvents(13,1540);
   den_clone281->SetPassedEvents(13,5);
   den_clone281->SetTotalEvents(14,1674);
   den_clone281->SetPassedEvents(14,16);
   den_clone281->SetTotalEvents(15,1562);
   den_clone281->SetPassedEvents(15,110);
   den_clone281->SetTotalEvents(16,1466);
   den_clone281->SetPassedEvents(16,150);
   den_clone281->SetTotalEvents(17,1545);
   den_clone281->SetPassedEvents(17,64);
   den_clone281->SetTotalEvents(18,1726);
   den_clone281->SetPassedEvents(18,6);
   den_clone281->SetTotalEvents(19,1733);
   den_clone281->SetPassedEvents(19,4);
   den_clone281->SetTotalEvents(20,1676);
   den_clone281->SetPassedEvents(20,6);
   den_clone281->SetTotalEvents(21,1605);
   den_clone281->SetPassedEvents(21,8);
   den_clone281->SetTotalEvents(22,1742);
   den_clone281->SetPassedEvents(22,12);
   den_clone281->SetTotalEvents(23,1686);
   den_clone281->SetPassedEvents(23,8);
   den_clone281->SetTotalEvents(24,1623);
   den_clone281->SetPassedEvents(24,12);
   den_clone281->SetTotalEvents(25,1231);
   den_clone281->SetPassedEvents(25,80);
   den_clone281->SetTotalEvents(26,0);
   den_clone281->SetPassedEvents(26,0);
   den_clone281->SetFillColor(19);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ff0000");
   den_clone281->SetLineColor(ci);
   den_clone281->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   den_clone281->SetMarkerColor(ci);
   den_clone281->SetMarkerStyle(22);
   den_clone281->Draw("same samep");
   
   TEfficiency * den_clone282 = new TEfficiency("den_clone","",25,1.8,2.4);
   
   den_clone282->SetConfidenceLevel(0.6826895);
   den_clone282->SetBetaAlpha(1);
   den_clone282->SetBetaBeta(1);
   den_clone282->SetWeight(1);
   den_clone282->SetStatisticOption(0);
   den_clone282->SetPosteriorMode(0);
   den_clone282->SetShortestInterval(0);
   den_clone282->SetTotalEvents(0,0);
   den_clone282->SetPassedEvents(0,0);
   den_clone282->SetTotalEvents(1,419);
   den_clone282->SetPassedEvents(1,69);
   den_clone282->SetTotalEvents(2,1266);
   den_clone282->SetPassedEvents(2,76);
   den_clone282->SetTotalEvents(3,1615);
   den_clone282->SetPassedEvents(3,11);
   den_clone282->SetTotalEvents(4,1644);
   den_clone282->SetPassedEvents(4,7);
   den_clone282->SetTotalEvents(5,1669);
   den_clone282->SetPassedEvents(5,2);
   den_clone282->SetTotalEvents(6,1730);
   den_clone282->SetPassedEvents(6,6);
   den_clone282->SetTotalEvents(7,1670);
   den_clone282->SetPassedEvents(7,93);
   den_clone282->SetTotalEvents(8,1608);
   den_clone282->SetPassedEvents(8,264);
   den_clone282->SetTotalEvents(9,1563);
   den_clone282->SetPassedEvents(9,150);
   den_clone282->SetTotalEvents(10,1655);
   den_clone282->SetPassedEvents(10,7);
   den_clone282->SetTotalEvents(11,1672);
   den_clone282->SetPassedEvents(11,5);
   den_clone282->SetTotalEvents(12,1684);
   den_clone282->SetPassedEvents(12,7);
   den_clone282->SetTotalEvents(13,1670);
   den_clone282->SetPassedEvents(13,7);
   den_clone282->SetTotalEvents(14,1681);
   den_clone282->SetPassedEvents(14,16);
   den_clone282->SetTotalEvents(15,1440);
   den_clone282->SetPassedEvents(15,115);
   den_clone282->SetTotalEvents(16,1495);
   den_clone282->SetPassedEvents(16,145);
   den_clone282->SetTotalEvents(17,1640);
   den_clone282->SetPassedEvents(17,56);
   den_clone282->SetTotalEvents(18,1602);
   den_clone282->SetPassedEvents(18,7);
   den_clone282->SetTotalEvents(19,1626);
   den_clone282->SetPassedEvents(19,5);
   den_clone282->SetTotalEvents(20,1674);
   den_clone282->SetPassedEvents(20,10);
   den_clone282->SetTotalEvents(21,1670);
   den_clone282->SetPassedEvents(21,8);
   den_clone282->SetTotalEvents(22,1674);
   den_clone282->SetPassedEvents(22,6);
   den_clone282->SetTotalEvents(23,1598);
   den_clone282->SetPassedEvents(23,11);
   den_clone282->SetTotalEvents(24,1580);
   den_clone282->SetPassedEvents(24,15);
   den_clone282->SetTotalEvents(25,1205);
   den_clone282->SetPassedEvents(25,70);
   den_clone282->SetTotalEvents(26,0);
   den_clone282->SetPassedEvents(26,0);
   den_clone282->SetFillColor(19);

   ci = TColor::GetColor("#0000ff");
   den_clone282->SetLineColor(ci);
   den_clone282->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   den_clone282->SetMarkerColor(ci);
   den_clone282->SetMarkerStyle(21);
   den_clone282->Draw("same samep");
   
   TEfficiency * den_clone283 = new TEfficiency("den_clone","",25,1.8,2.4);
   
   den_clone283->SetConfidenceLevel(0.6826895);
   den_clone283->SetBetaAlpha(1);
   den_clone283->SetBetaBeta(1);
   den_clone283->SetWeight(1);
   den_clone283->SetStatisticOption(0);
   den_clone283->SetPosteriorMode(0);
   den_clone283->SetShortestInterval(0);
   den_clone283->SetTotalEvents(0,0);
   den_clone283->SetPassedEvents(0,0);
   den_clone283->SetTotalEvents(1,419);
   den_clone283->SetPassedEvents(1,74);
   den_clone283->SetTotalEvents(2,1266);
   den_clone283->SetPassedEvents(2,76);
   den_clone283->SetTotalEvents(3,1615);
   den_clone283->SetPassedEvents(3,13);
   den_clone283->SetTotalEvents(4,1644);
   den_clone283->SetPassedEvents(4,6);
   den_clone283->SetTotalEvents(5,1669);
   den_clone283->SetPassedEvents(5,3);
   den_clone283->SetTotalEvents(6,1730);
   den_clone283->SetPassedEvents(6,9);
   den_clone283->SetTotalEvents(7,1670);
   den_clone283->SetPassedEvents(7,131);
   den_clone283->SetTotalEvents(8,1608);
   den_clone283->SetPassedEvents(8,330);
   den_clone283->SetTotalEvents(9,1563);
   den_clone283->SetPassedEvents(9,167);
   den_clone283->SetTotalEvents(10,1655);
   den_clone283->SetPassedEvents(10,5);
   den_clone283->SetTotalEvents(11,1672);
   den_clone283->SetPassedEvents(11,2);
   den_clone283->SetTotalEvents(12,1684);
   den_clone283->SetPassedEvents(12,3);
   den_clone283->SetTotalEvents(13,1670);
   den_clone283->SetPassedEvents(13,6);
   den_clone283->SetTotalEvents(14,1681);
   den_clone283->SetPassedEvents(14,14);
   den_clone283->SetTotalEvents(15,1440);
   den_clone283->SetPassedEvents(15,158);
   den_clone283->SetTotalEvents(16,1495);
   den_clone283->SetPassedEvents(16,186);
   den_clone283->SetTotalEvents(17,1640);
   den_clone283->SetPassedEvents(17,58);
   den_clone283->SetTotalEvents(18,1602);
   den_clone283->SetPassedEvents(18,5);
   den_clone283->SetTotalEvents(19,1626);
   den_clone283->SetPassedEvents(19,3);
   den_clone283->SetTotalEvents(20,1674);
   den_clone283->SetPassedEvents(20,4);
   den_clone283->SetTotalEvents(21,1670);
   den_clone283->SetPassedEvents(21,2);
   den_clone283->SetTotalEvents(22,1674);
   den_clone283->SetPassedEvents(22,3);
   den_clone283->SetTotalEvents(23,1598);
   den_clone283->SetPassedEvents(23,9);
   den_clone283->SetTotalEvents(24,1580);
   den_clone283->SetPassedEvents(24,9);
   den_clone283->SetTotalEvents(25,1205);
   den_clone283->SetPassedEvents(25,64);
   den_clone283->SetTotalEvents(26,0);
   den_clone283->SetPassedEvents(26,0);
   den_clone283->SetFillColor(19);
   den_clone283->SetLineWidth(2);
   den_clone283->SetMarkerStyle(23);
   den_clone283->Draw("same samep");
   
   TEfficiency * den_clone284 = new TEfficiency("den_clone","",25,1.8,2.4);
   
   den_clone284->SetConfidenceLevel(0.6826895);
   den_clone284->SetBetaAlpha(1);
   den_clone284->SetBetaBeta(1);
   den_clone284->SetWeight(1);
   den_clone284->SetStatisticOption(0);
   den_clone284->SetPosteriorMode(0);
   den_clone284->SetShortestInterval(0);
   den_clone284->SetTotalEvents(0,0);
   den_clone284->SetPassedEvents(0,0);
   den_clone284->SetTotalEvents(1,136);
   den_clone284->SetPassedEvents(1,2);
   den_clone284->SetTotalEvents(2,443);
   den_clone284->SetPassedEvents(2,1);
   den_clone284->SetTotalEvents(3,557);
   den_clone284->SetPassedEvents(3,1);
   den_clone284->SetTotalEvents(4,578);
   den_clone284->SetPassedEvents(4,2);
   den_clone284->SetTotalEvents(5,561);
   den_clone284->SetPassedEvents(5,1);
   den_clone284->SetTotalEvents(6,563);
   den_clone284->SetPassedEvents(6,0);
   den_clone284->SetTotalEvents(7,584);
   den_clone284->SetPassedEvents(7,15);
   den_clone284->SetTotalEvents(8,440);
   den_clone284->SetPassedEvents(8,22);
   den_clone284->SetTotalEvents(9,544);
   den_clone284->SetPassedEvents(9,5);
   den_clone284->SetTotalEvents(10,555);
   den_clone284->SetPassedEvents(10,0);
   den_clone284->SetTotalEvents(11,607);
   den_clone284->SetPassedEvents(11,2);
   den_clone284->SetTotalEvents(12,566);
   den_clone284->SetPassedEvents(12,1);
   den_clone284->SetTotalEvents(13,586);
   den_clone284->SetPassedEvents(13,0);
   den_clone284->SetTotalEvents(14,603);
   den_clone284->SetPassedEvents(14,3);
   den_clone284->SetTotalEvents(15,488);
   den_clone284->SetPassedEvents(15,18);
   den_clone284->SetTotalEvents(16,437);
   den_clone284->SetPassedEvents(16,16);
   den_clone284->SetTotalEvents(17,580);
   den_clone284->SetPassedEvents(17,1);
   den_clone284->SetTotalEvents(18,623);
   den_clone284->SetPassedEvents(18,2);
   den_clone284->SetTotalEvents(19,550);
   den_clone284->SetPassedEvents(19,3);
   den_clone284->SetTotalEvents(20,571);
   den_clone284->SetPassedEvents(20,0);
   den_clone284->SetTotalEvents(21,663);
   den_clone284->SetPassedEvents(21,2);
   den_clone284->SetTotalEvents(22,540);
   den_clone284->SetPassedEvents(22,4);
   den_clone284->SetTotalEvents(23,642);
   den_clone284->SetPassedEvents(23,2);
   den_clone284->SetTotalEvents(24,595);
   den_clone284->SetPassedEvents(24,0);
   den_clone284->SetTotalEvents(25,380);
   den_clone284->SetPassedEvents(25,2);
   den_clone284->SetTotalEvents(26,0);
   den_clone284->SetPassedEvents(26,0);
   den_clone284->SetFillColor(19);

   ci = TColor::GetColor("#00cc00");
   den_clone284->SetLineColor(ci);
   den_clone284->SetLineWidth(2);

   ci = TColor::GetColor("#00cc00");
   den_clone284->SetMarkerColor(ci);
   den_clone284->SetMarkerStyle(23);
   den_clone284->Draw("same samep");
   
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
   TText *text = new TText(0.17,0.17,"ME4/1");
   text->SetNDC();
   text->Draw();
   text = new TText(0.17,0.24,"notHQALCT");
   text->SetNDC();
   text->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
