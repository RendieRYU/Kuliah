#include <iostream>
using namespace std;

int main() {
    int a, b, c, d, p;
    int faktor1=1, faktor2=1, kpk=1, fpb=1;
    
    cout << "Masukkan pilihan anda?\n";
    cout << "1. Menentukan KPK\n";
    cout << "2. Menentukan FPB\n";
    cout << "3. Exit\n";
    cin >> p;
    
    switch (p) {
        case 1:
            cout << "Menghitung KPK\n";
            cout << "Masukan Bilangan Pertama: ";
            cin >> a;
            cout << "Masukan Bilangan Kedua: ";
            cin >> b;
            
            if (a > b) {
                if (a % b == 0) {
                    for (c = 0; c <= a; c++) {
                        if (a % c == 0)
                            continue;
                        else
                            faktor1 = c;
                    }
                    
                    for (d = 0; d <= b; d++) {
                        if (b % d == 0)
                            continue;
                        else
                            faktor2 = d;
                    }
                } else {
                    kpk = a;
                }
            } else {
                if (b % a) {
                    for (d = 0; d <= a; d++) {
                        if (b % d == 0)
                            continue;
                        else
                            faktor1 = d;
                    }
                    
                    for (c = 0; c <= b; c++) {
                        if (a % c == 0)
                            continue;
                        else
                            faktor2 = c;
                    }
                } else {
                    kpk = b;
                }
            }
            kpk = faktor1 * faktor2;
            cout << "Bilangan pertama: " << a << endl;
            cout << "Bilangan kedua: " << b << endl;
            cout << "KPK: " << kpk << endl;
            break;
            
        case 2:
            cout << "Menghitung FPB\n";
            cout << "Masukan Bilangan pertama: ";
            cin >> a;
            cout << "Masukan bilangan kedua: ";
            cin >> b;
            
            if (a > b) {
                if (b % a) {
                    for (c = 0; c >= a; c--) {
                        if (c % a == 0) {
                            faktor1 = c;
                        }
                    }
                    
                    for (d = 0; d >= b; d--) {
                        if (d % b == 0) {
                            faktor2 = d;
                        }
                    }
                } else {
                    fpb = b;
                }
            } else {
                if (a % b) {
                    for (c = 0; c >= b; c--) {
                        if (c % a == 0) {
                            faktor1 = c;
                        }
                    }
                    
                    for (d = 0; d >= a; d--) {
                        if (d % b == 0) {
                            faktor2 = d;
                        }
                    }
                } else {
                    fpb = a;
                }
            }
            
            fpb = faktor1 * faktor2;
            cout << "Bilangan pertama: " << a << endl;
            cout << "Bilangan kedua: " << b << endl;
            cout << "FPB: " << fpb << endl;
            break;
            
        case 3:
            cout << "Exit Now !!!\n";
            break;
            
        default:
            cout << "Error !!!";
    }
    
    return 0;
}
