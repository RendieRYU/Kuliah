#include <iostream>

//cetak semua kalkulator
void printCalculator(){
    std::cout << "+==============================+" << std::endl;
    std::cout << "|       PILIH KALKULATOR       |" << std::endl;
    std::cout << "+==============================+" << std::endl;
    std::cout << "| 1  | Kalkulator Biasa        |" << std::endl;
    std::cout << "| 2  | Kalkulator Kombinatorial|" << std::endl;
    std::cout << "| 3  | Konversi Suhu           |" << std::endl;
    std::cout << "| 4  | Konversi Jarak          |" << std::endl;
    std::cout << "| 5  | Konversi Waktu          |" << std::endl;
    std::cout << "| 6  | Konversi Mata Uang      |" << std::endl;
    std::cout << "| 7  | Prima, Ganjil, dan Genap|" << std::endl;
    std::cout << "| 8  | Kalkulator Bangun Datar |" << std::endl;
    std::cout << "| 9  | Kalkulator Bangun Ruang |" << std::endl;
    std::cout << "| 10 | Keluar                  |" << std::endl;
    std::cout << "+==============================+" << std::endl;
}

//cetak kalkulator biasa
void printMathCalculator(){
    std::cout << "+==============================+" << std::endl;
    std::cout << "|         KALKULATOR           |" << std::endl;
    std::cout << "+==============================+" << std::endl;
    std::cout << "| 1  | Penjumlahan             |" << std::endl;
    std::cout << "| 2  | Pengurangan             |" << std::endl;
    std::cout << "| 3  | Perkalian               |" << std::endl;
    std::cout << "| 4  | Pembagian               |" << std::endl;
    std::cout << "| 5  | Modulus                 |" << std::endl;
    std::cout << "| 6  | Pangkat                 |" << std::endl;
    std::cout << "| 7  | Faktorial               |" << std::endl;
    std::cout << "| 8  | Akar                    |" << std::endl;
    std::cout << "| 0  | Kembali                 |" << std::endl;
    std::cout << "+==============================+" << std::endl;
}

//cetak kalkulator kombinatorial
void printCombinatoryCalculator(){
    std::cout << "+==============================+" << std::endl;
    std::cout << "|         KOMBINATORIAL        |" << std::endl;
    std::cout << "+==============================+" << std::endl;
    std::cout << "| 1  | Permutasi               |" << std::endl;
    std::cout << "| 2  | Kombinasi               |" << std::endl;
    std::cout << "| 0  | Kembali                 |" << std::endl;
    std::cout << "+==============================+" << std::endl;
}

//cetak kalkulator konversi suhu
void printTemperatureCalculator(){
    std::cout << "+==============================+" << std::endl;
    std::cout << "|             SUHU             |" << std::endl;
    std::cout << "+==============================+" << std::endl;
    std::cout << "| 1  | Celcius                 |" << std::endl;
    std::cout << "| 2  | Fahrenheit              |" << std::endl;
    std::cout << "| 3  | Reamur                  |" << std::endl;
    std::cout << "| 4  | Kelvin                  |" << std::endl;
    std::cout << "| 0  | Kembali                 |" << std::endl;
    std::cout << "+==============================+" << std::endl;
}

//cetak kalkulator konversi jarak
void printDistanceCalculator(){
    std::cout << "+==============================+" << std::endl;
    std::cout << "|             JARAK            |" << std::endl;
    std::cout << "+==============================+" << std::endl;
    std::cout << "| 1  | Centimeter              |" << std::endl;
    std::cout << "| 2  | Meter                   |" << std::endl;
    std::cout << "| 3  | Inch                    |" << std::endl;
    std::cout << "| 4  | Kilometer               |" << std::endl;
    std::cout << "| 5  | Mil                     |" << std::endl;
    std::cout << "| 6  | Yard                    |" << std::endl;
    std::cout << "| 7  | Feet                    |" << std::endl;
    std::cout << "| 0  | Kembali                 |" << std::endl;
    std::cout << "+==============================+" << std::endl;
}

//cetak kalkulator konversi waktu
void printTimeConversionCalculator(){
    std::cout << "+==============================+" << std::endl;
    std::cout << "|             WAKTU            |" << std::endl;
    std::cout << "+==============================+" << std::endl;
    std::cout << "| 1  | Detik                   |" << std::endl;
    std::cout << "| 2  | Menit                   |" << std::endl;
    std::cout << "| 3  | Jam                     |" << std::endl;
    std::cout << "| 4  | Hari                    |" << std::endl;
    std::cout << "| 5  | Minggu                  |" << std::endl;
    std::cout << "| 6  | Bulan                   |" << std::endl;
    std::cout << "| 7  | Tahun                   |" << std::endl;
    std::cout << "| 0  | Kembali                 |" << std::endl;
    std::cout << "+==============================+" << std::endl;
}

