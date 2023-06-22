<?php
    //RENDIE ABDI SAPUTRA
    //2200018094

    echo "
    <style>
    body {
        font-family: Arial, sans-serif;
        background: linear-gradient(to right, #12c2e9, #c471ed, #f64f59);
        margin: 0;
        padding: 0;
        display: flex;
        flex-direction: column;
        justify-content: center;
        align-items: center;
        height: 100vh;
        color: white;
    }

    .pengunjung, .data-diri {
        transition: all 0.3s ease;
        border-collapse: collapse;
        background-color: rgba(255, 255, 255, 0.1);
        box-shadow: 0px 0px 20px 0px rgba(0,0,0,0.2);
        border-radius: 10px;
        overflow: hidden;
        margin-bottom: 20px;
    }

    td {
        padding: 20px;
        text-align: center;
    }

    .data-diri td{
        text-align: left;
    }

    font {
        color: white;
        text-shadow: 2px 2px 4px rgba(0, 0, 0, 0.5);
    }

    .program {
        display: flex;
        flex-direction: column;
        align-items: center;
    }

    .program a {
        text-align: center;
        display: inline-block;
        color: white;
        background-color: rgba(0, 0, 0, 0.5);
        padding: 10px 20px;
        margin: 5px;
        border-radius: 5px;
        text-decoration: none;
        transition: background-color 0.3s ease;
        cursor: pointer;
        outline: none;
        width: 300px;
        height: 20px;
        line-height: 20px;
    }

    .program a:hover {
        background-color: rgba(0, 0, 0, 0.7);
    }

    footer {
        position: absolute;
        bottom: 0;
        width: 100%;
        text-align: center;
     }

    </style>
    ";

    // tambahan data diri
    $nama = "Rendie Abdi Saputra";
    $nim = "2200018094";
    $kelas = "A";
    $prodi = "Informatika";
    $slot = "Rabu 10.30";

    //buka file counter mode baca
    $filecounter = "counter.txt";
    $fl = fopen($filecounter, "r+");

    //ambil nilai hit dan simpan dalam variable $hit
    $hit = fread($fl, filesize($filecounter));

    //tanggal
    date_default_timezone_set('Asia/Jakarta');
    $hari = date("l");
    $tanggal = date("d F Y");
    $jam = date("H:i:s");

    //tampilkan
    echo"<body>
        <table class=pengunjung width=250 align=center cellspacing=0 cellpadding=0>
            <tr>
                <td>
                    <font face=verdana size=2>
                        <b>
                            Anda Pengunjung Ke: $hit
                           
                        </b>
                    </font>
                </td>
        </table>
        <table class=tanggal>
            <tr>
                <td>
                <font face=verdana size=2>
                        <b>
                            Jam : $jam
                            <br>
                            Hari : $hari
                            <br>
                            Tanggal :  $tanggal
                        </b>
                    </font>
                </td>
            </tr>
        </table>
        <table class=data-diri>
            <tr><td><b>Nama  </b></td><td>: $nama </td></tr>
            <tr><td><b>NIM   </b></td><td>: $nim  </td></tr>
            <tr><td><b>Kelas </b></td><td>: $kelas</td></tr>
            <tr><td><b>Prodi </b></td><td>: $prodi</td></tr>
            <tr><td><b>Slot  </b></td><td>: $slot </td></tr>
        </table>

        <div class=program>
            <font face=verdana size=2>
                <b>
                    Program yang telah dibuat sampai saat ini:
                </b>
            </font>
            <br>
            <a href=Post9.php>Program Menghitung Karakter</a>
            <a href=post8.html>Program Mencari Bilangan Prima</a>
        </div>
        <footer style=text-align: center; margin-top: 20px;>
            <p>&COPY Dibuat oleh Rendie Abdi Saputra(2200018094) 
            <br> Sponsorship: chatbot dan forefront</p>
        </footer>
    </body>";

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
