void Eff_ME11_notHQALCT_Combined()
{
//=========Macro generated from canvas: c/c
//=========  (Fri Oct 11 07:49:55 2019) by ROOT version 6.14/09
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   c->SetHighLightColor(2);
   c->Range(1.485714,0.42125,2.438095,1.0775);
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
   
   TH1F *base__15 = new TH1F("base__15","",25,1.6,2.4);
   base__15->SetMinimum(0.5);
   base__15->SetMaximum(1.025);
   base__15->SetLineStyle(0);
   base__15->SetMarkerStyle(20);
   base__15->GetXaxis()->SetTitle("True muon |#eta|");
   base__15->GetXaxis()->SetLabelFont(42);
   base__15->GetXaxis()->SetLabelOffset(0.007);
   base__15->GetXaxis()->SetLabelSize(0.05);
   base__15->GetXaxis()->SetTitleSize(0.06);
   base__15->GetXaxis()->SetTitleOffset(0.9);
   base__15->GetXaxis()->SetTitleFont(42);
   base__15->GetYaxis()->SetTitle("Efficiency");
   base__15->GetYaxis()->SetLabelFont(42);
   base__15->GetYaxis()->SetLabelOffset(0.007);
   base__15->GetYaxis()->SetLabelSize(0.05);
   base__15->GetYaxis()->SetTitleSize(0.06);
   base__15->GetYaxis()->SetTitleOffset(0.9);
   base__15->GetYaxis()->SetTitleFont(42);
   base__15->GetZaxis()->SetLabelFont(42);
   base__15->GetZaxis()->SetLabelOffset(0.007);
   base__15->GetZaxis()->SetLabelSize(0.05);
   base__15->GetZaxis()->SetTitleSize(0.06);
   base__15->GetZaxis()->SetTitleFont(42);
   base__15->Draw("");
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
   
   TEfficiency * den_clone53 = new TEfficiency("den_clone","",25,1.6,2.4);
   
   den_clone53->SetConfidenceLevel(0.6826895);
   den_clone53->SetBetaAlpha(1);
   den_clone53->SetBetaBeta(1);
   den_clone53->SetWeight(1);
   den_clone53->SetStatisticOption(0);
   den_clone53->SetPosteriorMode(0);
   den_clone53->SetShortestInterval(0);
   den_clone53->SetTotalEvents(0,0);
   den_clone53->SetPassedEvents(0,0);
   den_clone53->SetTotalEvents(1,1726);
   den_clone53->SetPassedEvents(1,106);
   den_clone53->SetTotalEvents(2,2251);
   den_clone53->SetPassedEvents(2,6);
   den_clone53->SetTotalEvents(3,2146);
   den_clone53->SetPassedEvents(3,5);
   den_clone53->SetTotalEvents(4,2364);
   den_clone53->SetPassedEvents(4,8);
   den_clone53->SetTotalEvents(5,2042);
   den_clone53->SetPassedEvents(5,2);
   den_clone53->SetTotalEvents(6,2277);
   den_clone53->SetPassedEvents(6,6);
   den_clone53->SetTotalEvents(7,2245);
   den_clone53->SetPassedEvents(7,4);
   den_clone53->SetTotalEvents(8,2209);
   den_clone53->SetPassedEvents(8,4);
   den_clone53->SetTotalEvents(9,2201);
   den_clone53->SetPassedEvents(9,3);
   den_clone53->SetTotalEvents(10,2142);
   den_clone53->SetPassedEvents(10,4);
   den_clone53->SetTotalEvents(11,2306);
   den_clone53->SetPassedEvents(11,4);
   den_clone53->SetTotalEvents(12,2234);
   den_clone53->SetPassedEvents(12,4);
   den_clone53->SetTotalEvents(13,2243);
   den_clone53->SetPassedEvents(13,8);
   den_clone53->SetTotalEvents(14,2176);
   den_clone53->SetPassedEvents(14,14);
   den_clone53->SetTotalEvents(15,2028);
   den_clone53->SetPassedEvents(15,37);
   den_clone53->SetTotalEvents(16,2122);
   den_clone53->SetPassedEvents(16,18);
   den_clone53->SetTotalEvents(17,2217);
   den_clone53->SetPassedEvents(17,7);
   den_clone53->SetTotalEvents(18,2286);
   den_clone53->SetPassedEvents(18,4);
   den_clone53->SetTotalEvents(19,2196);
   den_clone53->SetPassedEvents(19,5);
   den_clone53->SetTotalEvents(20,2320);
   den_clone53->SetPassedEvents(20,6);
   den_clone53->SetTotalEvents(21,2255);
   den_clone53->SetPassedEvents(21,1);
   den_clone53->SetTotalEvents(22,2161);
   den_clone53->SetPassedEvents(22,2);
   den_clone53->SetTotalEvents(23,2310);
   den_clone53->SetPassedEvents(23,2);
   den_clone53->SetTotalEvents(24,2195);
   den_clone53->SetPassedEvents(24,2);
   den_clone53->SetTotalEvents(25,2187);
   den_clone53->SetPassedEvents(25,35);
   den_clone53->SetTotalEvents(26,0);
   den_clone53->SetPassedEvents(26,0);
   den_clone53->SetFillColor(19);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ff0000");
   den_clone53->SetLineColor(ci);
   den_clone53->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   den_clone53->SetMarkerColor(ci);
   den_clone53->SetMarkerStyle(22);
   den_clone53->Draw("same samep");
   
   TEfficiency * den_clone54 = new TEfficiency("den_clone","",25,1.6,2.4);
   
   den_clone54->SetConfidenceLevel(0.6826895);
   den_clone54->SetBetaAlpha(1);
   den_clone54->SetBetaBeta(1);
   den_clone54->SetWeight(1);
   den_clone54->SetStatisticOption(0);
   den_clone54->SetPosteriorMode(0);
   den_clone54->SetShortestInterval(0);
   den_clone54->SetTotalEvents(0,0);
   den_clone54->SetPassedEvents(0,0);
   den_clone54->SetTotalEvents(1,1860);
   den_clone54->SetPassedEvents(1,87);
   den_clone54->SetTotalEvents(2,2223);
   den_clone54->SetPassedEvents(2,6);
   den_clone54->SetTotalEvents(3,2260);
   den_clone54->SetPassedEvents(3,15);
   den_clone54->SetTotalEvents(4,2055);
   den_clone54->SetPassedEvents(4,22);
   den_clone54->SetTotalEvents(5,2254);
   den_clone54->SetPassedEvents(5,23);
   den_clone54->SetTotalEvents(6,2037);
   den_clone54->SetPassedEvents(6,20);
   den_clone54->SetTotalEvents(7,2177);
   den_clone54->SetPassedEvents(7,17);
   den_clone54->SetTotalEvents(8,2314);
   den_clone54->SetPassedEvents(8,33);
   den_clone54->SetTotalEvents(9,2115);
   den_clone54->SetPassedEvents(9,30);
   den_clone54->SetTotalEvents(10,2253);
   den_clone54->SetPassedEvents(10,23);
   den_clone54->SetTotalEvents(11,2272);
   den_clone54->SetPassedEvents(11,42);
   den_clone54->SetTotalEvents(12,2195);
   den_clone54->SetPassedEvents(12,40);
   den_clone54->SetTotalEvents(13,2180);
   den_clone54->SetPassedEvents(13,37);
   den_clone54->SetTotalEvents(14,2208);
   den_clone54->SetPassedEvents(14,67);
   den_clone54->SetTotalEvents(15,2245);
   den_clone54->SetPassedEvents(15,97);
   den_clone54->SetTotalEvents(16,2228);
   den_clone54->SetPassedEvents(16,57);
   den_clone54->SetTotalEvents(17,2213);
   den_clone54->SetPassedEvents(17,69);
   den_clone54->SetTotalEvents(18,2192);
   den_clone54->SetPassedEvents(18,66);
   den_clone54->SetTotalEvents(19,2248);
   den_clone54->SetPassedEvents(19,64);
   den_clone54->SetTotalEvents(20,2187);
   den_clone54->SetPassedEvents(20,94);
   den_clone54->SetTotalEvents(21,2152);
   den_clone54->SetPassedEvents(21,102);
   den_clone54->SetTotalEvents(22,2232);
   den_clone54->SetPassedEvents(22,98);
   den_clone54->SetTotalEvents(23,2231);
   den_clone54->SetPassedEvents(23,140);
   den_clone54->SetTotalEvents(24,2085);
   den_clone54->SetPassedEvents(24,123);
   den_clone54->SetTotalEvents(25,2167);
   den_clone54->SetPassedEvents(25,149);
   den_clone54->SetTotalEvents(26,0);
   den_clone54->SetPassedEvents(26,0);
   den_clone54->SetFillColor(19);

   ci = TColor::GetColor("#0000ff");
   den_clone54->SetLineColor(ci);
   den_clone54->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   den_clone54->SetMarkerColor(ci);
   den_clone54->SetMarkerStyle(21);
   den_clone54->Draw("same samep");
   
   TEfficiency * den_clone55 = new TEfficiency("den_clone","",25,1.6,2.4);
   
   den_clone55->SetConfidenceLevel(0.6826895);
   den_clone55->SetBetaAlpha(1);
   den_clone55->SetBetaBeta(1);
   den_clone55->SetWeight(1);
   den_clone55->SetStatisticOption(0);
   den_clone55->SetPosteriorMode(0);
   den_clone55->SetShortestInterval(0);
   den_clone55->SetTotalEvents(0,0);
   den_clone55->SetPassedEvents(0,0);
   den_clone55->SetTotalEvents(1,1860);
   den_clone55->SetPassedEvents(1,90);
   den_clone55->SetTotalEvents(2,2223);
   den_clone55->SetPassedEvents(2,3);
   den_clone55->SetTotalEvents(3,2260);
   den_clone55->SetPassedEvents(3,3);
   den_clone55->SetTotalEvents(4,2055);
   den_clone55->SetPassedEvents(4,4);
   den_clone55->SetTotalEvents(5,2254);
   den_clone55->SetPassedEvents(5,5);
   den_clone55->SetTotalEvents(6,2037);
   den_clone55->SetPassedEvents(6,7);
   den_clone55->SetTotalEvents(7,2177);
   den_clone55->SetPassedEvents(7,4);
   den_clone55->SetTotalEvents(8,2314);
   den_clone55->SetPassedEvents(8,3);
   den_clone55->SetTotalEvents(9,2115);
   den_clone55->SetPassedEvents(9,6);
   den_clone55->SetTotalEvents(10,2253);
   den_clone55->SetPassedEvents(10,1);
   den_clone55->SetTotalEvents(11,2272);
   den_clone55->SetPassedEvents(11,8);
   den_clone55->SetTotalEvents(12,2195);
   den_clone55->SetPassedEvents(12,6);
   den_clone55->SetTotalEvents(13,2180);
   den_clone55->SetPassedEvents(13,4);
   den_clone55->SetTotalEvents(14,2208);
   den_clone55->SetPassedEvents(14,12);
   den_clone55->SetTotalEvents(15,2245);
   den_clone55->SetPassedEvents(15,10);
   den_clone55->SetTotalEvents(16,2228);
   den_clone55->SetPassedEvents(16,11);
   den_clone55->SetTotalEvents(17,2213);
   den_clone55->SetPassedEvents(17,8);
   den_clone55->SetTotalEvents(18,2192);
   den_clone55->SetPassedEvents(18,11);
   den_clone55->SetTotalEvents(19,2248);
   den_clone55->SetPassedEvents(19,9);
   den_clone55->SetTotalEvents(20,2187);
   den_clone55->SetPassedEvents(20,19);
   den_clone55->SetTotalEvents(21,2152);
   den_clone55->SetPassedEvents(21,14);
   den_clone55->SetTotalEvents(22,2232);
   den_clone55->SetPassedEvents(22,17);
   den_clone55->SetTotalEvents(23,2231);
   den_clone55->SetPassedEvents(23,23);
   den_clone55->SetTotalEvents(24,2085);
   den_clone55->SetPassedEvents(24,16);
   den_clone55->SetTotalEvents(25,2167);
   den_clone55->SetPassedEvents(25,67);
   den_clone55->SetTotalEvents(26,0);
   den_clone55->SetPassedEvents(26,0);
   den_clone55->SetFillColor(19);
   den_clone55->SetLineWidth(2);
   den_clone55->SetMarkerStyle(23);
   den_clone55->Draw("same samep");
   
   TEfficiency * den_clone56 = new TEfficiency("den_clone","",25,1.6,2.4);
   
   den_clone56->SetConfidenceLevel(0.6826895);
   den_clone56->SetBetaAlpha(1);
   den_clone56->SetBetaBeta(1);
   den_clone56->SetWeight(1);
   den_clone56->SetStatisticOption(0);
   den_clone56->SetPosteriorMode(0);
   den_clone56->SetShortestInterval(0);
   den_clone56->SetTotalEvents(0,0);
   den_clone56->SetPassedEvents(0,0);
   den_clone56->SetTotalEvents(1,615);
   den_clone56->SetPassedEvents(1,5);
   den_clone56->SetTotalEvents(2,777);
   den_clone56->SetPassedEvents(2,4);
   den_clone56->SetTotalEvents(3,852);
   den_clone56->SetPassedEvents(3,1);
   den_clone56->SetTotalEvents(4,778);
   den_clone56->SetPassedEvents(4,3);
   den_clone56->SetTotalEvents(5,790);
   den_clone56->SetPassedEvents(5,0);
   den_clone56->SetTotalEvents(6,783);
   den_clone56->SetPassedEvents(6,2);
   den_clone56->SetTotalEvents(7,878);
   den_clone56->SetPassedEvents(7,2);
   den_clone56->SetTotalEvents(8,848);
   den_clone56->SetPassedEvents(8,3);
   den_clone56->SetTotalEvents(9,761);
   den_clone56->SetPassedEvents(9,4);
   den_clone56->SetTotalEvents(10,758);
   den_clone56->SetPassedEvents(10,2);
   den_clone56->SetTotalEvents(11,772);
   den_clone56->SetPassedEvents(11,1);
   den_clone56->SetTotalEvents(12,784);
   den_clone56->SetPassedEvents(12,4);
   den_clone56->SetTotalEvents(13,796);
   den_clone56->SetPassedEvents(13,3);
   den_clone56->SetTotalEvents(14,762);
   den_clone56->SetPassedEvents(14,3);
   den_clone56->SetTotalEvents(15,770);
   den_clone56->SetPassedEvents(15,1);
   den_clone56->SetTotalEvents(16,781);
   den_clone56->SetPassedEvents(16,2);
   den_clone56->SetTotalEvents(17,787);
   den_clone56->SetPassedEvents(17,4);
   den_clone56->SetTotalEvents(18,765);
   den_clone56->SetPassedEvents(18,8);
   den_clone56->SetTotalEvents(19,816);
   den_clone56->SetPassedEvents(19,3);
   den_clone56->SetTotalEvents(20,795);
   den_clone56->SetPassedEvents(20,8);
   den_clone56->SetTotalEvents(21,752);
   den_clone56->SetPassedEvents(21,5);
   den_clone56->SetTotalEvents(22,862);
   den_clone56->SetPassedEvents(22,7);
   den_clone56->SetTotalEvents(23,740);
   den_clone56->SetPassedEvents(23,7);
   den_clone56->SetTotalEvents(24,855);
   den_clone56->SetPassedEvents(24,8);
   den_clone56->SetTotalEvents(25,711);
   den_clone56->SetPassedEvents(25,14);
   den_clone56->SetTotalEvents(26,0);
   den_clone56->SetPassedEvents(26,0);
   den_clone56->SetFillColor(19);

   ci = TColor::GetColor("#00cc00");
   den_clone56->SetLineColor(ci);
   den_clone56->SetLineWidth(2);

   ci = TColor::GetColor("#00cc00");
   den_clone56->SetMarkerColor(ci);
   den_clone56->SetMarkerStyle(23);
   den_clone56->Draw("same samep");
   
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
   TText *text = new TText(0.17,0.17,"ME1/1");
   text->SetNDC();
   text->Draw();
   text = new TText(0.17,0.24,"notHQALCT");
   text->SetNDC();
   text->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