//cetak kalkulator konversi mata uang
void printCurrencyConversionCalculator(){
    std::cout << "+==============================+" << std::endl;
    std::cout << "|          MATA UANG           |" << std::endl;
    std::cout << "+==============================+" << std::endl;
    std::cout << "| 1  | Rupiah                  |" << std::endl;
    std::cout << "| 2  | Yen                     |" << std::endl;
    std::cout << "| 3  | Dollar Amerika          |" << std::endl;
    std::cout << "| 4  | Ringgit                 |" << std::endl;
    std::cout << "| 5  | Euro                    |" << std::endl;
    std::cout << "| 6  | Dinar                   |" << std::endl;
    std::cout << "| 7  | Yuan                    |" << std::endl;
    std::cout << "| 0  | Kembali                 |" << std::endl;
    std::cout << "+==============================+" << std::endl;
}

//cetak kalkulator Jenis Bilangan
void printEvenOddPrimeCalculator(){
    std::cout << "+==============================+" << std::endl;
    std::cout << "|        JENIS BILANGAN        |" << std::endl;
    std::cout << "+==============================+" << std::endl;
    std::cout << "| 1  | Bilangan Ganjil         |" << std::endl;
    std::cout << "| 2  | Bilangan Genap          |" << std::endl;
    std::cout << "| 3  | Bilangan Prima          |" << std::endl;
    std::cout << "| 4  | Bilangan Komposit       |" << std::endl;
    std::cout << "| 0  | Kembali                 |" << std::endl;
    std::cout << "+==============================+" << std::endl;
}

//cetak kalkulator bangun datar
void printFlatBuildCalculator(){
    std::cout << "+==============================+" << std::endl;
    std::cout << "|         BANGUN DATAR         |" << std::endl;
    std::cout << "+==============================+" << std::endl;
    std::cout << "| 1  | Persegi                 |" << std::endl;
    std::cout << "| 2  | Persegi Panjang         |" << std::endl;
    std::cout << "| 3  | Segitiga Sama Sisi      |" << std::endl;
    std::cout << "| 4  | Segitiga Sama Kaki      |" << std::endl;
    std::cout << "| 5  | Segitiga Siku Siku      |" << std::endl;
    std::cout << "| 6  | Segitiga Sembarang      |" << std::endl;
    std::cout << "| 7  | Lingkaran               |" << std::endl; 
    std::cout << "| 8  | Jajar Genjang           |" << std::endl;
    std::cout << "| 9  | Trapesium               |" << std::endl;
    std::cout << "| 10 | Belah Ketupat           |" << std::endl;
    std::cout << "| 11 | Layang-Layang           |" << std::endl;
    std::cout << "| 0  | Kembali                 |" << std::endl;
    std::cout << "+==============================+" << std::endl;
}

//cetak kalkulator bangun ruang
void printSpaceBuildCalculator(){
    std::cout << "+==============================+" << std::endl;
    std::cout << "|         BANGUN RUANG         |" << std::endl;
    std::cout << "+====+=========================+" << std::endl;
    std::cout << "| 1  | Kubus                   |" << std::endl;
    std::cout << "| 2  | Balok                   |" << std::endl;
    std::cout << "| 3  | Bola                    |" << std::endl;
    std::cout << "| 4  | Tabung                  |" << std::endl;
    std::cout << "| 5  | Kerucut                 |" << std::endl;
    std::cout << "| 6  | Limas segiempat         |" << std::endl;
    std::cout << "| 7  | Limas segitiga          |" << std::endl;
    std::cout << "| 8  | Prisma segiempat        |" << std::endl;
    std::cout << "| 9  | Prisma segitiga         |" << std::endl;
    std::cout << "| 10 | Limas segiempat teratur |" << std::endl;
    std::cout << "| 11 | Limas segitiga teratur  |" << std::endl;
    std::cout << "| 12 | Prisma segiempat teratur|" << std::endl;
    std::cout << "| 13 | Prisma segitiga teratur |" << std::endl;
    std::cout << "| 0  | Kembali                 |" << std::endl;
    std::cout << "+==============================+" << std::endl;
}

//cetak opsi kalkulator bangun datar
void printChooseOptionFlatBuild(){
    std::cout << "+==============================+" << std::endl;
    std::cout << "|   PERHITUNGAN BANGUN DATAR   |" << std::endl;
    std::cout << "+==============================+" << std::endl;
    std::cout << "| 1  | Keliling                |" << std::endl;
    std::cout << "| 2  | Luas                    |" << std::endl;
    std::cout << "| 0  | Kembali                 |" << std::endl;
    std::cout << "+==============================+" << std::endl;
}

//cetak opsi kalkulator bangun ruang
void printChooseOptionSpaceBuild(){
    std::cout << "+==============================+" << std::endl;
    std::cout << "|   PERHITUNGAN BANGUN RUANG   |" << std::endl;
    std::cout << "+==============================+" << std::endl;
    std::cout << "| 1  | Keliling                |" << std::endl;
    std::cout << "| 2  | Luas Permukaan          |" << std::endl;
    std::cout << "| 3  | Volume                  |" << std::endl;
    std::cout << "| 0  | Kembali                 |" << std::endl;
    std::cout << "+==============================+" << std::endl;
}