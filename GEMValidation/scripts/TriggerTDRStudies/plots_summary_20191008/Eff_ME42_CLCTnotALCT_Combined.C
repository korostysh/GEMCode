void Eff_ME42_CLCTnotALCT_Combined()
{
//=========Macro generated from canvas: c/c
//=========  (Wed Oct  9 14:55:18 2019) by ROOT version 6.14/09
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   c->SetHighLightColor(2);
   c->Range(1,-0.15375,1.833333,1.1275);
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
   
   TH1F *base__74 = new TH1F("base__74","",25,1.1,1.8);
   base__74->SetMinimum(0);
   base__74->SetMaximum(1.025);
   base__74->SetLineStyle(0);
   base__74->SetMarkerStyle(20);
   base__74->GetXaxis()->SetTitle("True muon |#eta|");
   base__74->GetXaxis()->SetLabelFont(42);
   base__74->GetXaxis()->SetLabelOffset(0.007);
   base__74->GetXaxis()->SetLabelSize(0.05);
   base__74->GetXaxis()->SetTitleSize(0.06);
   base__74->GetXaxis()->SetTitleOffset(0.9);
   base__74->GetXaxis()->SetTitleFont(42);
   base__74->GetYaxis()->SetTitle("Efficiency");
   base__74->GetYaxis()->SetLabelFont(42);
   base__74->GetYaxis()->SetLabelOffset(0.007);
   base__74->GetYaxis()->SetLabelSize(0.05);
   base__74->GetYaxis()->SetTitleSize(0.06);
   base__74->GetYaxis()->SetTitleOffset(0.9);
   base__74->GetYaxis()->SetTitleFont(42);
   base__74->GetZaxis()->SetLabelFont(42);
   base__74->GetZaxis()->SetLabelOffset(0.007);
   base__74->GetZaxis()->SetLabelSize(0.05);
   base__74->GetZaxis()->SetTitleSize(0.06);
   base__74->GetZaxis()->SetTitleFont(42);
   base__74->Draw("");
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
   
   TEfficiency * den_clone293 = new TEfficiency("den_clone","",25,1.1,1.8);
   
   den_clone293->SetConfidenceLevel(0.6826895);
   den_clone293->SetBetaAlpha(1);
   den_clone293->SetBetaBeta(1);
   den_clone293->SetWeight(1);
   den_clone293->SetStatisticOption(0);
   den_clone293->SetPosteriorMode(0);
   den_clone293->SetShortestInterval(0);
   den_clone293->SetTotalEvents(0,0);
   den_clone293->SetPassedEvents(0,0);
   den_clone293->SetTotalEvents(1,15);
   den_clone293->SetPassedEvents(1,0);
   den_clone293->SetTotalEvents(2,49);
   den_clone293->SetPassedEvents(2,0);
   den_clone293->SetTotalEvents(3,365);
   den_clone293->SetPassedEvents(3,0);
   den_clone293->SetTotalEvents(4,1528);
   den_clone293->SetPassedEvents(4,0);
   den_clone293->SetTotalEvents(5,1998);
   den_clone293->SetPassedEvents(5,0);
   den_clone293->SetTotalEvents(6,1867);
   den_clone293->SetPassedEvents(6,0);
   den_clone293->SetTotalEvents(7,1882);
   den_clone293->SetPassedEvents(7,0);
   den_clone293->SetTotalEvents(8,2038);
   den_clone293->SetPassedEvents(8,0);
   den_clone293->SetTotalEvents(9,1957);
   den_clone293->SetPassedEvents(9,0);
   den_clone293->SetTotalEvents(10,1907);
   den_clone293->SetPassedEvents(10,1);
   den_clone293->SetTotalEvents(11,1928);
   den_clone293->SetPassedEvents(11,0);
   den_clone293->SetTotalEvents(12,1994);
   den_clone293->SetPassedEvents(12,0);
   den_clone293->SetTotalEvents(13,1910);
   den_clone293->SetPassedEvents(13,0);
   den_clone293->SetTotalEvents(14,1837);
   den_clone293->SetPassedEvents(14,0);
   den_clone293->SetTotalEvents(15,1967);
   den_clone293->SetPassedEvents(15,0);
   den_clone293->SetTotalEvents(16,1864);
   den_clone293->SetPassedEvents(16,0);
   den_clone293->SetTotalEvents(17,1753);
   den_clone293->SetPassedEvents(17,0);
   den_clone293->SetTotalEvents(18,1982);
   den_clone293->SetPassedEvents(18,1);
   den_clone293->SetTotalEvents(19,1802);
   den_clone293->SetPassedEvents(19,0);
   den_clone293->SetTotalEvents(20,1925);
   den_clone293->SetPassedEvents(20,0);
   den_clone293->SetTotalEvents(21,1900);
   den_clone293->SetPassedEvents(21,0);
   den_clone293->SetTotalEvents(22,1946);
   den_clone293->SetPassedEvents(22,0);
   den_clone293->SetTotalEvents(23,1858);
   den_clone293->SetPassedEvents(23,0);
   den_clone293->SetTotalEvents(24,939);
   den_clone293->SetPassedEvents(24,0);
   den_clone293->SetTotalEvents(25,32);
   den_clone293->SetPassedEvents(25,0);
   den_clone293->SetTotalEvents(26,0);
   den_clone293->SetPassedEvents(26,0);
   den_clone293->SetFillColor(19);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ff0000");
   den_clone293->SetLineColor(ci);
   den_clone293->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   den_clone293->SetMarkerColor(ci);
   den_clone293->SetMarkerStyle(22);
   den_clone293->Draw("same samep");
   
   TEfficiency * den_clone294 = new TEfficiency("den_clone","",25,1.1,1.8);
   
   den_clone294->SetConfidenceLevel(0.6826895);
   den_clone294->SetBetaAlpha(1);
   den_clone294->SetBetaBeta(1);
   den_clone294->SetWeight(1);
   den_clone294->SetStatisticOption(0);
   den_clone294->SetPosteriorMode(0);
   den_clone294->SetShortestInterval(0);
   den_clone294->SetTotalEvents(0,0);
   den_clone294->SetPassedEvents(0,0);
   den_clone294->SetTotalEvents(1,12);
   den_clone294->SetPassedEvents(1,0);
   den_clone294->SetTotalEvents(2,33);
   den_clone294->SetPassedEvents(2,0);
   den_clone294->SetTotalEvents(3,378);
   den_clone294->SetPassedEvents(3,0);
   den_clone294->SetTotalEvents(4,1482);
   den_clone294->SetPassedEvents(4,0);
   den_clone294->SetTotalEvents(5,1960);
   den_clone294->SetPassedEvents(5,0);
   den_clone294->SetTotalEvents(6,1946);
   den_clone294->SetPassedEvents(6,1);
   den_clone294->SetTotalEvents(7,2014);
   den_clone294->SetPassedEvents(7,0);
   den_clone294->SetTotalEvents(8,1984);
   den_clone294->SetPassedEvents(8,0);
   den_clone294->SetTotalEvents(9,1927);
   den_clone294->SetPassedEvents(9,1);
   den_clone294->SetTotalEvents(10,1815);
   den_clone294->SetPassedEvents(10,0);
   den_clone294->SetTotalEvents(11,2052);
   den_clone294->SetPassedEvents(11,0);
   den_clone294->SetTotalEvents(12,1874);
   den_clone294->SetPassedEvents(12,1);
   den_clone294->SetTotalEvents(13,1997);
   den_clone294->SetPassedEvents(13,1);
   den_clone294->SetTotalEvents(14,1964);
   den_clone294->SetPassedEvents(14,0);
   den_clone294->SetTotalEvents(15,1853);
   den_clone294->SetPassedEvents(15,0);
   den_clone294->SetTotalEvents(16,2061);
   den_clone294->SetPassedEvents(16,0);
   den_clone294->SetTotalEvents(17,1946);
   den_clone294->SetPassedEvents(17,0);
   den_clone294->SetTotalEvents(18,1899);
   den_clone294->SetPassedEvents(18,0);
   den_clone294->SetTotalEvents(19,1921);
   den_clone294->SetPassedEvents(19,0);
   den_clone294->SetTotalEvents(20,1951);
   den_clone294->SetPassedEvents(20,0);
   den_clone294->SetTotalEvents(21,1903);
   den_clone294->SetPassedEvents(21,0);
   den_clone294->SetTotalEvents(22,1814);
   den_clone294->SetPassedEvents(22,1);
   den_clone294->SetTotalEvents(23,1798);
   den_clone294->SetPassedEvents(23,0);
   den_clone294->SetTotalEvents(24,977);
   den_clone294->SetPassedEvents(24,0);
   den_clone294->SetTotalEvents(25,35);
   den_clone294->SetPassedEvents(25,0);
   den_clone294->SetTotalEvents(26,0);
   den_clone294->SetPassedEvents(26,0);
   den_clone294->SetFillColor(19);

   ci = TColor::GetColor("#0000ff");
   den_clone294->SetLineColor(ci);
   den_clone294->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   den_clone294->SetMarkerColor(ci);
   den_clone294->SetMarkerStyle(21);
   den_clone294->Draw("same samep");
   
   TEfficiency * den_clone295 = new TEfficiency("den_clone","",25,1.1,1.8);
   
   den_clone295->SetConfidenceLevel(0.6826895);
   den_clone295->SetBetaAlpha(1);
   den_clone295->SetBetaBeta(1);
   den_clone295->SetWeight(1);
   den_clone295->SetStatisticOption(0);
   den_clone295->SetPosteriorMode(0);
   den_clone295->SetShortestInterval(0);
   den_clone295->SetTotalEvents(0,0);
   den_clone295->SetPassedEvents(0,0);
   den_clone295->SetTotalEvents(1,12);
   den_clone295->SetPassedEvents(1,0);
   den_clone295->SetTotalEvents(2,33);
   den_clone295->SetPassedEvents(2,0);
   den_clone295->SetTotalEvents(3,378);
   den_clone295->SetPassedEvents(3,0);
   den_clone295->SetTotalEvents(4,1482);
   den_clone295->SetPassedEvents(4,0);
   den_clone295->SetTotalEvents(5,1960);
   den_clone295->SetPassedEvents(5,0);
   den_clone295->SetTotalEvents(6,1946);
   den_clone295->SetPassedEvents(6,1);
   den_clone295->SetTotalEvents(7,2014);
   den_clone295->SetPassedEvents(7,0);
   den_clone295->SetTotalEvents(8,1984);
   den_clone295->SetPassedEvents(8,0);
   den_clone295->SetTotalEvents(9,1927);
   den_clone295->SetPassedEvents(9,1);
   den_clone295->SetTotalEvents(10,1815);
   den_clone295->SetPassedEvents(10,0);
   den_clone295->SetTotalEvents(11,2052);
   den_clone295->SetPassedEvents(11,0);
   den_clone295->SetTotalEvents(12,1874);
   den_clone295->SetPassedEvents(12,1);
   den_clone295->SetTotalEvents(13,1997);
   den_clone295->SetPassedEvents(13,1);
   den_clone295->SetTotalEvents(14,1964);
   den_clone295->SetPassedEvents(14,0);
   den_clone295->SetTotalEvents(15,1853);
   den_clone295->SetPassedEvents(15,0);
   den_clone295->SetTotalEvents(16,2061);
   den_clone295->SetPassedEvents(16,0);
   den_clone295->SetTotalEvents(17,1946);
   den_clone295->SetPassedEvents(17,0);
   den_clone295->SetTotalEvents(18,1899);
   den_clone295->SetPassedEvents(18,0);
   den_clone295->SetTotalEvents(19,1921);
   den_clone295->SetPassedEvents(19,0);
   den_clone295->SetTotalEvents(20,1951);
   den_clone295->SetPassedEvents(20,0);
   den_clone295->SetTotalEvents(21,1903);
   den_clone295->SetPassedEvents(21,0);
   den_clone295->SetTotalEvents(22,1814);
   den_clone295->SetPassedEvents(22,1);
   den_clone295->SetTotalEvents(23,1798);
   den_clone295->SetPassedEvents(23,0);
   den_clone295->SetTotalEvents(24,977);
   den_clone295->SetPassedEvents(24,0);
   den_clone295->SetTotalEvents(25,35);
   den_clone295->SetPassedEvents(25,0);
   den_clone295->SetTotalEvents(26,0);
   den_clone295->SetPassedEvents(26,0);
   den_clone295->SetFillColor(19);
   den_clone295->SetLineWidth(2);
   den_clone295->SetMarkerStyle(23);
   den_clone295->Draw("same samep");
   
   TEfficiency * den_clone296 = new TEfficiency("den_clone","",25,1.1,1.8);
   
   den_clone296->SetConfidenceLevel(0.6826895);
   den_clone296->SetBetaAlpha(1);
   den_clone296->SetBetaBeta(1);
   den_clone296->SetWeight(1);
   den_clone296->SetStatisticOption(0);
   den_clone296->SetPosteriorMode(0);
   den_clone296->SetShortestInterval(0);
   den_clone296->SetTotalEvents(0,0);
   den_clone296->SetPassedEvents(0,0);
   den_clone296->SetTotalEvents(1,6);
   den_clone296->SetPassedEvents(1,0);
   den_clone296->SetTotalEvents(2,15);
   den_clone296->SetPassedEvents(2,0);
   den_clone296->SetTotalEvents(3,109);
   den_clone296->SetPassedEvents(3,0);
   den_clone296->SetTotalEvents(4,463);
   den_clone296->SetPassedEvents(4,0);
   den_clone296->SetTotalEvents(5,686);
   den_clone296->SetPassedEvents(5,0);
   den_clone296->SetTotalEvents(6,715);
   den_clone296->SetPassedEvents(6,0);
   den_clone296->SetTotalEvents(7,735);
   den_clone296->SetPassedEvents(7,0);
   den_clone296->SetTotalEvents(8,700);
   den_clone296->SetPassedEvents(8,0);
   den_clone296->SetTotalEvents(9,621);
   den_clone296->SetPassedEvents(9,1);
   den_clone296->SetTotalEvents(10,650);
   den_clone296->SetPassedEvents(10,0);
   den_clone296->SetTotalEvents(11,679);
   den_clone296->SetPassedEvents(11,0);
   den_clone296->SetTotalEvents(12,748);
   den_clone296->SetPassedEvents(12,0);
   den_clone296->SetTotalEvents(13,695);
   den_clone296->SetPassedEvents(13,0);
   den_clone296->SetTotalEvents(14,649);
   den_clone296->SetPassedEvents(14,0);
   den_clone296->SetTotalEvents(15,656);
   den_clone296->SetPassedEvents(15,0);
   den_clone296->SetTotalEvents(16,670);
   den_clone296->SetPassedEvents(16,0);
   den_clone296->SetTotalEvents(17,738);
   den_clone296->SetPassedEvents(17,0);
   den_clone296->SetTotalEvents(18,695);
   den_clone296->SetPassedEvents(18,0);
   den_clone296->SetTotalEvents(19,669);
   den_clone296->SetPassedEvents(19,0);
   den_clone296->SetTotalEvents(20,690);
   den_clone296->SetPassedEvents(20,0);
   den_clone296->SetTotalEvents(21,682);
   den_clone296->SetPassedEvents(21,1);
   den_clone296->SetTotalEvents(22,708);
   den_clone296->SetPassedEvents(22,0);
   den_clone296->SetTotalEvents(23,694);
   den_clone296->SetPassedEvents(23,0);
   den_clone296->SetTotalEvents(24,315);
   den_clone296->SetPassedEvents(24,0);
   den_clone296->SetTotalEvents(25,6);
   den_clone296->SetPassedEvents(25,0);
   den_clone296->SetTotalEvents(26,0);
   den_clone296->SetPassedEvents(26,0);
   den_clone296->SetFillColor(19);

   ci = TColor::GetColor("#00cc00");
   den_clone296->SetLineColor(ci);
   den_clone296->SetLineWidth(2);

   ci = TColor::GetColor("#00cc00");
   den_clone296->SetMarkerColor(ci);
   den_clone296->SetMarkerStyle(23);
   den_clone296->Draw("same samep");
   
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
   TText *text = new TText(0.17,0.17,"ME4/2");
   text->SetNDC();
   text->Draw();
   text = new TText(0.17,0.24,"CLCTnotALCT");
   text->SetNDC();
   text->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
