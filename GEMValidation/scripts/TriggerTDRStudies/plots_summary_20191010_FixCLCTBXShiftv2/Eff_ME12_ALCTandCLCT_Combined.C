void Eff_ME12_ALCTandCLCT_Combined()
{
//=========Macro generated from canvas: c/c
//=========  (Fri Oct 11 07:50:19 2019) by ROOT version 6.14/09
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   c->SetHighLightColor(2);
   c->Range(1.128571,0.42125,1.72381,1.0775);
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
   
   TH1F *base__55 = new TH1F("base__55","",25,1.2,1.7);
   base__55->SetMinimum(0.5);
   base__55->SetMaximum(1.025);
   base__55->SetLineStyle(0);
   base__55->SetMarkerStyle(20);
   base__55->GetXaxis()->SetTitle("True muon |#eta|");
   base__55->GetXaxis()->SetLabelFont(42);
   base__55->GetXaxis()->SetLabelOffset(0.007);
   base__55->GetXaxis()->SetLabelSize(0.05);
   base__55->GetXaxis()->SetTitleSize(0.06);
   base__55->GetXaxis()->SetTitleOffset(0.9);
   base__55->GetXaxis()->SetTitleFont(42);
   base__55->GetYaxis()->SetTitle("Efficiency");
   base__55->GetYaxis()->SetLabelFont(42);
   base__55->GetYaxis()->SetLabelOffset(0.007);
   base__55->GetYaxis()->SetLabelSize(0.05);
   base__55->GetYaxis()->SetTitleSize(0.06);
   base__55->GetYaxis()->SetTitleOffset(0.9);
   base__55->GetYaxis()->SetTitleFont(42);
   base__55->GetZaxis()->SetLabelFont(42);
   base__55->GetZaxis()->SetLabelOffset(0.007);
   base__55->GetZaxis()->SetLabelSize(0.05);
   base__55->GetZaxis()->SetTitleSize(0.06);
   base__55->GetZaxis()->SetTitleFont(42);
   base__55->Draw("");
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
   
   TEfficiency * den_clone201 = new TEfficiency("den_clone","",25,1.2,1.7);
   
   den_clone201->SetConfidenceLevel(0.6826895);
   den_clone201->SetBetaAlpha(1);
   den_clone201->SetBetaBeta(1);
   den_clone201->SetWeight(1);
   den_clone201->SetStatisticOption(0);
   den_clone201->SetPosteriorMode(0);
   den_clone201->SetShortestInterval(0);
   den_clone201->SetTotalEvents(0,0);
   den_clone201->SetPassedEvents(0,0);
   den_clone201->SetTotalEvents(1,820);
   den_clone201->SetPassedEvents(1,748);
   den_clone201->SetTotalEvents(2,1213);
   den_clone201->SetPassedEvents(2,1070);
   den_clone201->SetTotalEvents(3,1354);
   den_clone201->SetPassedEvents(3,1336);
   den_clone201->SetTotalEvents(4,1323);
   den_clone201->SetPassedEvents(4,1286);
   den_clone201->SetTotalEvents(5,1390);
   den_clone201->SetPassedEvents(5,1263);
   den_clone201->SetTotalEvents(6,1462);
   den_clone201->SetPassedEvents(6,1346);
   den_clone201->SetTotalEvents(7,1398);
   den_clone201->SetPassedEvents(7,1224);
   den_clone201->SetTotalEvents(8,1433);
   den_clone201->SetPassedEvents(8,1366);
   den_clone201->SetTotalEvents(9,1329);
   den_clone201->SetPassedEvents(9,1293);
   den_clone201->SetTotalEvents(10,1404);
   den_clone201->SetPassedEvents(10,1370);
   den_clone201->SetTotalEvents(11,1430);
   den_clone201->SetPassedEvents(11,1385);
   den_clone201->SetTotalEvents(12,1367);
   den_clone201->SetPassedEvents(12,1311);
   den_clone201->SetTotalEvents(13,1349);
   den_clone201->SetPassedEvents(13,1084);
   den_clone201->SetTotalEvents(14,1357);
   den_clone201->SetPassedEvents(14,1153);
   den_clone201->SetTotalEvents(15,1298);
   den_clone201->SetPassedEvents(15,999);
   den_clone201->SetTotalEvents(16,1436);
   den_clone201->SetPassedEvents(16,1329);
   den_clone201->SetTotalEvents(17,1307);
   den_clone201->SetPassedEvents(17,1257);
   den_clone201->SetTotalEvents(18,1268);
   den_clone201->SetPassedEvents(18,1216);
   den_clone201->SetTotalEvents(19,1329);
   den_clone201->SetPassedEvents(19,1268);
   den_clone201->SetTotalEvents(20,1413);
   den_clone201->SetPassedEvents(20,1347);
   den_clone201->SetTotalEvents(21,1263);
   den_clone201->SetPassedEvents(21,1106);
   den_clone201->SetTotalEvents(22,804);
   den_clone201->SetPassedEvents(22,666);
   den_clone201->SetTotalEvents(23,621);
   den_clone201->SetPassedEvents(23,452);
   den_clone201->SetTotalEvents(24,81);
   den_clone201->SetPassedEvents(24,22);
   den_clone201->SetTotalEvents(25,0);
   den_clone201->SetPassedEvents(25,0);
   den_clone201->SetTotalEvents(26,0);
   den_clone201->SetPassedEvents(26,0);
   den_clone201->SetFillColor(19);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ff0000");
   den_clone201->SetLineColor(ci);
   den_clone201->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   den_clone201->SetMarkerColor(ci);
   den_clone201->SetMarkerStyle(22);
   den_clone201->Draw("same samep");
   
   TEfficiency * den_clone202 = new TEfficiency("den_clone","",25,1.2,1.7);
   
   den_clone202->SetConfidenceLevel(0.6826895);
   den_clone202->SetBetaAlpha(1);
   den_clone202->SetBetaBeta(1);
   den_clone202->SetWeight(1);
   den_clone202->SetStatisticOption(0);
   den_clone202->SetPosteriorMode(0);
   den_clone202->SetShortestInterval(0);
   den_clone202->SetTotalEvents(0,0);
   den_clone202->SetPassedEvents(0,0);
   den_clone202->SetTotalEvents(1,771);
   den_clone202->SetPassedEvents(1,691);
   den_clone202->SetTotalEvents(2,1220);
   den_clone202->SetPassedEvents(2,1070);
   den_clone202->SetTotalEvents(3,1397);
   den_clone202->SetPassedEvents(3,1351);
   den_clone202->SetTotalEvents(4,1411);
   den_clone202->SetPassedEvents(4,1370);
   den_clone202->SetTotalEvents(5,1475);
   den_clone202->SetPassedEvents(5,1345);
   den_clone202->SetTotalEvents(6,1407);
   den_clone202->SetPassedEvents(6,1269);
   den_clone202->SetTotalEvents(7,1358);
   den_clone202->SetPassedEvents(7,1214);
   den_clone202->SetTotalEvents(8,1366);
   den_clone202->SetPassedEvents(8,1290);
   den_clone202->SetTotalEvents(9,1305);
   den_clone202->SetPassedEvents(9,1268);
   den_clone202->SetTotalEvents(10,1465);
   den_clone202->SetPassedEvents(10,1418);
   den_clone202->SetTotalEvents(11,1413);
   den_clone202->SetPassedEvents(11,1366);
   den_clone202->SetTotalEvents(12,1344);
   den_clone202->SetPassedEvents(12,1270);
   den_clone202->SetTotalEvents(13,1435);
   den_clone202->SetPassedEvents(13,1147);
   den_clone202->SetTotalEvents(14,1403);
   den_clone202->SetPassedEvents(14,1167);
   den_clone202->SetTotalEvents(15,1342);
   den_clone202->SetPassedEvents(15,1054);
   den_clone202->SetTotalEvents(16,1332);
   den_clone202->SetPassedEvents(16,1224);
   den_clone202->SetTotalEvents(17,1446);
   den_clone202->SetPassedEvents(17,1377);
   den_clone202->SetTotalEvents(18,1424);
   den_clone202->SetPassedEvents(18,1355);
   den_clone202->SetTotalEvents(19,1381);
   den_clone202->SetPassedEvents(19,1317);
   den_clone202->SetTotalEvents(20,1389);
   den_clone202->SetPassedEvents(20,1299);
   den_clone202->SetTotalEvents(21,1197);
   den_clone202->SetPassedEvents(21,1053);
   den_clone202->SetTotalEvents(22,900);
   den_clone202->SetPassedEvents(22,731);
   den_clone202->SetTotalEvents(23,639);
   den_clone202->SetPassedEvents(23,458);
   den_clone202->SetTotalEvents(24,66);
   den_clone202->SetPassedEvents(24,19);
   den_clone202->SetTotalEvents(25,0);
   den_clone202->SetPassedEvents(25,0);
   den_clone202->SetTotalEvents(26,0);
   den_clone202->SetPassedEvents(26,0);
   den_clone202->SetFillColor(19);

   ci = TColor::GetColor("#0000ff");
   den_clone202->SetLineColor(ci);
   den_clone202->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   den_clone202->SetMarkerColor(ci);
   den_clone202->SetMarkerStyle(21);
   den_clone202->Draw("same samep");
   
   TEfficiency * den_clone203 = new TEfficiency("den_clone","",25,1.2,1.7);
   
   den_clone203->SetConfidenceLevel(0.6826895);
   den_clone203->SetBetaAlpha(1);
   den_clone203->SetBetaBeta(1);
   den_clone203->SetWeight(1);
   den_clone203->SetStatisticOption(0);
   den_clone203->SetPosteriorMode(0);
   den_clone203->SetShortestInterval(0);
   den_clone203->SetTotalEvents(0,0);
   den_clone203->SetPassedEvents(0,0);
   den_clone203->SetTotalEvents(1,771);
   den_clone203->SetPassedEvents(1,691);
   den_clone203->SetTotalEvents(2,1220);
   den_clone203->SetPassedEvents(2,1070);
   den_clone203->SetTotalEvents(3,1397);
   den_clone203->SetPassedEvents(3,1351);
   den_clone203->SetTotalEvents(4,1411);
   den_clone203->SetPassedEvents(4,1370);
   den_clone203->SetTotalEvents(5,1475);
   den_clone203->SetPassedEvents(5,1345);
   den_clone203->SetTotalEvents(6,1407);
   den_clone203->SetPassedEvents(6,1269);
   den_clone203->SetTotalEvents(7,1358);
   den_clone203->SetPassedEvents(7,1214);
   den_clone203->SetTotalEvents(8,1366);
   den_clone203->SetPassedEvents(8,1290);
   den_clone203->SetTotalEvents(9,1305);
   den_clone203->SetPassedEvents(9,1268);
   den_clone203->SetTotalEvents(10,1465);
   den_clone203->SetPassedEvents(10,1418);
   den_clone203->SetTotalEvents(11,1413);
   den_clone203->SetPassedEvents(11,1366);
   den_clone203->SetTotalEvents(12,1344);
   den_clone203->SetPassedEvents(12,1270);
   den_clone203->SetTotalEvents(13,1435);
   den_clone203->SetPassedEvents(13,1147);
   den_clone203->SetTotalEvents(14,1403);
   den_clone203->SetPassedEvents(14,1167);
   den_clone203->SetTotalEvents(15,1342);
   den_clone203->SetPassedEvents(15,1054);
   den_clone203->SetTotalEvents(16,1332);
   den_clone203->SetPassedEvents(16,1224);
   den_clone203->SetTotalEvents(17,1446);
   den_clone203->SetPassedEvents(17,1377);
   den_clone203->SetTotalEvents(18,1424);
   den_clone203->SetPassedEvents(18,1355);
   den_clone203->SetTotalEvents(19,1381);
   den_clone203->SetPassedEvents(19,1317);
   den_clone203->SetTotalEvents(20,1389);
   den_clone203->SetPassedEvents(20,1299);
   den_clone203->SetTotalEvents(21,1197);
   den_clone203->SetPassedEvents(21,1053);
   den_clone203->SetTotalEvents(22,900);
   den_clone203->SetPassedEvents(22,731);
   den_clone203->SetTotalEvents(23,639);
   den_clone203->SetPassedEvents(23,458);
   den_clone203->SetTotalEvents(24,66);
   den_clone203->SetPassedEvents(24,19);
   den_clone203->SetTotalEvents(25,0);
   den_clone203->SetPassedEvents(25,0);
   den_clone203->SetTotalEvents(26,0);
   den_clone203->SetPassedEvents(26,0);
   den_clone203->SetFillColor(19);
   den_clone203->SetLineWidth(2);
   den_clone203->SetMarkerStyle(23);
   den_clone203->Draw("same samep");
   
   TEfficiency * den_clone204 = new TEfficiency("den_clone","",25,1.2,1.7);
   
   den_clone204->SetConfidenceLevel(0.6826895);
   den_clone204->SetBetaAlpha(1);
   den_clone204->SetBetaBeta(1);
   den_clone204->SetWeight(1);
   den_clone204->SetStatisticOption(0);
   den_clone204->SetPosteriorMode(0);
   den_clone204->SetShortestInterval(0);
   den_clone204->SetTotalEvents(0,0);
   den_clone204->SetPassedEvents(0,0);
   den_clone204->SetTotalEvents(1,222);
   den_clone204->SetPassedEvents(1,209);
   den_clone204->SetTotalEvents(2,423);
   den_clone204->SetPassedEvents(2,394);
   den_clone204->SetTotalEvents(3,523);
   den_clone204->SetPassedEvents(3,512);
   den_clone204->SetTotalEvents(4,488);
   den_clone204->SetPassedEvents(4,478);
   den_clone204->SetTotalEvents(5,562);
   den_clone204->SetPassedEvents(5,505);
   den_clone204->SetTotalEvents(6,469);
   den_clone204->SetPassedEvents(6,431);
   den_clone204->SetTotalEvents(7,484);
   den_clone204->SetPassedEvents(7,432);
   den_clone204->SetTotalEvents(8,449);
   den_clone204->SetPassedEvents(8,423);
   den_clone204->SetTotalEvents(9,453);
   den_clone204->SetPassedEvents(9,433);
   den_clone204->SetTotalEvents(10,482);
   den_clone204->SetPassedEvents(10,471);
   den_clone204->SetTotalEvents(11,490);
   den_clone204->SetPassedEvents(11,472);
   den_clone204->SetTotalEvents(12,552);
   den_clone204->SetPassedEvents(12,521);
   den_clone204->SetTotalEvents(13,489);
   den_clone204->SetPassedEvents(13,403);
   den_clone204->SetTotalEvents(14,492);
   den_clone204->SetPassedEvents(14,429);
   den_clone204->SetTotalEvents(15,416);
   den_clone204->SetPassedEvents(15,336);
   den_clone204->SetTotalEvents(16,473);
   den_clone204->SetPassedEvents(16,441);
   den_clone204->SetTotalEvents(17,486);
   den_clone204->SetPassedEvents(17,460);
   den_clone204->SetTotalEvents(18,496);
   den_clone204->SetPassedEvents(18,481);
   den_clone204->SetTotalEvents(19,504);
   den_clone204->SetPassedEvents(19,474);
   den_clone204->SetTotalEvents(20,527);
   den_clone204->SetPassedEvents(20,497);
   den_clone204->SetTotalEvents(21,432);
   den_clone204->SetPassedEvents(21,386);
   den_clone204->SetTotalEvents(22,274);
   den_clone204->SetPassedEvents(22,251);
   den_clone204->SetTotalEvents(23,157);
   den_clone204->SetPassedEvents(23,127);
   den_clone204->SetTotalEvents(24,13);
   den_clone204->SetPassedEvents(24,8);
   den_clone204->SetTotalEvents(25,0);
   den_clone204->SetPassedEvents(25,0);
   den_clone204->SetTotalEvents(26,0);
   den_clone204->SetPassedEvents(26,0);
   den_clone204->SetFillColor(19);

   ci = TColor::GetColor("#00cc00");
   den_clone204->SetLineColor(ci);
   den_clone204->SetLineWidth(2);

   ci = TColor::GetColor("#00cc00");
   den_clone204->SetMarkerColor(ci);
   den_clone204->SetMarkerStyle(23);
   den_clone204->Draw("same samep");
   
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
   TText *text = new TText(0.17,0.17,"ME1/2");
   text->SetNDC();
   text->Draw();
   text = new TText(0.17,0.24,"ALCTandCLCT");
   text->SetNDC();
   text->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
