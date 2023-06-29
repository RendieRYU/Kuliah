<?php
    echo "<head><title>My Guest Book</title></head>";
    $lines = file("guestbook.txt");

    echo "<table border=0>";

    foreach ($lines as $line) {
        $pisah = explode("|", $line);
        echo "<tr><td>Nama </td><td>: $pisah[0]</td></tr>";
        echo "<tr><td>Alamat </td><td>: $pisah[1]</td></tr>";
        echo "<tr><td>Email </td><td>: $pisah[2]</td></tr>";
        echo "<tr><td>Status </td><td>: $pisah[3]</td></tr>";
        echo "<tr><td>Komentar </td><td>: $pisah[4]</td></tr>
        <tr><td>&nbsp;<hr></td><td>&nbsp<hr></td></tr>";
    }
    echo "</table>";
    echo "<a href=index.html> Klik Disini </a> Isi Buku Tamu <br>";
?>