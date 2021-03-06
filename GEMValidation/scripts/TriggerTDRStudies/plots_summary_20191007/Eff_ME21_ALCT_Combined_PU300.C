void Eff_ME21_ALCT_Combined_PU300()
{
//=========Macro generated from canvas: c/c
//=========  (Mon Oct  7 10:15:36 2019) by ROOT version 6.14/09
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
   
   TH1F *base__31 = new TH1F("base__31","",25,1.6,2.4);
   base__31->SetMinimum(0.5);
   base__31->SetMaximum(1.025);
   base__31->SetLineStyle(0);
   base__31->SetMarkerStyle(20);
   base__31->GetXaxis()->SetTitle("True muon |#eta|");
   base__31->GetXaxis()->SetLabelFont(42);
   base__31->GetXaxis()->SetLabelOffset(0.007);
   base__31->GetXaxis()->SetLabelSize(0.05);
   base__31->GetXaxis()->SetTitleSize(0.06);
   base__31->GetXaxis()->SetTitleOffset(0.9);
   base__31->GetXaxis()->SetTitleFont(42);
   base__31->GetYaxis()->SetTitle("Efficiency");
   base__31->GetYaxis()->SetLabelFont(42);
   base__31->GetYaxis()->SetLabelOffset(0.007);
   base__31->GetYaxis()->SetLabelSize(0.05);
   base__31->GetYaxis()->SetTitleSize(0.06);
   base__31->GetYaxis()->SetTitleOffset(0.9);
   base__31->GetYaxis()->SetTitleFont(42);
   base__31->GetZaxis()->SetLabelFont(42);
   base__31->GetZaxis()->SetLabelOffset(0.007);
   base__31->GetZaxis()->SetLabelSize(0.05);
   base__31->GetZaxis()->SetTitleSize(0.06);
   base__31->GetZaxis()->SetTitleFont(42);
   base__31->Draw("");
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
   
   TEfficiency * den_clone103 = new TEfficiency("den_clone","",25,1.6,2.4);
   
   den_clone103->SetConfidenceLevel(0.6826895);
   den_clone103->SetBetaAlpha(1);
   den_clone103->SetBetaBeta(1);
   den_clone103->SetWeight(1);
   den_clone103->SetStatisticOption(0);
   den_clone103->SetPosteriorMode(0);
   den_clone103->SetShortestInterval(0);
   den_clone103->SetTotalEvents(0,0);
   den_clone103->SetPassedEvents(0,0);
   den_clone103->SetTotalEvents(1,815);
   den_clone103->SetPassedEvents(1,722);
   den_clone103->SetTotalEvents(2,1938);
   den_clone103->SetPassedEvents(2,1861);
   den_clone103->SetTotalEvents(3,2262);
   den_clone103->SetPassedEvents(3,2250);
   den_clone103->SetTotalEvents(4,2057);
   den_clone103->SetPassedEvents(4,2047);
   den_clone103->SetTotalEvents(5,2257);
   den_clone103->SetPassedEvents(5,2247);
   den_clone103->SetTotalEvents(6,2038);
   den_clone103->SetPassedEvents(6,1991);
   den_clone103->SetTotalEvents(7,2180);
   den_clone103->SetPassedEvents(7,1975);
   den_clone103->SetTotalEvents(8,2318);
   den_clone103->SetPassedEvents(8,2160);
   den_clone103->SetTotalEvents(9,2116);
   den_clone103->SetPassedEvents(9,2108);
   den_clone103->SetTotalEvents(10,2256);
   den_clone103->SetPassedEvents(10,2245);
   den_clone103->SetTotalEvents(11,2269);
   den_clone103->SetPassedEvents(11,2260);
   den_clone103->SetTotalEvents(12,2195);
   den_clone103->SetPassedEvents(12,2183);
   den_clone103->SetTotalEvents(13,2180);
   den_clone103->SetPassedEvents(13,2160);
   den_clone103->SetTotalEvents(14,2109);
   den_clone103->SetPassedEvents(14,1861);
   den_clone103->SetTotalEvents(15,2089);
   den_clone103->SetPassedEvents(15,1823);
   den_clone103->SetTotalEvents(16,2216);
   den_clone103->SetPassedEvents(16,2174);
   den_clone103->SetTotalEvents(17,2214);
   den_clone103->SetPassedEvents(17,2202);
   den_clone103->SetTotalEvents(18,2194);
   den_clone103->SetPassedEvents(18,2179);
   den_clone103->SetTotalEvents(19,2250);
   den_clone103->SetPassedEvents(19,2232);
   den_clone103->SetTotalEvents(20,2188);
   den_clone103->SetPassedEvents(20,2170);
   den_clone103->SetTotalEvents(21,2154);
   den_clone103->SetPassedEvents(21,2122);
   den_clone103->SetTotalEvents(22,2232);
   den_clone103->SetPassedEvents(22,2196);
   den_clone103->SetTotalEvents(23,2234);
   den_clone103->SetPassedEvents(23,2202);
   den_clone103->SetTotalEvents(24,2084);
   den_clone103->SetPassedEvents(24,2054);
   den_clone103->SetTotalEvents(25,2196);
   den_clone103->SetPassedEvents(25,2168);
   den_clone103->SetTotalEvents(26,0);
   den_clone103->SetPassedEvents(26,0);
   den_clone103->SetFillColor(19);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#999999");
   den_clone103->SetLineColor(ci);
   den_clone103->SetLineWidth(2);

   ci = TColor::GetColor("#999999");
   den_clone103->SetMarkerColor(ci);
   den_clone103->SetMarkerStyle(23);
   den_clone103->Draw("same samep");
   
   TEfficiency * den_clone104 = new TEfficiency("den_clone","",25,1.6,2.4);
   
   den_clone104->SetConfidenceLevel(0.6826895);
   den_clone104->SetBetaAlpha(1);
   den_clone104->SetBetaBeta(1);
   den_clone104->SetWeight(1);
   den_clone104->SetStatisticOption(0);
   den_clone104->SetPosteriorMode(0);
   den_clone104->SetShortestInterval(0);
   den_clone104->SetTotalEvents(0,0);
   den_clone104->SetPassedEvents(0,0);
   den_clone104->SetTotalEvents(1,815);
   den_clone104->SetPassedEvents(1,722);
   den_clone104->SetTotalEvents(2,1938);
   den_clone104->SetPassedEvents(2,1861);
   den_clone104->SetTotalEvents(3,2262);
   den_clone104->SetPassedEvents(3,2254);
   den_clone104->SetTotalEvents(4,2057);
   den_clone104->SetPassedEvents(4,2049);
   den_clone104->SetTotalEvents(5,2257);
   den_clone104->SetPassedEvents(5,2245);
   den_clone104->SetTotalEvents(6,2038);
   den_clone104->SetPassedEvents(6,1960);
   den_clone104->SetTotalEvents(7,2180);
   den_clone104->SetPassedEvents(7,1823);
   den_clone104->SetTotalEvents(8,2318);
   den_clone104->SetPassedEvents(8,2083);
   den_clone104->SetTotalEvents(9,2116);
   den_clone104->SetPassedEvents(9,2112);
   den_clone104->SetTotalEvents(10,2256);
   den_clone104->SetPassedEvents(10,2252);
   den_clone104->SetTotalEvents(11,2269);
   den_clone104->SetPassedEvents(11,2263);
   den_clone104->SetTotalEvents(12,2195);
   den_clone104->SetPassedEvents(12,2184);
   den_clone104->SetTotalEvents(13,2180);
   den_clone104->SetPassedEvents(13,2168);
   den_clone104->SetTotalEvents(14,2109);
   den_clone104->SetPassedEvents(14,1791);
   den_clone104->SetTotalEvents(15,2089);
   den_clone104->SetPassedEvents(15,1741);
   den_clone104->SetTotalEvents(16,2216);
   den_clone104->SetPassedEvents(16,2170);
   den_clone104->SetTotalEvents(17,2214);
   den_clone104->SetPassedEvents(17,2210);
   den_clone104->SetTotalEvents(18,2194);
   den_clone104->SetPassedEvents(18,2189);
   den_clone104->SetTotalEvents(19,2250);
   den_clone104->SetPassedEvents(19,2242);
   den_clone104->SetTotalEvents(20,2188);
   den_clone104->SetPassedEvents(20,2183);
   den_clone104->SetTotalEvents(21,2154);
   den_clone104->SetPassedEvents(21,2151);
   den_clone104->SetTotalEvents(22,2232);
   den_clone104->SetPassedEvents(22,2227);
   den_clone104->SetTotalEvents(23,2234);
   den_clone104->SetPassedEvents(23,2231);
   den_clone104->SetTotalEvents(24,2084);
   den_clone104->SetPassedEvents(24,2079);
   den_clone104->SetTotalEvents(25,2196);
   den_clone104->SetPassedEvents(25,2186);
   den_clone104->SetTotalEvents(26,0);
   den_clone104->SetPassedEvents(26,0);
   den_clone104->SetFillColor(19);

   ci = TColor::GetColor("#ff0000");
   den_clone104->SetLineColor(ci);
   den_clone104->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   den_clone104->SetMarkerColor(ci);
   den_clone104->SetMarkerStyle(22);
   den_clone104->Draw("same samep");
   
   TEfficiency * den_clone105 = new TEfficiency("den_clone","",25,1.6,2.4);
   
   den_clone105->SetConfidenceLevel(0.6826895);
   den_clone105->SetBetaAlpha(1);
   den_clone105->SetBetaBeta(1);
   den_clone105->SetWeight(1);
   den_clone105->SetStatisticOption(0);
   den_clone105->SetPosteriorMode(0);
   den_clone105->SetShortestInterval(0);
   den_clone105->SetTotalEvents(0,0);
   den_clone105->SetPassedEvents(0,0);
   den_clone105->SetTotalEvents(1,815);
   den_clone105->SetPassedEvents(1,809);
   den_clone105->SetTotalEvents(2,1938);
   den_clone105->SetPassedEvents(2,1922);
   den_clone105->SetTotalEvents(3,2262);
   den_clone105->SetPassedEvents(3,2236);
   den_clone105->SetTotalEvents(4,2057);
   den_clone105->SetPassedEvents(4,2037);
   den_clone105->SetTotalEvents(5,2257);
   den_clone105->SetPassedEvents(5,2232);
   den_clone105->SetTotalEvents(6,2038);
   den_clone105->SetPassedEvents(6,2012);
   den_clone105->SetTotalEvents(7,2180);
   den_clone105->SetPassedEvents(7,2151);
   den_clone105->SetTotalEvents(8,2318);
   den_clone105->SetPassedEvents(8,2292);
   den_clone105->SetTotalEvents(9,2116);
   den_clone105->SetPassedEvents(9,2090);
   den_clone105->SetTotalEvents(10,2256);
   den_clone105->SetPassedEvents(10,2237);
   den_clone105->SetTotalEvents(11,2269);
   den_clone105->SetPassedEvents(11,2249);
   den_clone105->SetTotalEvents(12,2195);
   den_clone105->SetPassedEvents(12,2168);
   den_clone105->SetTotalEvents(13,2180);
   den_clone105->SetPassedEvents(13,2164);
   den_clone105->SetTotalEvents(14,2109);
   den_clone105->SetPassedEvents(14,2079);
   den_clone105->SetTotalEvents(15,2089);
   den_clone105->SetPassedEvents(15,2069);
   den_clone105->SetTotalEvents(16,2216);
   den_clone105->SetPassedEvents(16,2195);
   den_clone105->SetTotalEvents(17,2214);
   den_clone105->SetPassedEvents(17,2196);
   den_clone105->SetTotalEvents(18,2194);
   den_clone105->SetPassedEvents(18,2170);
   den_clone105->SetTotalEvents(19,2250);
   den_clone105->SetPassedEvents(19,2225);
   den_clone105->SetTotalEvents(20,2188);
   den_clone105->SetPassedEvents(20,2169);
   den_clone105->SetTotalEvents(21,2154);
   den_clone105->SetPassedEvents(21,2130);
   den_clone105->SetTotalEvents(22,2232);
   den_clone105->SetPassedEvents(22,2202);
   den_clone105->SetTotalEvents(23,2234);
   den_clone105->SetPassedEvents(23,2205);
   den_clone105->SetTotalEvents(24,2084);
   den_clone105->SetPassedEvents(24,2062);
   den_clone105->SetTotalEvents(25,2196);
   den_clone105->SetPassedEvents(25,2177);
   den_clone105->SetTotalEvents(26,0);
   den_clone105->SetPassedEvents(26,0);
   den_clone105->SetFillColor(19);

   ci = TColor::GetColor("#0000ff");
   den_clone105->SetLineColor(ci);
   den_clone105->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   den_clone105->SetMarkerColor(ci);
   den_clone105->SetMarkerStyle(21);
   den_clone105->Draw("same samep");
   
   TEfficiency * den_clone106 = new TEfficiency("den_clone","",25,1.6,2.4);
   
   den_clone106->SetConfidenceLevel(0.6826895);
   den_clone106->SetBetaAlpha(1);
   den_clone106->SetBetaBeta(1);
   den_clone106->SetWeight(1);
   den_clone106->SetStatisticOption(0);
   den_clone106->SetPosteriorMode(0);
   den_clone106->SetShortestInterval(0);
   den_clone106->SetTotalEvents(0,0);
   den_clone106->SetPassedEvents(0,0);
   den_clone106->SetTotalEvents(1,288);
   den_clone106->SetPassedEvents(1,284);
   den_clone106->SetTotalEvents(2,688);
   den_clone106->SetPassedEvents(2,677);
   den_clone106->SetTotalEvents(3,852);
   den_clone106->SetPassedEvents(3,842);
   den_clone106->SetTotalEvents(4,777);
   den_clone106->SetPassedEvents(4,767);
   den_clone106->SetTotalEvents(5,792);
   den_clone106->SetPassedEvents(5,781);
   den_clone106->SetTotalEvents(6,784);
   den_clone106->SetPassedEvents(6,768);
   den_clone106->SetTotalEvents(7,878);
   den_clone106->SetPassedEvents(7,860);
   den_clone106->SetTotalEvents(8,847);
   den_clone106->SetPassedEvents(8,837);
   den_clone106->SetTotalEvents(9,761);
   den_clone106->SetPassedEvents(9,755);
   den_clone106->SetTotalEvents(10,760);
   den_clone106->SetPassedEvents(10,752);
   den_clone106->SetTotalEvents(11,774);
   den_clone106->SetPassedEvents(11,770);
   den_clone106->SetTotalEvents(12,785);
   den_clone106->SetPassedEvents(12,773);
   den_clone106->SetTotalEvents(13,796);
   den_clone106->SetPassedEvents(13,788);
   den_clone106->SetTotalEvents(14,724);
   den_clone106->SetPassedEvents(14,718);
   den_clone106->SetTotalEvents(15,723);
   den_clone106->SetPassedEvents(15,713);
   den_clone106->SetTotalEvents(16,782);
   den_clone106->SetPassedEvents(16,776);
   den_clone106->SetTotalEvents(17,788);
   den_clone106->SetPassedEvents(17,782);
   den_clone106->SetTotalEvents(18,768);
   den_clone106->SetPassedEvents(18,765);
   den_clone106->SetTotalEvents(19,816);
   den_clone106->SetPassedEvents(19,804);
   den_clone106->SetTotalEvents(20,795);
   den_clone106->SetPassedEvents(20,790);
   den_clone106->SetTotalEvents(21,752);
   den_clone106->SetPassedEvents(21,741);
   den_clone106->SetTotalEvents(22,863);
   den_clone106->SetPassedEvents(22,850);
   den_clone106->SetTotalEvents(23,740);
   den_clone106->SetPassedEvents(23,727);
   den_clone106->SetTotalEvents(24,856);
   den_clone106->SetPassedEvents(24,845);
   den_clone106->SetTotalEvents(25,733);
   den_clone106->SetPassedEvents(25,727);
   den_clone106->SetTotalEvents(26,0);
   den_clone106->SetPassedEvents(26,0);
   den_clone106->SetFillColor(19);
   den_clone106->SetLineWidth(2);
   den_clone106->SetMarkerStyle(24);
   den_clone106->Draw("same samep");
   
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
   leg->Draw();
   TText *text = new TText(0.17,0.17,"ME2/1");
   text->SetNDC();
   text->Draw();
   text = new TText(0.17,0.24,"ALCT");
   text->SetNDC();
   text->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
