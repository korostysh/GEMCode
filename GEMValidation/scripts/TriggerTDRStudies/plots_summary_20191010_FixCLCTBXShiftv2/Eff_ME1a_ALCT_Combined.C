void Eff_ME1a_ALCT_Combined()
{
//=========Macro generated from canvas: c/c
//=========  (Fri Oct 11 07:49:56 2019) by ROOT version 6.14/09
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   c->SetHighLightColor(2);
   c->Range(2.057143,0.42125,2.414286,1.0775);
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
   
   TH1F *base__17 = new TH1F("base__17","",25,2.1,2.4);
   base__17->SetMinimum(0.5);
   base__17->SetMaximum(1.025);
   base__17->SetLineStyle(0);
   base__17->SetMarkerStyle(20);
   base__17->GetXaxis()->SetTitle("True muon |#eta|");
   base__17->GetXaxis()->SetLabelFont(42);
   base__17->GetXaxis()->SetLabelOffset(0.007);
   base__17->GetXaxis()->SetLabelSize(0.05);
   base__17->GetXaxis()->SetTitleSize(0.06);
   base__17->GetXaxis()->SetTitleOffset(0.9);
   base__17->GetXaxis()->SetTitleFont(42);
   base__17->GetYaxis()->SetTitle("Efficiency");
   base__17->GetYaxis()->SetLabelFont(42);
   base__17->GetYaxis()->SetLabelOffset(0.007);
   base__17->GetYaxis()->SetLabelSize(0.05);
   base__17->GetYaxis()->SetTitleSize(0.06);
   base__17->GetYaxis()->SetTitleOffset(0.9);
   base__17->GetYaxis()->SetTitleFont(42);
   base__17->GetZaxis()->SetLabelFont(42);
   base__17->GetZaxis()->SetLabelOffset(0.007);
   base__17->GetZaxis()->SetLabelSize(0.05);
   base__17->GetZaxis()->SetTitleSize(0.06);
   base__17->GetZaxis()->SetTitleFont(42);
   base__17->Draw("");
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
   
   TEfficiency * den_clone61 = new TEfficiency("den_clone","",25,2.1,2.4);
   
   den_clone61->SetConfidenceLevel(0.6826895);
   den_clone61->SetBetaAlpha(1);
   den_clone61->SetBetaBeta(1);
   den_clone61->SetWeight(1);
   den_clone61->SetStatisticOption(0);
   den_clone61->SetPosteriorMode(0);
   den_clone61->SetShortestInterval(0);
   den_clone61->SetTotalEvents(0,0);
   den_clone61->SetPassedEvents(0,0);
   den_clone61->SetTotalEvents(1,497);
   den_clone61->SetPassedEvents(1,479);
   den_clone61->SetTotalEvents(2,714);
   den_clone61->SetPassedEvents(2,685);
   den_clone61->SetTotalEvents(3,880);
   den_clone61->SetPassedEvents(3,878);
   den_clone61->SetTotalEvents(4,843);
   den_clone61->SetPassedEvents(4,842);
   den_clone61->SetTotalEvents(5,858);
   den_clone61->SetPassedEvents(5,858);
   den_clone61->SetTotalEvents(6,854);
   den_clone61->SetPassedEvents(6,853);
   den_clone61->SetTotalEvents(7,837);
   den_clone61->SetPassedEvents(7,835);
   den_clone61->SetTotalEvents(8,861);
   den_clone61->SetPassedEvents(8,860);
   den_clone61->SetTotalEvents(9,766);
   den_clone61->SetPassedEvents(9,762);
   den_clone61->SetTotalEvents(10,879);
   den_clone61->SetPassedEvents(10,878);
   den_clone61->SetTotalEvents(11,845);
   den_clone61->SetPassedEvents(11,842);
   den_clone61->SetTotalEvents(12,864);
   den_clone61->SetPassedEvents(12,862);
   den_clone61->SetTotalEvents(13,869);
   den_clone61->SetPassedEvents(13,869);
   den_clone61->SetTotalEvents(14,852);
   den_clone61->SetPassedEvents(14,851);
   den_clone61->SetTotalEvents(15,823);
   den_clone61->SetPassedEvents(15,822);
   den_clone61->SetTotalEvents(16,777);
   den_clone61->SetPassedEvents(16,777);
   den_clone61->SetTotalEvents(17,827);
   den_clone61->SetPassedEvents(17,826);
   den_clone61->SetTotalEvents(18,860);
   den_clone61->SetPassedEvents(18,860);
   den_clone61->SetTotalEvents(19,884);
   den_clone61->SetPassedEvents(19,882);
   den_clone61->SetTotalEvents(20,844);
   den_clone61->SetPassedEvents(20,843);
   den_clone61->SetTotalEvents(21,845);
   den_clone61->SetPassedEvents(21,844);
   den_clone61->SetTotalEvents(22,771);
   den_clone61->SetPassedEvents(22,771);
   den_clone61->SetTotalEvents(23,885);
   den_clone61->SetPassedEvents(23,884);
   den_clone61->SetTotalEvents(24,859);
   den_clone61->SetPassedEvents(24,853);
   den_clone61->SetTotalEvents(25,744);
   den_clone61->SetPassedEvents(25,716);
   den_clone61->SetTotalEvents(26,0);
   den_clone61->SetPassedEvents(26,0);
   den_clone61->SetFillColor(19);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ff0000");
   den_clone61->SetLineColor(ci);
   den_clone61->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   den_clone61->SetMarkerColor(ci);
   den_clone61->SetMarkerStyle(22);
   den_clone61->Draw("same samep");
   
   TEfficiency * den_clone62 = new TEfficiency("den_clone","",25,2.1,2.4);
   
   den_clone62->SetConfidenceLevel(0.6826895);
   den_clone62->SetBetaAlpha(1);
   den_clone62->SetBetaBeta(1);
   den_clone62->SetWeight(1);
   den_clone62->SetStatisticOption(0);
   den_clone62->SetPosteriorMode(0);
   den_clone62->SetShortestInterval(0);
   den_clone62->SetTotalEvents(0,0);
   den_clone62->SetPassedEvents(0,0);
   den_clone62->SetTotalEvents(1,533);
   den_clone62->SetPassedEvents(1,510);
   den_clone62->SetTotalEvents(2,781);
   den_clone62->SetPassedEvents(2,742);
   den_clone62->SetTotalEvents(3,835);
   den_clone62->SetPassedEvents(3,802);
   den_clone62->SetTotalEvents(4,749);
   den_clone62->SetPassedEvents(4,723);
   den_clone62->SetTotalEvents(5,811);
   den_clone62->SetPassedEvents(5,785);
   den_clone62->SetTotalEvents(6,841);
   den_clone62->SetPassedEvents(6,813);
   den_clone62->SetTotalEvents(7,848);
   den_clone62->SetPassedEvents(7,826);
   den_clone62->SetTotalEvents(8,876);
   den_clone62->SetPassedEvents(8,855);
   den_clone62->SetTotalEvents(9,842);
   den_clone62->SetPassedEvents(9,814);
   den_clone62->SetTotalEvents(10,790);
   den_clone62->SetPassedEvents(10,754);
   den_clone62->SetTotalEvents(11,811);
   den_clone62->SetPassedEvents(11,779);
   den_clone62->SetTotalEvents(12,830);
   den_clone62->SetPassedEvents(12,794);
   den_clone62->SetTotalEvents(13,795);
   den_clone62->SetPassedEvents(13,757);
   den_clone62->SetTotalEvents(14,811);
   den_clone62->SetPassedEvents(14,773);
   den_clone62->SetTotalEvents(15,862);
   den_clone62->SetPassedEvents(15,824);
   den_clone62->SetTotalEvents(16,848);
   den_clone62->SetPassedEvents(16,813);
   den_clone62->SetTotalEvents(17,824);
   den_clone62->SetPassedEvents(17,783);
   den_clone62->SetTotalEvents(18,816);
   den_clone62->SetPassedEvents(18,768);
   den_clone62->SetTotalEvents(19,859);
   den_clone62->SetPassedEvents(19,803);
   den_clone62->SetTotalEvents(20,800);
   den_clone62->SetPassedEvents(20,749);
   den_clone62->SetTotalEvents(21,807);
   den_clone62->SetPassedEvents(21,754);
   den_clone62->SetTotalEvents(22,772);
   den_clone62->SetPassedEvents(22,728);
   den_clone62->SetTotalEvents(23,833);
   den_clone62->SetPassedEvents(23,795);
   den_clone62->SetTotalEvents(24,756);
   den_clone62->SetPassedEvents(24,719);
   den_clone62->SetTotalEvents(25,840);
   den_clone62->SetPassedEvents(25,755);
   den_clone62->SetTotalEvents(26,0);
   den_clone62->SetPassedEvents(26,0);
   den_clone62->SetFillColor(19);

   ci = TColor::GetColor("#0000ff");
   den_clone62->SetLineColor(ci);
   den_clone62->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   den_clone62->SetMarkerColor(ci);
   den_clone62->SetMarkerStyle(21);
   den_clone62->Draw("same samep");
   
   TEfficiency * den_clone63 = new TEfficiency("den_clone","",25,2.1,2.4);
   
   den_clone63->SetConfidenceLevel(0.6826895);
   den_clone63->SetBetaAlpha(1);
   den_clone63->SetBetaBeta(1);
   den_clone63->SetWeight(1);
   den_clone63->SetStatisticOption(0);
   den_clone63->SetPosteriorMode(0);
   den_clone63->SetShortestInterval(0);
   den_clone63->SetTotalEvents(0,0);
   den_clone63->SetPassedEvents(0,0);
   den_clone63->SetTotalEvents(1,533);
   den_clone63->SetPassedEvents(1,523);
   den_clone63->SetTotalEvents(2,781);
   den_clone63->SetPassedEvents(2,771);
   den_clone63->SetTotalEvents(3,835);
   den_clone63->SetPassedEvents(3,830);
   den_clone63->SetTotalEvents(4,749);
   den_clone63->SetPassedEvents(4,743);
   den_clone63->SetTotalEvents(5,811);
   den_clone63->SetPassedEvents(5,809);
   den_clone63->SetTotalEvents(6,841);
   den_clone63->SetPassedEvents(6,837);
   den_clone63->SetTotalEvents(7,848);
   den_clone63->SetPassedEvents(7,844);
   den_clone63->SetTotalEvents(8,876);
   den_clone63->SetPassedEvents(8,875);
   den_clone63->SetTotalEvents(9,842);
   den_clone63->SetPassedEvents(9,836);
   den_clone63->SetTotalEvents(10,790);
   den_clone63->SetPassedEvents(10,780);
   den_clone63->SetTotalEvents(11,811);
   den_clone63->SetPassedEvents(11,803);
   den_clone63->SetTotalEvents(12,830);
   den_clone63->SetPassedEvents(12,827);
   den_clone63->SetTotalEvents(13,795);
   den_clone63->SetPassedEvents(13,792);
   den_clone63->SetTotalEvents(14,811);
   den_clone63->SetPassedEvents(14,804);
   den_clone63->SetTotalEvents(15,862);
   den_clone63->SetPassedEvents(15,855);
   den_clone63->SetTotalEvents(16,848);
   den_clone63->SetPassedEvents(16,843);
   den_clone63->SetTotalEvents(17,824);
   den_clone63->SetPassedEvents(17,817);
   den_clone63->SetTotalEvents(18,816);
   den_clone63->SetPassedEvents(18,809);
   den_clone63->SetTotalEvents(19,859);
   den_clone63->SetPassedEvents(19,847);
   den_clone63->SetTotalEvents(20,800);
   den_clone63->SetPassedEvents(20,793);
   den_clone63->SetTotalEvents(21,807);
   den_clone63->SetPassedEvents(21,800);
   den_clone63->SetTotalEvents(22,772);
   den_clone63->SetPassedEvents(22,766);
   den_clone63->SetTotalEvents(23,833);
   den_clone63->SetPassedEvents(23,827);
   den_clone63->SetTotalEvents(24,756);
   den_clone63->SetPassedEvents(24,751);
   den_clone63->SetTotalEvents(25,840);
   den_clone63->SetPassedEvents(25,784);
   den_clone63->SetTotalEvents(26,0);
   den_clone63->SetPassedEvents(26,0);
   den_clone63->SetFillColor(19);
   den_clone63->SetLineWidth(2);
   den_clone63->SetMarkerStyle(23);
   den_clone63->Draw("same samep");
   
   TEfficiency * den_clone64 = new TEfficiency("den_clone","",25,2.1,2.4);
   
   den_clone64->SetConfidenceLevel(0.6826895);
   den_clone64->SetBetaAlpha(1);
   den_clone64->SetBetaBeta(1);
   den_clone64->SetWeight(1);
   den_clone64->SetStatisticOption(0);
   den_clone64->SetPosteriorMode(0);
   den_clone64->SetShortestInterval(0);
   den_clone64->SetTotalEvents(0,0);
   den_clone64->SetPassedEvents(0,0);
   den_clone64->SetTotalEvents(1,176);
   den_clone64->SetPassedEvents(1,173);
   den_clone64->SetTotalEvents(2,278);
   den_clone64->SetPassedEvents(2,272);
   den_clone64->SetTotalEvents(3,292);
   den_clone64->SetPassedEvents(3,289);
   den_clone64->SetTotalEvents(4,274);
   den_clone64->SetPassedEvents(4,272);
   den_clone64->SetTotalEvents(5,303);
   den_clone64->SetPassedEvents(5,301);
   den_clone64->SetTotalEvents(6,276);
   den_clone64->SetPassedEvents(6,272);
   den_clone64->SetTotalEvents(7,286);
   den_clone64->SetPassedEvents(7,285);
   den_clone64->SetTotalEvents(8,294);
   den_clone64->SetPassedEvents(8,293);
   den_clone64->SetTotalEvents(9,332);
   den_clone64->SetPassedEvents(9,331);
   den_clone64->SetTotalEvents(10,313);
   den_clone64->SetPassedEvents(10,311);
   den_clone64->SetTotalEvents(11,310);
   den_clone64->SetPassedEvents(11,307);
   den_clone64->SetTotalEvents(12,258);
   den_clone64->SetPassedEvents(12,255);
   den_clone64->SetTotalEvents(13,292);
   den_clone64->SetPassedEvents(13,292);
   den_clone64->SetTotalEvents(14,292);
   den_clone64->SetPassedEvents(14,289);
   den_clone64->SetTotalEvents(15,280);
   den_clone64->SetPassedEvents(15,275);
   den_clone64->SetTotalEvents(16,309);
   den_clone64->SetPassedEvents(16,306);
   den_clone64->SetTotalEvents(17,355);
   den_clone64->SetPassedEvents(17,354);
   den_clone64->SetTotalEvents(18,288);
   den_clone64->SetPassedEvents(18,284);
   den_clone64->SetTotalEvents(19,254);
   den_clone64->SetPassedEvents(19,253);
   den_clone64->SetTotalEvents(20,311);
   den_clone64->SetPassedEvents(20,307);
   den_clone64->SetTotalEvents(21,330);
   den_clone64->SetPassedEvents(21,329);
   den_clone64->SetTotalEvents(22,316);
   den_clone64->SetPassedEvents(22,313);
   den_clone64->SetTotalEvents(23,283);
   den_clone64->SetPassedEvents(23,278);
   den_clone64->SetTotalEvents(24,297);
   den_clone64->SetPassedEvents(24,293);
   den_clone64->SetTotalEvents(25,227);
   den_clone64->SetPassedEvents(25,220);
   den_clone64->SetTotalEvents(26,0);
   den_clone64->SetPassedEvents(26,0);
   den_clone64->SetFillColor(19);

   ci = TColor::GetColor("#00cc00");
   den_clone64->SetLineColor(ci);
   den_clone64->SetLineWidth(2);

   ci = TColor::GetColor("#00cc00");
   den_clone64->SetMarkerColor(ci);
   den_clone64->SetMarkerStyle(23);
   den_clone64->Draw("same samep");
   
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
   TText *text = new TText(0.17,0.17,"ME1/a");
   text->SetNDC();
   text->Draw();
   text = new TText(0.17,0.24,"ALCT");
   text->SetNDC();
   text->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
