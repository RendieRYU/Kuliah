#include <iostream>
#include <conio.h>
using namespace std;
void watermark(){
    string wm;
    wm = 6;
    for (int i = 0; i < 2; i++){
        for(int j = 0; j < 21; j++){
            cout << wm << " ";
        }
        cout << endl;
    }
    cout << wm << " " << wm << "  Program Mencari Bilangan Prima   " << wm << " " << wm << endl;
    for (int i = 0; i < 2; i++){
        for(int j = 0; j < 21; j++){
            cout << wm << " ";
        }
        cout << endl;
    }
    cout << wm << " " << wm << "  Nama      : Rendie Abdi Saputra  " << wm << " " << wm << endl;
    cout << wm << " " << wm << "  NIM       : 2200018094           " << wm << " " << wm << endl;
    cout << wm << " " << wm << "  Kelas     : A                    " << wm << " " << wm << endl;
    cout << wm << " " << wm << "  Praktikum : Matematika Diskrit   " << wm << " " << wm << endl;
    cout << wm << " " << wm << "  Slot      : Selasa 10.30         " << wm << " " << wm << endl;
    cout << wm << " " << wm << "  Pertemuan : 7                    " << wm << " " << wm << endl;
    for (int i = 0; i < 2; i++){
        for(int j = 0; j < 21; j++){
            cout << wm << " ";
        }
        cout << endl;
    }
}

int main(){
    int x;
    int a;
    int b;
    char i;
    b = 1;

    i1:
    system("cls");
    watermark();
    cout << "PROGRAM UNTUK MEMERIKSA BILANGAN PRIMA" << endl << endl;
    cout << "Masukkan bilangan yang akan diperiksa: ";
    cin >> x;
    for (a = 2; a <= x-1; a++){
        if (x % a == 0){
            b = 0;
            break;
        }
    }
    if (b == 1){
        cout << x << " Merupakan Bilangan Prima";
    }
    else{
        cout << x << " Bukan Bilangan Prima";
    }
    
    if (b == 0)
    cout << endl;
    cout << endl;
    cout << endl;

    cout << "Ulangi (y/n): ";
    cin >> i;
    if (i == 'y' || i == 'Y')
        goto i1;
    else 
        cout << "Terimakasih";
}