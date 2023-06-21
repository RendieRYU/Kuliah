<?php
    //RENDIE ABDI SAPUTRA
    //2200018094
    
    //buka file counter mode baca
    $filecounter = "counter.txt";
    $fl = fopen($filecounter, "r+");

    //ambil nilai hit dan simpan dalam variable $hit
    $hit = fread($fl, filesize($filecounter));

    //tampilkan
    echo("<table width=250 align=center border=1 cellspacing=0 cellpadding=0 bordercolor=#0000FF><tr>");
    echo("<td width=250 valign=middle align=center>");
    echo("<font face=verdana size=2 color=#FF0000><b>");
    echo("Anda pengunjung yang ke:");
    echo($hit);
    echo("</b></font>");
    echo("</td>");
    echo("</tr></table>");

    //tutup file counter.txt
    fclose($fl);

    //buka file counter.txt mode tulis
    $fl = fopen($filecounter, "w+");

    //tambahkan nilai 1 pada variable hit
    $hit = $hit + 1;

    //simpan
    fwrite($fl, $hit, strlen($hit));
  
    //tutup file counter.txt
    fclose($fl);
?>