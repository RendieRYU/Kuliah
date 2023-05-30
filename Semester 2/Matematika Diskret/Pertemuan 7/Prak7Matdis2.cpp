#include <iostream>
#include <cstdlib>
#include <string.h>
#define maks 500
using namespace std;

class Enkripsi{
    public:
        void input();
        void enkripsi();
        void dekripsi();
        void output();
    private:
        char chiper[maks];
        int key;
        char plain[maks];
};

void Enkripsi::input(){
    cout << "Masukkan kata : ";
    cin.getline(chiper, sizeof(chiper));
    cout << "Masukkan key  : ";
    cin >> key;
    cout << endl;
}

void Enkripsi::enkripsi(){
    for (int i = 0; i < strlen(chiper); i++){
        cout << chiper[i] << "(" << int (chiper[i]) << ")";
        chiper[i] = (chiper[i] + key) % 128;
    }
}

void Enkripsi::dekripsi(){
    for (int i = 0; i < strlen(chiper); i++){
        plain[i] = (chiper[i] - key) % 128;
        chiper[i] = plain[i];
    }
}

void Enkripsi::output(){
    for (int i = 0; i < strlen(chiper); i++){
        cout << chiper[i];
    }
}

int main(){
    Enkripsi enkripsi;
    enkripsi.input();
    enkripsi.enkripsi();
    cout << endl;
    cout << "Hasil Enkripsi : ";
    enkripsi.output();
    cout << endl;
    enkripsi.dekripsi();
    cout << "Hasil Dekripsi : ";
    enkripsi.output();
    cout << endl;
    return 0;
}