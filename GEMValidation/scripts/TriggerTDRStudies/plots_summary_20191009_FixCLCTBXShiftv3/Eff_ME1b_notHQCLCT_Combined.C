void Eff_ME1b_notHQCLCT_Combined()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Oct 10 20:22:54 2019) by ROOT version 6.14/09
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   c->SetHighLightColor(2);
   c->Range(1.514286,0.42125,2.228571,1.0775);
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
   
   TH1F *base__42 = new TH1F("base__42","",25,1.6,2.2);
   base__42->SetMinimum(0.5);
   base__42->SetMaximum(1.025);
   base__42->SetLineStyle(0);
   base__42->SetMarkerStyle(20);
   base__42->GetXaxis()->SetTitle("True muon |#eta|");
   base__42->GetXaxis()->SetLabelFont(42);
   base__42->GetXaxis()->SetLabelOffset(0.007);
   base__42->GetXaxis()->SetLabelSize(0.05);
   base__42->GetXaxis()->SetTitleSize(0.06);
   base__42->GetXaxis()->SetTitleOffset(0.9);
   base__42->GetXaxis()->SetTitleFont(42);
   base__42->GetYaxis()->SetTitle("Efficiency");
   base__42->GetYaxis()->SetLabelFont(42);
   base__42->GetYaxis()->SetLabelOffset(0.007);
   base__42->GetYaxis()->SetLabelSize(0.05);
   base__42->GetYaxis()->SetTitleSize(0.06);
   base__42->GetYaxis()->SetTitleOffset(0.9);
   base__42->GetYaxis()->SetTitleFont(42);
   base__42->GetZaxis()->SetLabelFont(42);
   base__42->GetZaxis()->SetLabelOffset(0.007);
   base__42->GetZaxis()->SetLabelSize(0.05);
   base__42->GetZaxis()->SetTitleSize(0.06);
   base__42->GetZaxis()->SetTitleFont(42);
   base__42->Draw("");
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
   
   TEfficiency * den_clone153 = new TEfficiency("den_clone","",25,1.6,2.2);
   
   den_clone153->SetConfidenceLevel(0.6826895);
   den_clone153->SetBetaAlpha(1);
   den_clone153->SetBetaBeta(1);
   den_clone153->SetWeight(1);
   den_clone153->SetStatisticOption(0);
   den_clone153->SetPosteriorMode(0);
   den_clone153->SetShortestInterval(0);
   den_clone153->SetTotalEvents(0,0);
   den_clone153->SetPassedEvents(0,0);
   den_clone153->SetTotalEvents(1,1195);
   den_clone153->SetPassedEvents(1,190);
   den_clone153->SetTotalEvents(2,1620);
   den_clone153->SetPassedEvents(2,105);
   den_clone153->SetTotalEvents(3,1722);
   den_clone153->SetPassedEvents(3,112);
   den_clone153->SetTotalEvents(4,1586);
   den_clone153->SetPassedEvents(4,89);
   den_clone153->SetTotalEvents(5,1784);
   den_clone153->SetPassedEvents(5,108);
   den_clone153->SetTotalEvents(6,1620);
   den_clone153->SetPassedEvents(6,117);
   den_clone153->SetTotalEvents(7,1550);
   den_clone153->SetPassedEvents(7,109);
   den_clone153->SetTotalEvents(8,1729);
   den_clone153->SetPassedEvents(8,121);
   den_clone153->SetTotalEvents(9,1677);
   den_clone153->SetPassedEvents(9,128);
   den_clone153->SetTotalEvents(10,1696);
   den_clone153->SetPassedEvents(10,165);
   den_clone153->SetTotalEvents(11,1651);
   den_clone153->SetPassedEvents(11,159);
   den_clone153->SetTotalEvents(12,1631);
   den_clone153->SetPassedEvents(12,143);
   den_clone153->SetTotalEvents(13,1623);
   den_clone153->SetPassedEvents(13,131);
   den_clone153->SetTotalEvents(14,1704);
   den_clone153->SetPassedEvents(14,172);
   den_clone153->SetTotalEvents(15,1653);
   den_clone153->SetPassedEvents(15,186);
   den_clone153->SetTotalEvents(16,1702);
   den_clone153->SetPassedEvents(16,200);
   den_clone153->SetTotalEvents(17,1659);
   den_clone153->SetPassedEvents(17,213);
   den_clone153->SetTotalEvents(18,1646);
   den_clone153->SetPassedEvents(18,233);
   den_clone153->SetTotalEvents(19,1626);
   den_clone153->SetPassedEvents(19,238);
   den_clone153->SetTotalEvents(20,1448);
   den_clone153->SetPassedEvents(20,454);
   den_clone153->SetTotalEvents(21,1021);
   den_clone153->SetPassedEvents(21,269);
   den_clone153->SetTotalEvents(22,636);
   den_clone153->SetPassedEvents(22,350);
   den_clone153->SetTotalEvents(23,115);
   den_clone153->SetPassedEvents(23,108);
   den_clone153->SetTotalEvents(24,0);
   den_clone153->SetPassedEvents(24,0);
   den_clone153->SetTotalEvents(25,0);
   den_clone153->SetPassedEvents(25,0);
   den_clone153->SetTotalEvents(26,0);
   den_clone153->SetPassedEvents(26,0);
   den_clone153->SetFillColor(19);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ff0000");
   den_clone153->SetLineColor(ci);
   den_clone153->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   den_clone153->SetMarkerColor(ci);
   den_clone153->SetMarkerStyle(22);
   den_clone153->Draw("same samep");
   
   TEfficiency * den_clone154 = new TEfficiency("den_clone","",25,1.6,2.2);
   
   den_clone154->SetConfidenceLevel(0.6826895);
   den_clone154->SetBetaAlpha(1);
   den_clone154->SetBetaBeta(1);
   den_clone154->SetWeight(1);
   den_clone154->SetStatisticOption(0);
   den_clone154->SetPosteriorMode(0);
   den_clone154->SetShortestInterval(0);
   den_clone154->SetTotalEvents(0,0);
   den_clone154->SetPassedEvents(0,0);
   den_clone154->SetTotalEvents(1,1249);
   den_clone154->SetPassedEvents(1,271);
   den_clone154->SetTotalEvents(2,1718);
   den_clone154->SetPassedEvents(2,185);
   den_clone154->SetTotalEvents(3,1621);
   den_clone154->SetPassedEvents(3,170);
   den_clone154->SetTotalEvents(4,1755);
   den_clone154->SetPassedEvents(4,197);
   den_clone154->SetTotalEvents(5,1544);
   den_clone154->SetPassedEvents(5,172);
   den_clone154->SetTotalEvents(6,1633);
   den_clone154->SetPassedEvents(6,185);
   den_clone154->SetTotalEvents(7,1644);
   den_clone154->SetPassedEvents(7,185);
   den_clone154->SetTotalEvents(8,1525);
   den_clone154->SetPassedEvents(8,212);
   den_clone154->SetTotalEvents(9,1623);
   den_clone154->SetPassedEvents(9,216);
   den_clone154->SetTotalEvents(10,1746);
   den_clone154->SetPassedEvents(10,225);
   den_clone154->SetTotalEvents(11,1660);
   den_clone154->SetPassedEvents(11,229);
   den_clone154->SetTotalEvents(12,1577);
   den_clone154->SetPassedEvents(12,238);
   den_clone154->SetTotalEvents(13,1711);
   den_clone154->SetPassedEvents(13,239);
   den_clone154->SetTotalEvents(14,1686);
   den_clone154->SetPassedEvents(14,248);
   den_clone154->SetTotalEvents(15,1657);
   den_clone154->SetPassedEvents(15,277);
   den_clone154->SetTotalEvents(16,1666);
   den_clone154->SetPassedEvents(16,283);
   den_clone154->SetTotalEvents(17,1669);
   den_clone154->SetPassedEvents(17,316);
   den_clone154->SetTotalEvents(18,1627);
   den_clone154->SetPassedEvents(18,301);
   den_clone154->SetTotalEvents(19,1614);
   den_clone154->SetPassedEvents(19,315);
   den_clone154->SetTotalEvents(20,1635);
   den_clone154->SetPassedEvents(20,583);
   den_clone154->SetTotalEvents(21,998);
   den_clone154->SetPassedEvents(21,314);
   den_clone154->SetTotalEvents(22,763);
   den_clone154->SetPassedEvents(22,419);
   den_clone154->SetTotalEvents(23,117);
   den_clone154->SetPassedEvents(23,115);
   den_clone154->SetTotalEvents(24,0);
   den_clone154->SetPassedEvents(24,0);
   den_clone154->SetTotalEvents(25,0);
   den_clone154->SetPassedEvents(25,0);
   den_clone154->SetTotalEvents(26,0);
   den_clone154->SetPassedEvents(26,0);
   den_clone154->SetFillColor(19);

   ci = TColor::GetColor("#0000ff");
   den_clone154->SetLineColor(ci);
   den_clone154->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   den_clone154->SetMarkerColor(ci);
   den_clone154->SetMarkerStyle(21);
   den_clone154->Draw("same samep");
   
   TEfficiency * den_clone155 = new TEfficiency("den_clone","",25,1.6,2.2);
   
   den_clone155->SetConfidenceLevel(0.6826895);
   den_clone155->SetBetaAlpha(1);
   den_clone155->SetBetaBeta(1);
   den_clone155->SetWeight(1);
   den_clone155->SetStatisticOption(0);
   den_clone155->SetPosteriorMode(0);
   den_clone155->SetShortestInterval(0);
   den_clone155->SetTotalEvents(0,0);
   den_clone155->SetPassedEvents(0,0);
   den_clone155->SetTotalEvents(1,1249);
   den_clone155->SetPassedEvents(1,184);
   den_clone155->SetTotalEvents(2,1718);
   den_clone155->SetPassedEvents(2,76);
   den_clone155->SetTotalEvents(3,1621);
   den_clone155->SetPassedEvents(3,74);
   den_clone155->SetTotalEvents(4,1755);
   den_clone155->SetPassedEvents(4,90);
   den_clone155->SetTotalEvents(5,1544);
   den_clone155->SetPassedEvents(5,89);
   den_clone155->SetTotalEvents(6,1633);
   den_clone155->SetPassedEvents(6,93);
   den_clone155->SetTotalEvents(7,1644);
   den_clone155->SetPassedEvents(7,107);
   den_clone155->SetTotalEvents(8,1525);
   den_clone155->SetPassedEvents(8,120);
   den_clone155->SetTotalEvents(9,1623);
   den_clone155->SetPassedEvents(9,117);
   den_clone155->SetTotalEvents(10,1746);
   den_clone155->SetPassedEvents(10,124);
   den_clone155->SetTotalEvents(11,1660);
   den_clone155->SetPassedEvents(11,133);
   den_clone155->SetTotalEvents(12,1577);
   den_clone155->SetPassedEvents(12,139);
   den_clone155->SetTotalEvents(13,1711);
   den_clone155->SetPassedEvents(13,128);
   den_clone155->SetTotalEvents(14,1686);
   den_clone155->SetPassedEvents(14,144);
   den_clone155->SetTotalEvents(15,1657);
   den_clone155->SetPassedEvents(15,189);
   den_clone155->SetTotalEvents(16,1666);
   den_clone155->SetPassedEvents(16,181);
   den_clone155->SetTotalEvents(17,1669);
   den_clone155->SetPassedEvents(17,198);
   den_clone155->SetTotalEvents(18,1627);
   den_clone155->SetPassedEvents(18,199);
   den_clone155->SetTotalEvents(19,1614);
   den_clone155->SetPassedEvents(19,214);
   den_clone155->SetTotalEvents(20,1635);
   den_clone155->SetPassedEvents(20,505);
   den_clone155->SetTotalEvents(21,998);
   den_clone155->SetPassedEvents(21,262);
   den_clone155->SetTotalEvents(22,763);
   den_clone155->SetPassedEvents(22,388);
   den_clone155->SetTotalEvents(23,117);
   den_clone155->SetPassedEvents(23,113);
   den_clone155->SetTotalEvents(24,0);
   den_clone155->SetPassedEvents(24,0);
   den_clone155->SetTotalEvents(25,0);
   den_clone155->SetPassedEvents(25,0);
   den_clone155->SetTotalEvents(26,0);
   den_clone155->SetPassedEvents(26,0);
   den_clone155->SetFillColor(19);
   den_clone155->SetLineWidth(2);
   den_clone155->SetMarkerStyle(23);
   den_clone155->Draw("same samep");
   
   TEfficiency * den_clone156 = new TEfficiency("den_clone","",25,1.6,2.2);
   
   den_clone156->SetConfidenceLevel(0.6826895);
   den_clone156->SetBetaAlpha(1);
   den_clone156->SetBetaBeta(1);
   den_clone156->SetWeight(1);
   den_clone156->SetStatisticOption(0);
   den_clone156->SetPosteriorMode(0);
   den_clone156->SetShortestInterval(0);
   den_clone156->SetTotalEvents(0,0);
   den_clone156->SetPassedEvents(0,0);
   den_clone156->SetTotalEvents(1,438);
   den_clone156->SetPassedEvents(1,23);
   den_clone156->SetTotalEvents(2,553);
   den_clone156->SetPassedEvents(2,7);
   den_clone156->SetTotalEvents(3,615);
   den_clone156->SetPassedEvents(3,9);
   den_clone156->SetTotalEvents(4,638);
   den_clone156->SetPassedEvents(4,5);
   den_clone156->SetTotalEvents(5,566);
   den_clone156->SetPassedEvents(5,13);
   den_clone156->SetTotalEvents(6,632);
   den_clone156->SetPassedEvents(6,13);
   den_clone156->SetTotalEvents(7,590);
   den_clone156->SetPassedEvents(7,17);
   den_clone156->SetTotalEvents(8,563);
   den_clone156->SetPassedEvents(8,18);
   den_clone156->SetTotalEvents(9,692);
   den_clone156->SetPassedEvents(9,22);
   den_clone156->SetTotalEvents(10,658);
   den_clone156->SetPassedEvents(10,19);
   den_clone156->SetTotalEvents(11,549);
   den_clone156->SetPassedEvents(11,22);
   den_clone156->SetTotalEvents(12,588);
   den_clone156->SetPassedEvents(12,11);
   den_clone156->SetTotalEvents(13,586);
   den_clone156->SetPassedEvents(13,12);
   den_clone156->SetTotalEvents(14,552);
   den_clone156->SetPassedEvents(14,15);
   den_clone156->SetTotalEvents(15,587);
   den_clone156->SetPassedEvents(15,14);
   den_clone156->SetTotalEvents(16,589);
   den_clone156->SetPassedEvents(16,21);
   den_clone156->SetTotalEvents(17,562);
   den_clone156->SetPassedEvents(17,14);
   den_clone156->SetTotalEvents(18,609);
   den_clone156->SetPassedEvents(18,30);
   den_clone156->SetTotalEvents(19,598);
   den_clone156->SetPassedEvents(19,34);
   den_clone156->SetTotalEvents(20,538);
   den_clone156->SetPassedEvents(20,103);
   den_clone156->SetTotalEvents(21,359);
   den_clone156->SetPassedEvents(21,57);
   den_clone156->SetTotalEvents(22,264);
   den_clone156->SetPassedEvents(22,121);
   den_clone156->SetTotalEvents(23,52);
   den_clone156->SetPassedEvents(23,49);
   den_clone156->SetTotalEvents(24,1);
   den_clone156->SetPassedEvents(24,1);
   den_clone156->SetTotalEvents(25,0);
   den_clone156->SetPassedEvents(25,0);
   den_clone156->SetTotalEvents(26,0);
   den_clone156->SetPassedEvents(26,0);
   den_clone156->SetFillColor(19);

   ci = TColor::GetColor("#00cc00");
   den_clone156->SetLineColor(ci);
   den_clone156->SetLineWidth(2);

   ci = TColor::GetColor("#00cc00");
   den_clone156->SetMarkerColor(ci);
   den_clone156->SetMarkerStyle(23);
   den_clone156->Draw("same samep");
   
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
   TText *text = new TText(0.17,0.17,"ME1/b");
   text->SetNDC();
   text->Draw();
   text = new TText(0.17,0.24,"notHQCLCT");
   text->SetNDC();
   text->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
