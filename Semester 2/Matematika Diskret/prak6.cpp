#include <iostream>
#include <conio.h>

using namespace std;

int main() {
    int a, b, c, d;
    int p;
    int faktor1 = 1, faktor2 = 1, kpk = 1, fpb = 1;
    
    cout << "Masukan Pilihan anda ?\n";
    cout << "1. Menentukan KPK\n";
    cout << "2. Menentukan FPB\n";
    cout << "3. Exit\n";
    cin >> p;
    
    switch (p) {
        case 1:
            cout << "Menghitung KPK\n";
            cout << "Masukan Bilangan Pertama : \n";
            cin >> a;
            cout << "Masukan Bilangan Kedua : \n";
            cin >> b;
            
            if (a > b) {
                if (a % b) {
                    for (c = 0; c <= a; c++) {
                        if (a % c); // lanjutkan
                        else faktor1 = c;
                    }
                    for (d = 0; d <= b; d++) {
                        b % d;
                        if (b % d); // lanjutkan
                        else faktor2 = d;
                    }
                } else kpk = a;
            } else {
                if (b % a) {
                    for (d = 0; d <= a; d++) {
                        if (b % d); // lanjutkan
                        else faktor1 = d;
                    }
                    for (c = 0; c <= b; c++) {
                        if (a % c); // lanjutkan
                        else faktor2 = c;
                    }
                } else kpk = b;
            }
            
            fpb = faktor1 * faktor2;
            cout << "Bilangan pertama : " << a << endl;
            cout << "Bilangan kedua : " << b << endl;
            cout << "KPK : " << fpb << endl;
            break;
        
        case 2:
            cout << "Menghitung FPB\n";
            cout << "Masukan Bilangan pertama : \n";
            cin >> a;
            cout << "Masukan bilangan kedua : \n";
            cin >> b;
            
            if (a > b) {
                if (b % a) {
                    for (c = 0; c >= a; c--) {
                        if (c % a); // lanjutkan
                        else faktor1 = c;
                    }
                    for (d = 0; d >= b; d--) {
                        b % d;
                        if (d % b); // lanjutkan
                        else faktor2 = d;
                    }
                } else fpb = a;
            } else {
                if (a % b) {
                    for (d = 0; d >= a; d--) {
                        if (d % b); // lanjutkan
                        else faktor1 = d;
                    }
                    for (c = 0; c >= b; c--) {
                        if (c % a); // lanjutkan
                        else faktor2 = c;
                    }
                } else fpb = b;
            }
            
            fpb = faktor1 * faktor2;
            cout << "Bilangan pertama : " << a << endl;
            cout << "Bilangan kedua : " << b << endl;
            cout << "FPB : " << fpb << endl;
            break;
        
        case 3:
            cout << "Exit Now !!!\n";
            break;
        
        default:
            cout << "Error !!!\n";
    }
    
    getch();
    return 0;
}
