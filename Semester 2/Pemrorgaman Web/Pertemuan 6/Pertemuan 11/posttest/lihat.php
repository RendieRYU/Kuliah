<?php
    echo "<head>";
    echo "<title>Simpan Buku</title>";
    echo "<link rel='stylesheet' href='style-lihat.css'>";
    echo "</head>";
    $lines = file("guestbook.txt");
    $myDir = "C:/xampp/htdocs/PraktikumPweb/Pert11/posttest/file_upload";

    echo "<table>";

    foreach ($lines as $line) {
        $pisah = explode("|", $line);
        $dir = opendir($myDir);
            echo "<tr><td>Nama </td><td>: $pisah[0]</td></tr>";
            echo "<tr><td>Alamat </td><td>: $pisah[1]</td></tr>";
            echo "<tr><td>Email </td><td>: $pisah[2]</td></tr>";
            echo "<tr><td>Status </td><td>: $pisah[3]</td></tr>";
            while($tmp = readdir($dir)){
                if($tmp == $pisah[4])
                echo "<tr><td>Buku </td><td>:<a href='$tmp' target='_blank'>$tmp</a></td></tr>";
            }
            closedir($dir);
            echo "<tr><td>Deskripsi Buku </td><td>: $pisah[5]</td></tr>";
            echo "<tr><td>&nbsp;<hr></td><td>&nbsp<hr></td></tr>";
    }
    echo "</table>";
    echo "<a href=index.html> Unggah Buku </a><br>";
?>