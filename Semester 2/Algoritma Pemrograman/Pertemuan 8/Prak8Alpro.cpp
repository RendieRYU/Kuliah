#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <iomanip>
using namespace std;

class Matriks{
    friend ostream& operator<<(ostream&, Matriks&);
    friend istream& operator>>(istream&, Matriks&);
    public:
        void bacaMatriks();
        void matriksJumlah(const Matriks&, const Matriks&);
        void matriksKali(const Matriks&, const Matriks&);
        void cetakMatriks();
    private:
        int matriks[10][10];
        int baris, kolom;
};
void Matriks::bacaMatriks(){
    for(int i = 0; i < baris; i++){
        for(int j = 0; j < kolom; j++){
            cout << "Data [" << i + 1 << ", " << j + 1 << "] : ";
            cin >> matriks[i][j];
        }
    }
}
void Matriks::matriksJumlah(const Matriks& m1, const Matriks& m2){
    baris = m1.baris;
    kolom = m1.kolom;
    for(int i=0; i<baris; i++){
        for(int j=0; j<kolom; j++){
            matriks[i][j] = m1.matriks[i][j] + m2.matriks[i][j];
        }
    }
}
void Matriks::matriksKali(const Matriks& m1, const Matriks& m2){
    baris = m1.baris;
    kolom = m2.kolom;
    for(int i=0; i<baris; i++){
        for(int j=0; j<kolom; j++){
            matriks[i][j] = 0;
            for(int k=0; k<m1.kolom; k++){
                matriks[i][j] += m1.matriks[i][k] * m2.matriks[k][j];
            }
        }
    }
    cetakMatriks();
}
void Matriks::cetakMatriks(){
    for(int i=0; i<baris; i++){
        for(int j=0; j<kolom; j++){
            cout << setw(5) << matriks[i][j];
        }
        cout << endl;
    }
}

istream& operator >> (istream& in, Matriks& m){
    cout << "Masukkan jumlah baris : ";
    cin >> m.baris;
    cout << "Masukkan jumlah kolom : ";
    cin >> m.kolom;
    cout << "Masukkan data matriks : " << endl;
    m.bacaMatriks();
    cout << "Matriks yang dibuat : " << endl;
    m.cetakMatriks();
    return in;
}

ostream& operator << (ostream& out, Matriks& m){
    for(int i=0; i<m.baris; i++){
        for(int j=0; j<m.kolom; j++){
            cout << setw(5) << m.matriks[i][j];
        }
        cout << endl;
    }
    return out;
}

int main(){
    Matriks matriks1, matriks2, jumlah;
    cout << "Masukkan matriks pertama : " << endl;
    cin >> matriks1;
    cout << "Masukkan matriks kedua : " << endl;
    cin >> matriks2;
    cout << "Hasil penjumlahan matriks : " << endl;
    jumlah.cetakMatriks();
    jumlah.matriksJumlah(matriks1, matriks2);
    cout << "Hasil perkalian matriks : " << endl;
    jumlah.cetakMatriks();
    jumlah.matriksKali(matriks1, matriks2);
    getch();
    return 0;
}