void RPCTimingError_ME43()
{
//=========Macro generated from canvas: c/c
//=========  (Tue Oct  8 14:19:58 2019) by ROOT version 6.14/09
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   c->SetHighLightColor(2);
   c->Range(-0.4285714,-0.1438605,3.142857,1.054977);
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
   
   TH1F *num__38 = new TH1F("num__38","",30,0,3);
   num__38->SetBinContent(1,0.9133998);
   num__38->SetBinContent(2,0.006290107);
   num__38->SetBinContent(3,0.006671326);
   num__38->SetBinContent(4,0.005908889);
   num__38->SetBinContent(5,0.006163035);
   num__38->SetBinContent(6,0.005591207);
   num__38->SetBinContent(7,0.00552767);
   num__38->SetBinContent(8,0.005019378);
   num__38->SetBinContent(9,0.004701696);
   num__38->SetBinContent(10,0.005591207);
   num__38->SetBinContent(11,0.004828769);
   num__38->SetBinContent(12,0.003875723);
   num__38->SetBinContent(13,0.004828769);
   num__38->SetBinContent(14,0.00374865);
   num__38->SetBinContent(15,0.003113285);
   num__38->SetBinContent(16,0.003113285);
   num__38->SetBinContent(17,0.001715484);
   num__38->SetBinContent(18,0.002287312);
   num__38->SetBinContent(19,0.00177902);
   num__38->SetBinContent(20,0.0008895101);
   num__38->SetBinContent(21,0.001524874);
   num__38->SetBinContent(22,0.001016583);
   num__38->SetBinContent(23,0.0008259737);
   num__38->SetBinContent(24,0.0004447551);
   num__38->SetBinContent(25,0.0002541458);
   num__38->SetBinContent(26,0.0001270729);
   num__38->SetBinContent(27,0.0003176822);
   num__38->SetBinContent(28,6.353644e-05);
   num__38->SetBinContent(29,0.0001270729);
   num__38->SetBinContent(30,0.0002541458);
   num__38->SetBinContent(31,0.0005718279);
   num__38->SetBinError(1,0.007618016);
   num__38->SetBinError(2,0.0006321796);
   num__38->SetBinError(3,0.0006510548);
   num__38->SetBinError(4,0.0006127232);
   num__38->SetBinError(5,0.0006257613);
   num__38->SetBinError(6,0.0005960246);
   num__38->SetBinError(7,0.0005926284);
   num__38->SetBinError(8,0.0005647242);
   num__38->SetBinError(9,0.0005465611);
   num__38->SetBinError(10,0.0005960246);
   num__38->SetBinError(11,0.0005538978);
   num__38->SetBinError(12,0.0004962354);
   num__38->SetBinError(13,0.0005538978);
   num__38->SetBinError(14,0.0004880326);
   num__38->SetBinError(15,0.0004447551);
   num__38->SetBinError(16,0.0004447551);
   num__38->SetBinError(17,0.000330145);
   num__38->SetBinError(18,0.0003812186);
   num__38->SetBinError(19,0.0003362032);
   num__38->SetBinError(20,0.0002377316);
   num__38->SetBinError(21,0.0003112637);
   num__38->SetBinError(22,0.0002541458);
   num__38->SetBinError(23,0.0002290839);
   num__38->SetBinError(24,0.0001681016);
   num__38->SetBinError(25,0.0001270729);
   num__38->SetBinError(26,8.985409e-05);
   num__38->SetBinError(27,0.0001420718);
   num__38->SetBinError(28,6.353644e-05);
   num__38->SetBinError(29,8.985409e-05);
   num__38->SetBinError(30,0.0001270729);
   num__38->SetBinError(31,0.0001906093);
   num__38->SetEntries(15748);
   num__38->SetDirectory(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   num__38->SetLineColor(ci);
   num__38->SetLineStyle(0);
   num__38->SetLineWidth(2);
   num__38->SetMarkerStyle(20);
   num__38->GetXaxis()->SetTitle("RPC hit time error [ns]");
   num__38->GetXaxis()->SetLabelFont(42);
   num__38->GetXaxis()->SetLabelOffset(0.007);
   num__38->GetXaxis()->SetLabelSize(0.05);
   num__38->GetXaxis()->SetTitleSize(0.06);
   num__38->GetXaxis()->SetTitleOffset(0.9);
   num__38->GetXaxis()->SetTitleFont(42);
   num__38->GetYaxis()->SetTitle("Number of entries");
   num__38->GetYaxis()->SetLabelFont(42);
   num__38->GetYaxis()->SetLabelOffset(0.007);
   num__38->GetYaxis()->SetLabelSize(0.05);
   num__38->GetYaxis()->SetTitleSize(0.06);
   num__38->GetYaxis()->SetTitleOffset(1.25);
   num__38->GetYaxis()->SetTitleFont(42);
   num__38->GetZaxis()->SetLabelFont(42);
   num__38->GetZaxis()->SetLabelOffset(0.007);
   num__38->GetZaxis()->SetLabelSize(0.05);
   num__38->GetZaxis()->SetTitleSize(0.06);
   num__38->GetZaxis()->SetTitleFont(42);
   num__38->Draw("HIST");
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
   
   TLegend *leg = new TLegend(0,0,0,0,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextFont(62);
   leg->SetTextSize(0.05);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(0);
   TLegendEntry *entry=leg->AddEntry("num","RecHit","pl");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   leg->Draw();
   TText *text = new TText(0.17,0.24,"RE4/3");
   text->SetNDC();
   text->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
