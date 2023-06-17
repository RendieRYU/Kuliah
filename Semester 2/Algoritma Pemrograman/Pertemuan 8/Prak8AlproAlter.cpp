#include <iostream>
#include <iomanip>
using namespace std;

class Matriks{
    public:
        void pilihan();
        void inputMatriks();
        void bacaMatriks();
        void matriksJumlah();
        void matriksKali();
        void cetakMatriks();
        void repeat();
    private:
        int matriks[10][10];
        int baris, kolom;
        char again;
};
void Matriks::pilihan(){
    int pilih;
    cout << "1. Input Matriks" << endl;
    cout << "2. Baca Matriks" << endl;
    cout << "3. Penjumlahan Matriks" << endl;
    cout << "4. Perkalian Matriks" << endl;
    cout << "Pilih : ";
    cin >> pilih;
    switch(pilih){
        case 1:
            inputMatriks();
            break;
        case 2:
            bacaMatriks();
            break;
        case 3:
            matriksJumlah();
            break;
        case 4:
            matriksKali();
            break;
        default:
            cout << "Pilihan tidak tersedia" << endl;
    }
}
void Matriks::inputMatriks(){
    for (int i = 0 ; i < 2; i++){
        cout << "Masukkan jumlah baris : ";
        cin >> baris;
        cout << "Masukkan jumlah kolom : ";
        cin >> kolom;
        bacaMatriks();
    }

}

void Matriks::bacaMatriks(){
    for(int i = 0; i < baris; i++){
        for(int j = 0; j < kolom; j++){
            cout << "Data [" << i + 1 << ", " << j + 1 << "] : ";
            cin >> matriks[i][j];
        }
    }
}
void Matriks::matriksJumlah(){
    Matriks m1, m2;
    m1.inputMatriks();
    m2.inputMatriks();
    baris = m1.baris;
    kolom = m1.kolom;
    for(int i=0; i<baris; i++){
        for(int j=0; j<kolom; j++){
            matriks[i][j] = m1.matriks[i][j] + m2.matriks[i][j];
        }
    }
}
void Matriks::matriksKali(){
    Matriks m1, m2;
    m1.inputMatriks();
    m2.inputMatriks();
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
void Matriks::repeat(){
    cout << "Apakah anda ingin mengulang? (y/n) : ";
    cin >> again;
    if(again == 'y' || again == 'Y'){
        pilihan();
        repeat();
    }
}
int main(){
    Matriks m;
    m.inputMatriks();
    return 0;
}