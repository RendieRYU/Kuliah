<?php

for ($a = 1; $a <= 5; $a++){
    echo "Nilai A = ". $a;
    echo "<br>";

    if ($a % 2 == 0){

        echo $a . " adalah bilangan genap!";
    }
    else{
        echo $a . " adalah bilangan ganjil!";
    }

    echo "<br>";
    echo "<br>";
}
