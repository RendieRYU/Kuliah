#include <iostream>
using namespace std;
double absolut(double x);
void watermark();

//Fungsi program yang akan dieksekusi
main(){
    watermark();
    float nilai;
    nilai = -123.45;
    cout << nilai <<" Nilai mutlaknya adalah " << absolut(nilai);
}

//Fungsi untuk memutlakan nilai negatif
double absolut(double x){
    if (x < 0){
        x = -x;
    }
    return x;
}

//Fungsi untuk menampilkan watermark
void watermark(){
    cout<<"+=================================+" << endl;
    cout<<"| Nama   : Rendie Abdi Saputra    |" << endl;
    cout<<"| NIM    : 2200018094             |" << endl;
    cout<<"| Prodi  : Informatika            |" << endl;
    cout<<"| Kelas  : A                      |" << endl;
    cout<<"| Slot   : Selasa 10.30           |" << endl;
    cout<<"+=================================+" << endl;
}