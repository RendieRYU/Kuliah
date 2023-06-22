<!DOCTYPE html>
<html>
  <head>
    <title>Program PHP</title>
    <link rel="stylesheet" href="style9.css">
  </head>
  <body>
    <div class="container">
      <h1>Program PHP</h1>
      
      <form method="post">
        <label for="input">Input Kalimat</label>
        <input type="text" id="input" name="input">
        <button type="submit">Proses</button>
      </form>

      <?php
        if ($_SERVER["REQUEST_METHOD"] == "POST") {
          echo '<div class="result">';

          $kalimat = $_POST['input'];
          $jumlah = strlen($kalimat);
          date_default_timezone_set('Asia/Jakarta');
          $tanggal = date("l, d F Y || H:i:s A");
          $tanggal2 = " WIB Waktu Setempat";
          
          echo "<p>Kalimat yang diinputkan adalah: <span>$kalimat</span></p>";
          echo "<p>Banyak karakter : <span>$jumlah</span></p>";
          echo "<p>Tanggal dibuat : <span>$tanggal $tanggal2</span></p>";
          
          echo '</div>';
        }
      ?>
    </div>
  </body>
</html>
