void Eff_ME12_ALCT_Combined_PU300()
{
//=========Macro generated from canvas: c/c
//=========  (Tue Oct  8 12:39:31 2019) by ROOT version 6.14/09
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
   
   TH1F *base__21 = new TH1F("base__21","",25,1.2,1.7);
   base__21->SetMinimum(0.5);
   base__21->SetMaximum(1.025);
   base__21->SetLineStyle(0);
   base__21->SetMarkerStyle(20);
   base__21->GetXaxis()->SetTitle("True muon |#eta|");
   base__21->GetXaxis()->SetLabelFont(42);
   base__21->GetXaxis()->SetLabelOffset(0.007);
   base__21->GetXaxis()->SetLabelSize(0.05);
   base__21->GetXaxis()->SetTitleSize(0.06);
   base__21->GetXaxis()->SetTitleOffset(0.9);
   base__21->GetXaxis()->SetTitleFont(42);
   base__21->GetYaxis()->SetTitle("Efficiency");
   base__21->GetYaxis()->SetLabelFont(42);
   base__21->GetYaxis()->SetLabelOffset(0.007);
   base__21->GetYaxis()->SetLabelSize(0.05);
   base__21->GetYaxis()->SetTitleSize(0.06);
   base__21->GetYaxis()->SetTitleOffset(0.9);
   base__21->GetYaxis()->SetTitleFont(42);
   base__21->GetZaxis()->SetLabelFont(42);
   base__21->GetZaxis()->SetLabelOffset(0.007);
   base__21->GetZaxis()->SetLabelSize(0.05);
   base__21->GetZaxis()->SetTitleSize(0.06);
   base__21->GetZaxis()->SetTitleFont(42);
   base__21->Draw("");
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
   
   TEfficiency * den_clone77 = new TEfficiency("den_clone","",25,1.2,1.7);
   
   den_clone77->SetConfidenceLevel(0.6826895);
   den_clone77->SetBetaAlpha(1);
   den_clone77->SetBetaBeta(1);
   den_clone77->SetWeight(1);
   den_clone77->SetStatisticOption(0);
   den_clone77->SetPosteriorMode(0);
   den_clone77->SetShortestInterval(0);
   den_clone77->SetTotalEvents(0,0);
   den_clone77->SetPassedEvents(0,0);
   den_clone77->SetTotalEvents(1,771);
   den_clone77->SetPassedEvents(1,732);
   den_clone77->SetTotalEvents(2,1220);
   den_clone77->SetPassedEvents(2,1144);
   den_clone77->SetTotalEvents(3,1397);
   den_clone77->SetPassedEvents(3,1393);
   den_clone77->SetTotalEvents(4,1411);
   den_clone77->SetPassedEvents(4,1409);
   den_clone77->SetTotalEvents(5,1475);
   den_clone77->SetPassedEvents(5,1473);
   den_clone77->SetTotalEvents(6,1407);
   den_clone77->SetPassedEvents(6,1406);
   den_clone77->SetTotalEvents(7,1358);
   den_clone77->SetPassedEvents(7,1357);
   den_clone77->SetTotalEvents(8,1366);
   den_clone77->SetPassedEvents(8,1365);
   den_clone77->SetTotalEvents(9,1305);
   den_clone77->SetPassedEvents(9,1301);
   den_clone77->SetTotalEvents(10,1465);
   den_clone77->SetPassedEvents(10,1459);
   den_clone77->SetTotalEvents(11,1413);
   den_clone77->SetPassedEvents(11,1404);
   den_clone77->SetTotalEvents(12,1344);
   den_clone77->SetPassedEvents(12,1338);
   den_clone77->SetTotalEvents(13,1435);
   den_clone77->SetPassedEvents(13,1407);
   den_clone77->SetTotalEvents(14,1403);
   den_clone77->SetPassedEvents(14,1376);
   den_clone77->SetTotalEvents(15,1342);
   den_clone77->SetPassedEvents(15,1276);
   den_clone77->SetTotalEvents(16,1332);
   den_clone77->SetPassedEvents(16,1320);
   den_clone77->SetTotalEvents(17,1446);
   den_clone77->SetPassedEvents(17,1441);
   den_clone77->SetTotalEvents(18,1424);
   den_clone77->SetPassedEvents(18,1418);
   den_clone77->SetTotalEvents(19,1381);
   den_clone77->SetPassedEvents(19,1373);
   den_clone77->SetTotalEvents(20,1389);
   den_clone77->SetPassedEvents(20,1383);
   den_clone77->SetTotalEvents(21,1197);
   den_clone77->SetPassedEvents(21,1156);
   den_clone77->SetTotalEvents(22,900);
   den_clone77->SetPassedEvents(22,822);
   den_clone77->SetTotalEvents(23,639);
   den_clone77->SetPassedEvents(23,566);
   den_clone77->SetTotalEvents(24,66);
   den_clone77->SetPassedEvents(24,35);
   den_clone77->SetTotalEvents(25,0);
   den_clone77->SetPassedEvents(25,0);
   den_clone77->SetTotalEvents(26,0);
   den_clone77->SetPassedEvents(26,0);
   den_clone77->SetFillColor(19);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#999999");
   den_clone77->SetLineColor(ci);
   den_clone77->SetLineWidth(2);

   ci = TColor::GetColor("#999999");
   den_clone77->SetMarkerColor(ci);
   den_clone77->SetMarkerStyle(23);
   den_clone77->Draw("same samep");
   
   TEfficiency * den_clone78 = new TEfficiency("den_clone","",25,1.2,1.7);
   
   den_clone78->SetConfidenceLevel(0.6826895);
   den_clone78->SetBetaAlpha(1);
   den_clone78->SetBetaBeta(1);
   den_clone78->SetWeight(1);
   den_clone78->SetStatisticOption(0);
   den_clone78->SetPosteriorMode(0);
   den_clone78->SetShortestInterval(0);
   den_clone78->SetTotalEvents(0,0);
   den_clone78->SetPassedEvents(0,0);
   den_clone78->SetTotalEvents(1,771);
   den_clone78->SetPassedEvents(1,732);
   den_clone78->SetTotalEvents(2,1220);
   den_clone78->SetPassedEvents(2,1144);
   den_clone78->SetTotalEvents(3,1397);
   den_clone78->SetPassedEvents(3,1393);
   den_clone78->SetTotalEvents(4,1411);
   den_clone78->SetPassedEvents(4,1409);
   den_clone78->SetTotalEvents(5,1475);
   den_clone78->SetPassedEvents(5,1473);
   den_clone78->SetTotalEvents(6,1407);
   den_clone78->SetPassedEvents(6,1406);
   den_clone78->SetTotalEvents(7,1358);
   den_clone78->SetPassedEvents(7,1357);
   den_clone78->SetTotalEvents(8,1366);
   den_clone78->SetPassedEvents(8,1365);
   den_clone78->SetTotalEvents(9,1305);
   den_clone78->SetPassedEvents(9,1301);
   den_clone78->SetTotalEvents(10,1465);
   den_clone78->SetPassedEvents(10,1459);
   den_clone78->SetTotalEvents(11,1413);
   den_clone78->SetPassedEvents(11,1404);
   den_clone78->SetTotalEvents(12,1344);
   den_clone78->SetPassedEvents(12,1338);
   den_clone78->SetTotalEvents(13,1435);
   den_clone78->SetPassedEvents(13,1407);
   den_clone78->SetTotalEvents(14,1403);
   den_clone78->SetPassedEvents(14,1376);
   den_clone78->SetTotalEvents(15,1342);
   den_clone78->SetPassedEvents(15,1276);
   den_clone78->SetTotalEvents(16,1332);
   den_clone78->SetPassedEvents(16,1320);
   den_clone78->SetTotalEvents(17,1446);
   den_clone78->SetPassedEvents(17,1441);
   den_clone78->SetTotalEvents(18,1424);
   den_clone78->SetPassedEvents(18,1418);
   den_clone78->SetTotalEvents(19,1381);
   den_clone78->SetPassedEvents(19,1373);
   den_clone78->SetTotalEvents(20,1389);
   den_clone78->SetPassedEvents(20,1383);
   den_clone78->SetTotalEvents(21,1197);
   den_clone78->SetPassedEvents(21,1156);
   den_clone78->SetTotalEvents(22,900);
   den_clone78->SetPassedEvents(22,822);
   den_clone78->SetTotalEvents(23,639);
   den_clone78->SetPassedEvents(23,566);
   den_clone78->SetTotalEvents(24,66);
   den_clone78->SetPassedEvents(24,35);
   den_clone78->SetTotalEvents(25,0);
   den_clone78->SetPassedEvents(25,0);
   den_clone78->SetTotalEvents(26,0);
   den_clone78->SetPassedEvents(26,0);
   den_clone78->SetFillColor(19);

   ci = TColor::GetColor("#ff0000");
   den_clone78->SetLineColor(ci);
   den_clone78->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   den_clone78->SetMarkerColor(ci);
   den_clone78->SetMarkerStyle(22);
   den_clone78->Draw("same samep");
   
   TEfficiency * den_clone79 = new TEfficiency("den_clone","",25,1.2,1.7);
   
   den_clone79->SetConfidenceLevel(0.6826895);
   den_clone79->SetBetaAlpha(1);
   den_clone79->SetBetaBeta(1);
   den_clone79->SetWeight(1);
   den_clone79->SetStatisticOption(0);
   den_clone79->SetPosteriorMode(0);
   den_clone79->SetShortestInterval(0);
   den_clone79->SetTotalEvents(0,0);
   den_clone79->SetPassedEvents(0,0);
   den_clone79->SetTotalEvents(1,771);
   den_clone79->SetPassedEvents(1,732);
   den_clone79->SetTotalEvents(2,1220);
   den_clone79->SetPassedEvents(2,1144);
   den_clone79->SetTotalEvents(3,1397);
   den_clone79->SetPassedEvents(3,1393);
   den_clone79->SetTotalEvents(4,1411);
   den_clone79->SetPassedEvents(4,1409);
   den_clone79->SetTotalEvents(5,1475);
   den_clone79->SetPassedEvents(5,1473);
   den_clone79->SetTotalEvents(6,1407);
   den_clone79->SetPassedEvents(6,1406);
   den_clone79->SetTotalEvents(7,1358);
   den_clone79->SetPassedEvents(7,1357);
   den_clone79->SetTotalEvents(8,1366);
   den_clone79->SetPassedEvents(8,1365);
   den_clone79->SetTotalEvents(9,1305);
   den_clone79->SetPassedEvents(9,1301);
   den_clone79->SetTotalEvents(10,1465);
   den_clone79->SetPassedEvents(10,1459);
   den_clone79->SetTotalEvents(11,1413);
   den_clone79->SetPassedEvents(11,1404);
   den_clone79->SetTotalEvents(12,1344);
   den_clone79->SetPassedEvents(12,1338);
   den_clone79->SetTotalEvents(13,1435);
   den_clone79->SetPassedEvents(13,1407);
   den_clone79->SetTotalEvents(14,1403);
   den_clone79->SetPassedEvents(14,1376);
   den_clone79->SetTotalEvents(15,1342);
   den_clone79->SetPassedEvents(15,1276);
   den_clone79->SetTotalEvents(16,1332);
   den_clone79->SetPassedEvents(16,1320);
   den_clone79->SetTotalEvents(17,1446);
   den_clone79->SetPassedEvents(17,1441);
   den_clone79->SetTotalEvents(18,1424);
   den_clone79->SetPassedEvents(18,1418);
   den_clone79->SetTotalEvents(19,1381);
   den_clone79->SetPassedEvents(19,1373);
   den_clone79->SetTotalEvents(20,1389);
   den_clone79->SetPassedEvents(20,1383);
   den_clone79->SetTotalEvents(21,1197);
   den_clone79->SetPassedEvents(21,1156);
   den_clone79->SetTotalEvents(22,900);
   den_clone79->SetPassedEvents(22,822);
   den_clone79->SetTotalEvents(23,639);
   den_clone79->SetPassedEvents(23,566);
   den_clone79->SetTotalEvents(24,66);
   den_clone79->SetPassedEvents(24,35);
   den_clone79->SetTotalEvents(25,0);
   den_clone79->SetPassedEvents(25,0);
   den_clone79->SetTotalEvents(26,0);
   den_clone79->SetPassedEvents(26,0);
   den_clone79->SetFillColor(19);

   ci = TColor::GetColor("#0000ff");
   den_clone79->SetLineColor(ci);
   den_clone79->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   den_clone79->SetMarkerColor(ci);
   den_clone79->SetMarkerStyle(21);
   den_clone79->Draw("same samep");
   
   TEfficiency * den_clone80 = new TEfficiency("den_clone","",25,1.2,1.7);
   
   den_clone80->SetConfidenceLevel(0.6826895);
   den_clone80->SetBetaAlpha(1);
   den_clone80->SetBetaBeta(1);
   den_clone80->SetWeight(1);
   den_clone80->SetStatisticOption(0);
   den_clone80->SetPosteriorMode(0);
   den_clone80->SetShortestInterval(0);
   den_clone80->SetTotalEvents(0,0);
   den_clone80->SetPassedEvents(0,0);
   den_clone80->SetTotalEvents(1,240);
   den_clone80->SetPassedEvents(1,222);
   den_clone80->SetTotalEvents(2,451);
   den_clone80->SetPassedEvents(2,427);
   den_clone80->SetTotalEvents(3,523);
   den_clone80->SetPassedEvents(3,523);
   den_clone80->SetTotalEvents(4,488);
   den_clone80->SetPassedEvents(4,487);
   den_clone80->SetTotalEvents(5,562);
   den_clone80->SetPassedEvents(5,561);
   den_clone80->SetTotalEvents(6,469);
   den_clone80->SetPassedEvents(6,469);
   den_clone80->SetTotalEvents(7,484);
   den_clone80->SetPassedEvents(7,482);
   den_clone80->SetTotalEvents(8,451);
   den_clone80->SetPassedEvents(8,448);
   den_clone80->SetTotalEvents(9,454);
   den_clone80->SetPassedEvents(9,453);
   den_clone80->SetTotalEvents(10,483);
   den_clone80->SetPassedEvents(10,482);
   den_clone80->SetTotalEvents(11,491);
   den_clone80->SetPassedEvents(11,490);
   den_clone80->SetTotalEvents(12,552);
   den_clone80->SetPassedEvents(12,551);
   den_clone80->SetTotalEvents(13,494);
   den_clone80->SetPassedEvents(13,483);
   den_clone80->SetTotalEvents(14,493);
   den_clone80->SetPassedEvents(14,487);
   den_clone80->SetTotalEvents(15,439);
   den_clone80->SetPassedEvents(15,416);
   den_clone80->SetTotalEvents(16,476);
   den_clone80->SetPassedEvents(16,473);
   den_clone80->SetTotalEvents(17,486);
   den_clone80->SetPassedEvents(17,485);
   den_clone80->SetTotalEvents(18,496);
   den_clone80->SetPassedEvents(18,493);
   den_clone80->SetTotalEvents(19,504);
   den_clone80->SetPassedEvents(19,503);
   den_clone80->SetTotalEvents(20,527);
   den_clone80->SetPassedEvents(20,526);
   den_clone80->SetTotalEvents(21,452);
   den_clone80->SetPassedEvents(21,432);
   den_clone80->SetTotalEvents(22,297);
   den_clone80->SetPassedEvents(22,273);
   den_clone80->SetTotalEvents(23,190);
   den_clone80->SetPassedEvents(23,157);
   den_clone80->SetTotalEvents(24,27);
   den_clone80->SetPassedEvents(24,14);
   den_clone80->SetTotalEvents(25,0);
   den_clone80->SetPassedEvents(25,0);
   den_clone80->SetTotalEvents(26,0);
   den_clone80->SetPassedEvents(26,0);
   den_clone80->SetFillColor(19);
   den_clone80->SetLineWidth(2);
   den_clone80->SetMarkerStyle(24);
   den_clone80->Draw("same samep");
   
   TEfficiency * den_clone81 = new TEfficiency("den_clone","",25,1.2,1.7);
   
   den_clone81->SetConfidenceLevel(0.6826895);
   den_clone81->SetBetaAlpha(1);
   den_clone81->SetBetaBeta(1);
   den_clone81->SetWeight(1);
   den_clone81->SetStatisticOption(0);
   den_clone81->SetPosteriorMode(0);
   den_clone81->SetShortestInterval(0);
   den_clone81->SetTotalEvents(0,0);
   den_clone81->SetPassedEvents(0,0);
   den_clone81->SetTotalEvents(1,820);
   den_clone81->SetPassedEvents(1,779);
   den_clone81->SetTotalEvents(2,1213);
   den_clone81->SetPassedEvents(2,1129);
   den_clone81->SetTotalEvents(3,1354);
   den_clone81->SetPassedEvents(3,1354);
   den_clone81->SetTotalEvents(4,1323);
   den_clone81->SetPassedEvents(4,1322);
   den_clone81->SetTotalEvents(5,1390);
   den_clone81->SetPassedEvents(5,1388);
   den_clone81->SetTotalEvents(6,1462);
   den_clone81->SetPassedEvents(6,1460);
   den_clone81->SetTotalEvents(7,1398);
   den_clone81->SetPassedEvents(7,1395);
   den_clone81->SetTotalEvents(8,1433);
   den_clone81->SetPassedEvents(8,1431);
   den_clone81->SetTotalEvents(9,1329);
   den_clone81->SetPassedEvents(9,1326);
   den_clone81->SetTotalEvents(10,1404);
   den_clone81->SetPassedEvents(10,1399);
   den_clone81->SetTotalEvents(11,1430);
   den_clone81->SetPassedEvents(11,1427);
   den_clone81->SetTotalEvents(12,1367);
   den_clone81->SetPassedEvents(12,1362);
   den_clone81->SetTotalEvents(13,1349);
   den_clone81->SetPassedEvents(13,1326);
   den_clone81->SetTotalEvents(14,1357);
   den_clone81->SetPassedEvents(14,1331);
   den_clone81->SetTotalEvents(15,1298);
   den_clone81->SetPassedEvents(15,1239);
   den_clone81->SetTotalEvents(16,1436);
   den_clone81->SetPassedEvents(16,1424);
   den_clone81->SetTotalEvents(17,1307);
   den_clone81->SetPassedEvents(17,1306);
   den_clone81->SetTotalEvents(18,1268);
   den_clone81->SetPassedEvents(18,1263);
   den_clone81->SetTotalEvents(19,1329);
   den_clone81->SetPassedEvents(19,1326);
   den_clone81->SetTotalEvents(20,1413);
   den_clone81->SetPassedEvents(20,1411);
   den_clone81->SetTotalEvents(21,1263);
   den_clone81->SetPassedEvents(21,1231);
   den_clone81->SetTotalEvents(22,804);
   den_clone81->SetPassedEvents(22,749);
   den_clone81->SetTotalEvents(23,621);
   den_clone81->SetPassedEvents(23,560);
   den_clone81->SetTotalEvents(24,81);
   den_clone81->SetPassedEvents(24,39);
   den_clone81->SetTotalEvents(25,0);
   den_clone81->SetPassedEvents(25,0);
   den_clone81->SetTotalEvents(26,0);
   den_clone81->SetPassedEvents(26,0);
   den_clone81->SetFillColor(19);

   ci = TColor::GetColor("#ff00ff");
   den_clone81->SetLineColor(ci);
   den_clone81->SetLineWidth(2);

   ci = TColor::GetColor("#ff00ff");
   den_clone81->SetMarkerColor(ci);
   den_clone81->SetMarkerStyle(24);
   den_clone81->Draw("same samep");
   
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
   TText *text = new TText(0.17,0.17,"ME1/2");
   text->SetNDC();
   text->Draw();
   text = new TText(0.17,0.24,"ALCT");
   text->SetNDC();
   text->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
