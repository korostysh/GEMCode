void Eff_ME1a_ALCT_Combined()
{
//=========Macro generated from canvas: c/c
//=========  (Tue Oct  8 12:39:04 2019) by ROOT version 6.14/09
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
   
   TH1F *base__8 = new TH1F("base__8","",25,2.1,2.4);
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
   
   TEfficiency * den_clone30 = new TEfficiency("den_clone","",25,2.1,2.4);
   
   den_clone30->SetConfidenceLevel(0.6826895);
   den_clone30->SetBetaAlpha(1);
   den_clone30->SetBetaBeta(1);
   den_clone30->SetWeight(1);
   den_clone30->SetStatisticOption(0);
   den_clone30->SetPosteriorMode(0);
   den_clone30->SetShortestInterval(0);
   den_clone30->SetTotalEvents(0,0);
   den_clone30->SetPassedEvents(0,0);
   den_clone30->SetTotalEvents(1,497);
   den_clone30->SetPassedEvents(1,479);
   den_clone30->SetTotalEvents(2,714);
   den_clone30->SetPassedEvents(2,685);
   den_clone30->SetTotalEvents(3,880);
   den_clone30->SetPassedEvents(3,878);
   den_clone30->SetTotalEvents(4,843);
   den_clone30->SetPassedEvents(4,842);
   den_clone30->SetTotalEvents(5,858);
   den_clone30->SetPassedEvents(5,858);
   den_clone30->SetTotalEvents(6,854);
   den_clone30->SetPassedEvents(6,853);
   den_clone30->SetTotalEvents(7,837);
   den_clone30->SetPassedEvents(7,835);
   den_clone30->SetTotalEvents(8,861);
   den_clone30->SetPassedEvents(8,860);
   den_clone30->SetTotalEvents(9,766);
   den_clone30->SetPassedEvents(9,762);
   den_clone30->SetTotalEvents(10,879);
   den_clone30->SetPassedEvents(10,878);
   den_clone30->SetTotalEvents(11,845);
   den_clone30->SetPassedEvents(11,842);
   den_clone30->SetTotalEvents(12,864);
   den_clone30->SetPassedEvents(12,862);
   den_clone30->SetTotalEvents(13,869);
   den_clone30->SetPassedEvents(13,869);
   den_clone30->SetTotalEvents(14,852);
   den_clone30->SetPassedEvents(14,851);
   den_clone30->SetTotalEvents(15,823);
   den_clone30->SetPassedEvents(15,822);
   den_clone30->SetTotalEvents(16,777);
   den_clone30->SetPassedEvents(16,777);
   den_clone30->SetTotalEvents(17,827);
   den_clone30->SetPassedEvents(17,826);
   den_clone30->SetTotalEvents(18,860);
   den_clone30->SetPassedEvents(18,860);
   den_clone30->SetTotalEvents(19,884);
   den_clone30->SetPassedEvents(19,882);
   den_clone30->SetTotalEvents(20,844);
   den_clone30->SetPassedEvents(20,843);
   den_clone30->SetTotalEvents(21,845);
   den_clone30->SetPassedEvents(21,844);
   den_clone30->SetTotalEvents(22,771);
   den_clone30->SetPassedEvents(22,771);
   den_clone30->SetTotalEvents(23,885);
   den_clone30->SetPassedEvents(23,884);
   den_clone30->SetTotalEvents(24,859);
   den_clone30->SetPassedEvents(24,853);
   den_clone30->SetTotalEvents(25,744);
   den_clone30->SetPassedEvents(25,716);
   den_clone30->SetTotalEvents(26,0);
   den_clone30->SetPassedEvents(26,0);
   den_clone30->SetFillColor(19);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ff0000");
   den_clone30->SetLineColor(ci);
   den_clone30->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   den_clone30->SetMarkerColor(ci);
   den_clone30->SetMarkerStyle(22);
   den_clone30->Draw("same samep");
   
   TEfficiency * den_clone31 = new TEfficiency("den_clone","",25,2.1,2.4);
   
   den_clone31->SetConfidenceLevel(0.6826895);
   den_clone31->SetBetaAlpha(1);
   den_clone31->SetBetaBeta(1);
   den_clone31->SetWeight(1);
   den_clone31->SetStatisticOption(0);
   den_clone31->SetPosteriorMode(0);
   den_clone31->SetShortestInterval(0);
   den_clone31->SetTotalEvents(0,0);
   den_clone31->SetPassedEvents(0,0);
   den_clone31->SetTotalEvents(1,533);
   den_clone31->SetPassedEvents(1,510);
   den_clone31->SetTotalEvents(2,781);
   den_clone31->SetPassedEvents(2,742);
   den_clone31->SetTotalEvents(3,835);
   den_clone31->SetPassedEvents(3,802);
   den_clone31->SetTotalEvents(4,749);
   den_clone31->SetPassedEvents(4,723);
   den_clone31->SetTotalEvents(5,811);
   den_clone31->SetPassedEvents(5,785);
   den_clone31->SetTotalEvents(6,841);
   den_clone31->SetPassedEvents(6,813);
   den_clone31->SetTotalEvents(7,848);
   den_clone31->SetPassedEvents(7,826);
   den_clone31->SetTotalEvents(8,876);
   den_clone31->SetPassedEvents(8,855);
   den_clone31->SetTotalEvents(9,842);
   den_clone31->SetPassedEvents(9,814);
   den_clone31->SetTotalEvents(10,790);
   den_clone31->SetPassedEvents(10,754);
   den_clone31->SetTotalEvents(11,811);
   den_clone31->SetPassedEvents(11,779);
   den_clone31->SetTotalEvents(12,830);
   den_clone31->SetPassedEvents(12,794);
   den_clone31->SetTotalEvents(13,795);
   den_clone31->SetPassedEvents(13,757);
   den_clone31->SetTotalEvents(14,811);
   den_clone31->SetPassedEvents(14,773);
   den_clone31->SetTotalEvents(15,862);
   den_clone31->SetPassedEvents(15,824);
   den_clone31->SetTotalEvents(16,848);
   den_clone31->SetPassedEvents(16,813);
   den_clone31->SetTotalEvents(17,824);
   den_clone31->SetPassedEvents(17,783);
   den_clone31->SetTotalEvents(18,816);
   den_clone31->SetPassedEvents(18,768);
   den_clone31->SetTotalEvents(19,859);
   den_clone31->SetPassedEvents(19,803);
   den_clone31->SetTotalEvents(20,800);
   den_clone31->SetPassedEvents(20,749);
   den_clone31->SetTotalEvents(21,807);
   den_clone31->SetPassedEvents(21,754);
   den_clone31->SetTotalEvents(22,772);
   den_clone31->SetPassedEvents(22,728);
   den_clone31->SetTotalEvents(23,833);
   den_clone31->SetPassedEvents(23,795);
   den_clone31->SetTotalEvents(24,756);
   den_clone31->SetPassedEvents(24,719);
   den_clone31->SetTotalEvents(25,840);
   den_clone31->SetPassedEvents(25,755);
   den_clone31->SetTotalEvents(26,0);
   den_clone31->SetPassedEvents(26,0);
   den_clone31->SetFillColor(19);

   ci = TColor::GetColor("#0000ff");
   den_clone31->SetLineColor(ci);
   den_clone31->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   den_clone31->SetMarkerColor(ci);
   den_clone31->SetMarkerStyle(21);
   den_clone31->Draw("same samep");
   
   TEfficiency * den_clone32 = new TEfficiency("den_clone","",25,2.1,2.4);
   
   den_clone32->SetConfidenceLevel(0.6826895);
   den_clone32->SetBetaAlpha(1);
   den_clone32->SetBetaBeta(1);
   den_clone32->SetWeight(1);
   den_clone32->SetStatisticOption(0);
   den_clone32->SetPosteriorMode(0);
   den_clone32->SetShortestInterval(0);
   den_clone32->SetTotalEvents(0,0);
   den_clone32->SetPassedEvents(0,0);
   den_clone32->SetTotalEvents(1,533);
   den_clone32->SetPassedEvents(1,523);
   den_clone32->SetTotalEvents(2,781);
   den_clone32->SetPassedEvents(2,771);
   den_clone32->SetTotalEvents(3,835);
   den_clone32->SetPassedEvents(3,830);
   den_clone32->SetTotalEvents(4,749);
   den_clone32->SetPassedEvents(4,743);
   den_clone32->SetTotalEvents(5,811);
   den_clone32->SetPassedEvents(5,809);
   den_clone32->SetTotalEvents(6,841);
   den_clone32->SetPassedEvents(6,837);
   den_clone32->SetTotalEvents(7,848);
   den_clone32->SetPassedEvents(7,844);
   den_clone32->SetTotalEvents(8,876);
   den_clone32->SetPassedEvents(8,875);
   den_clone32->SetTotalEvents(9,842);
   den_clone32->SetPassedEvents(9,836);
   den_clone32->SetTotalEvents(10,790);
   den_clone32->SetPassedEvents(10,780);
   den_clone32->SetTotalEvents(11,811);
   den_clone32->SetPassedEvents(11,803);
   den_clone32->SetTotalEvents(12,830);
   den_clone32->SetPassedEvents(12,827);
   den_clone32->SetTotalEvents(13,795);
   den_clone32->SetPassedEvents(13,792);
   den_clone32->SetTotalEvents(14,811);
   den_clone32->SetPassedEvents(14,804);
   den_clone32->SetTotalEvents(15,862);
   den_clone32->SetPassedEvents(15,855);
   den_clone32->SetTotalEvents(16,848);
   den_clone32->SetPassedEvents(16,843);
   den_clone32->SetTotalEvents(17,824);
   den_clone32->SetPassedEvents(17,817);
   den_clone32->SetTotalEvents(18,816);
   den_clone32->SetPassedEvents(18,809);
   den_clone32->SetTotalEvents(19,859);
   den_clone32->SetPassedEvents(19,847);
   den_clone32->SetTotalEvents(20,800);
   den_clone32->SetPassedEvents(20,793);
   den_clone32->SetTotalEvents(21,807);
   den_clone32->SetPassedEvents(21,800);
   den_clone32->SetTotalEvents(22,772);
   den_clone32->SetPassedEvents(22,766);
   den_clone32->SetTotalEvents(23,833);
   den_clone32->SetPassedEvents(23,827);
   den_clone32->SetTotalEvents(24,756);
   den_clone32->SetPassedEvents(24,751);
   den_clone32->SetTotalEvents(25,840);
   den_clone32->SetPassedEvents(25,784);
   den_clone32->SetTotalEvents(26,0);
   den_clone32->SetPassedEvents(26,0);
   den_clone32->SetFillColor(19);
   den_clone32->SetLineWidth(2);
   den_clone32->SetMarkerStyle(23);
   den_clone32->Draw("same samep");
   
   TLegend *leg = new TLegend(0,0,0,0,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextFont(62);
   leg->SetTextSize(0.05);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(0);
   TLegendEntry *entry=leg->AddEntry("den_clone","PU0      CSC Run-2","pl");
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
