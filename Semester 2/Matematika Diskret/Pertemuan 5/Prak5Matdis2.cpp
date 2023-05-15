#include <iostream>
using namespace std;
long int fak_rekursif(int n);
void watermark();

//Fungsi program yang akan dieksekusi
main(){
    watermark();
    int n;
    n = 5;
    cout << n << " faktorial = " << fak_rekursif(n);
}

//Fungsi untuk menghitung faktorial secara rekursif
long int fak_rekursif(int n){
    long int f;
    if (n <= 1){
        return 1;
    } 
    else {
        f = n * fak_rekursif(n-1);
        return f;
    }
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