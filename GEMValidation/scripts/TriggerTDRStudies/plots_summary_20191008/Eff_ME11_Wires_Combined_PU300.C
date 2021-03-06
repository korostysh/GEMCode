void Eff_ME11_Wires_Combined_PU300()
{
//=========Macro generated from canvas: c/c
//=========  (Tue Oct  8 12:50:23 2019) by ROOT version 6.14/09
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
   
   TH1F *base__8 = new TH1F("base__8","",25,1.6,2.4);
   base__8->SetMinimum(0.5);
   base__8->SetMaximum(1.025);
   base__8->SetLineStyle(0);
   base__8->SetMarkerStyle(20);
   base__8->GetXaxis()->SetTitle("True muon |#eta|");
   base__8->GetXaxis()->SetLabelFont(42);
   base__8->GetXaxis()->SetLabelOffset(0.007);
   base__8->GetXaxis()->SetLabelSize(0.05);
   base__8->GetXaxis()->SetTitleSize(0.06);
   base__8->GetXaxis()->SetTitleOffset(0.9);
   base__8->GetXaxis()->SetTitleFont(42);
   base__8->GetYaxis()->SetTitle("Efficiency");
   base__8->GetYaxis()->SetLabelFont(42);
   base__8->GetYaxis()->SetLabelOffset(0.007);
   base__8->GetYaxis()->SetLabelSize(0.05);
   base__8->GetYaxis()->SetTitleSize(0.06);
   base__8->GetYaxis()->SetTitleOffset(0.9);
   base__8->GetYaxis()->SetTitleFont(42);
   base__8->GetZaxis()->SetLabelFont(42);
   base__8->GetZaxis()->SetLabelOffset(0.007);
   base__8->GetZaxis()->SetLabelSize(0.05);
   base__8->GetZaxis()->SetTitleSize(0.06);
   base__8->GetZaxis()->SetTitleFont(42);
   base__8->Draw("");
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
   
   TEfficiency * den_clone30 = new TEfficiency("den_clone","",25,1.6,2.4);
   
   den_clone30->SetConfidenceLevel(0.6826895);
   den_clone30->SetBetaAlpha(1);
   den_clone30->SetBetaBeta(1);
   den_clone30->SetWeight(1);
   den_clone30->SetStatisticOption(0);
   den_clone30->SetPosteriorMode(0);
   den_clone30->SetShortestInterval(0);
   den_clone30->SetTotalEvents(0,0);
   den_clone30->SetPassedEvents(0,0);
   den_clone30->SetTotalEvents(1,1860);
   den_clone30->SetPassedEvents(1,1860);
   den_clone30->SetTotalEvents(2,2223);
   den_clone30->SetPassedEvents(2,2223);
   den_clone30->SetTotalEvents(3,2260);
   den_clone30->SetPassedEvents(3,2260);
   den_clone30->SetTotalEvents(4,2055);
   den_clone30->SetPassedEvents(4,2055);
   den_clone30->SetTotalEvents(5,2254);
   den_clone30->SetPassedEvents(5,2253);
   den_clone30->SetTotalEvents(6,2037);
   den_clone30->SetPassedEvents(6,2037);
   den_clone30->SetTotalEvents(7,2177);
   den_clone30->SetPassedEvents(7,2177);
   den_clone30->SetTotalEvents(8,2314);
   den_clone30->SetPassedEvents(8,2314);
   den_clone30->SetTotalEvents(9,2115);
   den_clone30->SetPassedEvents(9,2115);
   den_clone30->SetTotalEvents(10,2253);
   den_clone30->SetPassedEvents(10,2253);
   den_clone30->SetTotalEvents(11,2272);
   den_clone30->SetPassedEvents(11,2272);
   den_clone30->SetTotalEvents(12,2195);
   den_clone30->SetPassedEvents(12,2195);
   den_clone30->SetTotalEvents(13,2180);
   den_clone30->SetPassedEvents(13,2180);
   den_clone30->SetTotalEvents(14,2208);
   den_clone30->SetPassedEvents(14,2208);
   den_clone30->SetTotalEvents(15,2245);
   den_clone30->SetPassedEvents(15,2245);
   den_clone30->SetTotalEvents(16,2228);
   den_clone30->SetPassedEvents(16,2228);
   den_clone30->SetTotalEvents(17,2213);
   den_clone30->SetPassedEvents(17,2213);
   den_clone30->SetTotalEvents(18,2192);
   den_clone30->SetPassedEvents(18,2192);
   den_clone30->SetTotalEvents(19,2248);
   den_clone30->SetPassedEvents(19,2248);
   den_clone30->SetTotalEvents(20,2187);
   den_clone30->SetPassedEvents(20,2187);
   den_clone30->SetTotalEvents(21,2152);
   den_clone30->SetPassedEvents(21,2152);
   den_clone30->SetTotalEvents(22,2232);
   den_clone30->SetPassedEvents(22,2232);
   den_clone30->SetTotalEvents(23,2231);
   den_clone30->SetPassedEvents(23,2231);
   den_clone30->SetTotalEvents(24,2085);
   den_clone30->SetPassedEvents(24,2085);
   den_clone30->SetTotalEvents(25,2167);
   den_clone30->SetPassedEvents(25,2167);
   den_clone30->SetTotalEvents(26,0);
   den_clone30->SetPassedEvents(26,0);
   den_clone30->SetFillColor(19);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#999999");
   den_clone30->SetLineColor(ci);
   den_clone30->SetLineWidth(2);

   ci = TColor::GetColor("#999999");
   den_clone30->SetMarkerColor(ci);
   den_clone30->SetMarkerStyle(23);
   den_clone30->Draw("same samep");
   
   TEfficiency * den_clone31 = new TEfficiency("den_clone","",25,1.6,2.4);
   
   den_clone31->SetConfidenceLevel(0.6826895);
   den_clone31->SetBetaAlpha(1);
   den_clone31->SetBetaBeta(1);
   den_clone31->SetWeight(1);
   den_clone31->SetStatisticOption(0);
   den_clone31->SetPosteriorMode(0);
   den_clone31->SetShortestInterval(0);
   den_clone31->SetTotalEvents(0,0);
   den_clone31->SetPassedEvents(0,0);
   den_clone31->SetTotalEvents(1,1860);
   den_clone31->SetPassedEvents(1,1860);
   den_clone31->SetTotalEvents(2,2223);
   den_clone31->SetPassedEvents(2,2223);
   den_clone31->SetTotalEvents(3,2260);
   den_clone31->SetPassedEvents(3,2260);
   den_clone31->SetTotalEvents(4,2055);
   den_clone31->SetPassedEvents(4,2055);
   den_clone31->SetTotalEvents(5,2254);
   den_clone31->SetPassedEvents(5,2253);
   den_clone31->SetTotalEvents(6,2037);
   den_clone31->SetPassedEvents(6,2037);
   den_clone31->SetTotalEvents(7,2177);
   den_clone31->SetPassedEvents(7,2177);
   den_clone31->SetTotalEvents(8,2314);
   den_clone31->SetPassedEvents(8,2314);
   den_clone31->SetTotalEvents(9,2115);
   den_clone31->SetPassedEvents(9,2115);
   den_clone31->SetTotalEvents(10,2253);
   den_clone31->SetPassedEvents(10,2253);
   den_clone31->SetTotalEvents(11,2272);
   den_clone31->SetPassedEvents(11,2272);
   den_clone31->SetTotalEvents(12,2195);
   den_clone31->SetPassedEvents(12,2195);
   den_clone31->SetTotalEvents(13,2180);
   den_clone31->SetPassedEvents(13,2180);
   den_clone31->SetTotalEvents(14,2208);
   den_clone31->SetPassedEvents(14,2208);
   den_clone31->SetTotalEvents(15,2245);
   den_clone31->SetPassedEvents(15,2245);
   den_clone31->SetTotalEvents(16,2228);
   den_clone31->SetPassedEvents(16,2228);
   den_clone31->SetTotalEvents(17,2213);
   den_clone31->SetPassedEvents(17,2213);
   den_clone31->SetTotalEvents(18,2192);
   den_clone31->SetPassedEvents(18,2192);
   den_clone31->SetTotalEvents(19,2248);
   den_clone31->SetPassedEvents(19,2248);
   den_clone31->SetTotalEvents(20,2187);
   den_clone31->SetPassedEvents(20,2187);
   den_clone31->SetTotalEvents(21,2152);
   den_clone31->SetPassedEvents(21,2152);
   den_clone31->SetTotalEvents(22,2232);
   den_clone31->SetPassedEvents(22,2232);
   den_clone31->SetTotalEvents(23,2231);
   den_clone31->SetPassedEvents(23,2231);
   den_clone31->SetTotalEvents(24,2085);
   den_clone31->SetPassedEvents(24,2085);
   den_clone31->SetTotalEvents(25,2167);
   den_clone31->SetPassedEvents(25,2167);
   den_clone31->SetTotalEvents(26,0);
   den_clone31->SetPassedEvents(26,0);
   den_clone31->SetFillColor(19);

   ci = TColor::GetColor("#ff0000");
   den_clone31->SetLineColor(ci);
   den_clone31->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   den_clone31->SetMarkerColor(ci);
   den_clone31->SetMarkerStyle(22);
   den_clone31->Draw("same samep");
   
   TEfficiency * den_clone32 = new TEfficiency("den_clone","",25,1.6,2.4);
   
   den_clone32->SetConfidenceLevel(0.6826895);
   den_clone32->SetBetaAlpha(1);
   den_clone32->SetBetaBeta(1);
   den_clone32->SetWeight(1);
   den_clone32->SetStatisticOption(0);
   den_clone32->SetPosteriorMode(0);
   den_clone32->SetShortestInterval(0);
   den_clone32->SetTotalEvents(0,0);
   den_clone32->SetPassedEvents(0,0);
   den_clone32->SetTotalEvents(1,1860);
   den_clone32->SetPassedEvents(1,1860);
   den_clone32->SetTotalEvents(2,2223);
   den_clone32->SetPassedEvents(2,2223);
   den_clone32->SetTotalEvents(3,2260);
   den_clone32->SetPassedEvents(3,2260);
   den_clone32->SetTotalEvents(4,2055);
   den_clone32->SetPassedEvents(4,2055);
   den_clone32->SetTotalEvents(5,2254);
   den_clone32->SetPassedEvents(5,2253);
   den_clone32->SetTotalEvents(6,2037);
   den_clone32->SetPassedEvents(6,2037);
   den_clone32->SetTotalEvents(7,2177);
   den_clone32->SetPassedEvents(7,2177);
   den_clone32->SetTotalEvents(8,2314);
   den_clone32->SetPassedEvents(8,2314);
   den_clone32->SetTotalEvents(9,2115);
   den_clone32->SetPassedEvents(9,2115);
   den_clone32->SetTotalEvents(10,2253);
   den_clone32->SetPassedEvents(10,2253);
   den_clone32->SetTotalEvents(11,2272);
   den_clone32->SetPassedEvents(11,2272);
   den_clone32->SetTotalEvents(12,2195);
   den_clone32->SetPassedEvents(12,2195);
   den_clone32->SetTotalEvents(13,2180);
   den_clone32->SetPassedEvents(13,2180);
   den_clone32->SetTotalEvents(14,2208);
   den_clone32->SetPassedEvents(14,2208);
   den_clone32->SetTotalEvents(15,2245);
   den_clone32->SetPassedEvents(15,2245);
   den_clone32->SetTotalEvents(16,2228);
   den_clone32->SetPassedEvents(16,2228);
   den_clone32->SetTotalEvents(17,2213);
   den_clone32->SetPassedEvents(17,2213);
   den_clone32->SetTotalEvents(18,2192);
   den_clone32->SetPassedEvents(18,2192);
   den_clone32->SetTotalEvents(19,2248);
   den_clone32->SetPassedEvents(19,2248);
   den_clone32->SetTotalEvents(20,2187);
   den_clone32->SetPassedEvents(20,2187);
   den_clone32->SetTotalEvents(21,2152);
   den_clone32->SetPassedEvents(21,2152);
   den_clone32->SetTotalEvents(22,2232);
   den_clone32->SetPassedEvents(22,2232);
   den_clone32->SetTotalEvents(23,2231);
   den_clone32->SetPassedEvents(23,2231);
   den_clone32->SetTotalEvents(24,2085);
   den_clone32->SetPassedEvents(24,2085);
   den_clone32->SetTotalEvents(25,2167);
   den_clone32->SetPassedEvents(25,2167);
   den_clone32->SetTotalEvents(26,0);
   den_clone32->SetPassedEvents(26,0);
   den_clone32->SetFillColor(19);

   ci = TColor::GetColor("#0000ff");
   den_clone32->SetLineColor(ci);
   den_clone32->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   den_clone32->SetMarkerColor(ci);
   den_clone32->SetMarkerStyle(21);
   den_clone32->Draw("same samep");
   
   TEfficiency * den_clone33 = new TEfficiency("den_clone","",25,1.6,2.4);
   
   den_clone33->SetConfidenceLevel(0.6826895);
   den_clone33->SetBetaAlpha(1);
   den_clone33->SetBetaBeta(1);
   den_clone33->SetWeight(1);
   den_clone33->SetStatisticOption(0);
   den_clone33->SetPosteriorMode(0);
   den_clone33->SetShortestInterval(0);
   den_clone33->SetTotalEvents(0,0);
   den_clone33->SetPassedEvents(0,0);
   den_clone33->SetTotalEvents(1,649);
   den_clone33->SetPassedEvents(1,649);
   den_clone33->SetTotalEvents(2,778);
   den_clone33->SetPassedEvents(2,778);
   den_clone33->SetTotalEvents(3,852);
   den_clone33->SetPassedEvents(3,852);
   den_clone33->SetTotalEvents(4,778);
   den_clone33->SetPassedEvents(4,778);
   den_clone33->SetTotalEvents(5,791);
   den_clone33->SetPassedEvents(5,791);
   den_clone33->SetTotalEvents(6,783);
   den_clone33->SetPassedEvents(6,783);
   den_clone33->SetTotalEvents(7,878);
   den_clone33->SetPassedEvents(7,878);
   den_clone33->SetTotalEvents(8,848);
   den_clone33->SetPassedEvents(8,848);
   den_clone33->SetTotalEvents(9,761);
   den_clone33->SetPassedEvents(9,761);
   den_clone33->SetTotalEvents(10,759);
   den_clone33->SetPassedEvents(10,759);
   den_clone33->SetTotalEvents(11,773);
   den_clone33->SetPassedEvents(11,773);
   den_clone33->SetTotalEvents(12,785);
   den_clone33->SetPassedEvents(12,785);
   den_clone33->SetTotalEvents(13,796);
   den_clone33->SetPassedEvents(13,796);
   den_clone33->SetTotalEvents(14,762);
   den_clone33->SetPassedEvents(14,762);
   den_clone33->SetTotalEvents(15,770);
   den_clone33->SetPassedEvents(15,770);
   den_clone33->SetTotalEvents(16,782);
   den_clone33->SetPassedEvents(16,782);
   den_clone33->SetTotalEvents(17,787);
   den_clone33->SetPassedEvents(17,787);
   den_clone33->SetTotalEvents(18,768);
   den_clone33->SetPassedEvents(18,768);
   den_clone33->SetTotalEvents(19,816);
   den_clone33->SetPassedEvents(19,816);
   den_clone33->SetTotalEvents(20,795);
   den_clone33->SetPassedEvents(20,795);
   den_clone33->SetTotalEvents(21,752);
   den_clone33->SetPassedEvents(21,752);
   den_clone33->SetTotalEvents(22,862);
   den_clone33->SetPassedEvents(22,862);
   den_clone33->SetTotalEvents(23,740);
   den_clone33->SetPassedEvents(23,740);
   den_clone33->SetTotalEvents(24,855);
   den_clone33->SetPassedEvents(24,855);
   den_clone33->SetTotalEvents(25,724);
   den_clone33->SetPassedEvents(25,724);
   den_clone33->SetTotalEvents(26,0);
   den_clone33->SetPassedEvents(26,0);
   den_clone33->SetFillColor(19);
   den_clone33->SetLineWidth(2);
   den_clone33->SetMarkerStyle(24);
   den_clone33->Draw("same samep");
   
   TEfficiency * den_clone34 = new TEfficiency("den_clone","",25,1.6,2.4);
   
   den_clone34->SetConfidenceLevel(0.6826895);
   den_clone34->SetBetaAlpha(1);
   den_clone34->SetBetaBeta(1);
   den_clone34->SetWeight(1);
   den_clone34->SetStatisticOption(0);
   den_clone34->SetPosteriorMode(0);
   den_clone34->SetShortestInterval(0);
   den_clone34->SetTotalEvents(0,0);
   den_clone34->SetPassedEvents(0,0);
   den_clone34->SetTotalEvents(1,1726);
   den_clone34->SetPassedEvents(1,1726);
   den_clone34->SetTotalEvents(2,2251);
   den_clone34->SetPassedEvents(2,2251);
   den_clone34->SetTotalEvents(3,2146);
   den_clone34->SetPassedEvents(3,2146);
   den_clone34->SetTotalEvents(4,2364);
   den_clone34->SetPassedEvents(4,2364);
   den_clone34->SetTotalEvents(5,2042);
   den_clone34->SetPassedEvents(5,2042);
   den_clone34->SetTotalEvents(6,2277);
   den_clone34->SetPassedEvents(6,2277);
   den_clone34->SetTotalEvents(7,2245);
   den_clone34->SetPassedEvents(7,2245);
   den_clone34->SetTotalEvents(8,2209);
   den_clone34->SetPassedEvents(8,2209);
   den_clone34->SetTotalEvents(9,2201);
   den_clone34->SetPassedEvents(9,2200);
   den_clone34->SetTotalEvents(10,2142);
   den_clone34->SetPassedEvents(10,2142);
   den_clone34->SetTotalEvents(11,2306);
   den_clone34->SetPassedEvents(11,2306);
   den_clone34->SetTotalEvents(12,2234);
   den_clone34->SetPassedEvents(12,2234);
   den_clone34->SetTotalEvents(13,2243);
   den_clone34->SetPassedEvents(13,2243);
   den_clone34->SetTotalEvents(14,2176);
   den_clone34->SetPassedEvents(14,2176);
   den_clone34->SetTotalEvents(15,2028);
   den_clone34->SetPassedEvents(15,2028);
   den_clone34->SetTotalEvents(16,2122);
   den_clone34->SetPassedEvents(16,2122);
   den_clone34->SetTotalEvents(17,2217);
   den_clone34->SetPassedEvents(17,2217);
   den_clone34->SetTotalEvents(18,2286);
   den_clone34->SetPassedEvents(18,2286);
   den_clone34->SetTotalEvents(19,2196);
   den_clone34->SetPassedEvents(19,2196);
   den_clone34->SetTotalEvents(20,2320);
   den_clone34->SetPassedEvents(20,2320);
   den_clone34->SetTotalEvents(21,2255);
   den_clone34->SetPassedEvents(21,2255);
   den_clone34->SetTotalEvents(22,2161);
   den_clone34->SetPassedEvents(22,2161);
   den_clone34->SetTotalEvents(23,2310);
   den_clone34->SetPassedEvents(23,2310);
   den_clone34->SetTotalEvents(24,2195);
   den_clone34->SetPassedEvents(24,2195);
   den_clone34->SetTotalEvents(25,2187);
   den_clone34->SetPassedEvents(25,2187);
   den_clone34->SetTotalEvents(26,0);
   den_clone34->SetPassedEvents(26,0);
   den_clone34->SetFillColor(19);

   ci = TColor::GetColor("#ff00ff");
   den_clone34->SetLineColor(ci);
   den_clone34->SetLineWidth(2);

   ci = TColor::GetColor("#ff00ff");
   den_clone34->SetMarkerColor(ci);
   den_clone34->SetMarkerStyle(24);
   den_clone34->Draw("same samep");
   
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
   TText *text = new TText(0.17,0.17,"ME1/1");
   text->SetNDC();
   text->Draw();
   text = new TText(0.17,0.24,"Wires");
   text->SetNDC();
   text->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
