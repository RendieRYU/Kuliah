<?php
$a = 3;
$b = 4;

$hasil_jumlah = $a + $b;
echo "Hasilnya adalah: " . $hasil_jumlah;
echo "<br>";

$hasil_kali = $a * $b;
echo "Hasilnya adalah: " . $hasil_kali;
echo "<br>";

$hasil_kurang = $a - $b;
echo "Hasilnya adalah: " . $hasil_kurang;
echo "<br>";

$hasil_bagi = $a / $b;
echo "Hasilnya adalah: " . $hasil_bagi;
echo "<br>";

if($a == $b){
	echo "Nilai A sama dengan nilai B";
}
if($a > $b){
    echo "Nilai A lebih besar dari nilai B";
}
else{
    echo "Nilai A lebih kecil dari nilai B";

}
?>