#include <iostream>
#include <iomanip> 

using namespace std;

class Matdis{
    public:
        void pilih();
        void inputValue();
        void watermark();
        void permutasi();
        void kombinasi();
        int faktorial(int value);
        void repeat();
    private:
        char wm;
        char again;
        int choose;
        int value;
        int hasil;
        int n;
        int r;

};

void Matdis::watermark(){
    wm = 3;
    for (int i = 0; i < 2; i++){
        for(int j = 0; j < 21; j++){
            cout << wm << " ";
        }
        cout << endl;
    }
    cout << wm << " " << wm << "  Program Permutasi dan Kombinasi  " << wm << " " << wm << endl;
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
    cout << wm << " " << wm << "  Pertemuan : 8                    " << wm << " " << wm << endl;
    for (int i = 0; i < 2; i++){
        for(int j = 0; j < 21; j++){
            cout << wm << " ";
        }
        cout << endl;
    }
    cout << endl;
}

void Matdis::inputValue(){
    cout << "Masukkan nilai n: ";
    while(!(cin >> n)){
        cout << "Input yang anda masukkan salah! Mohon masukkan bilangan." << endl;
        cin.clear();
        cin.ignore();
        cout << "Masukkan nilai n: ";
    }
    cout << "Masukkan nilai r: ";
    while(!(cin >> r)){
        cout << "Input yang anda masukkan salah! Mohon masukkan bilangan." << endl;
        cin.clear();
        cin.ignore();
        cout << "Masukkan nilai r: ";
    }
}

void Matdis::pilih(){
    system("cls");
    watermark();
    for (int i = 0; i < 2; i++){
        for(int j = 0; j < 11; j++){
            cout << wm << " ";
        }
        cout << endl;
    }
    cout << wm << " " << wm << " 1. Permutasi  " << wm << " " << wm << endl;
    cout << wm << " " << wm << " 2. Kombinasi  " << wm << " " << wm << endl;
    cout << wm << " " << wm << " 3. Exit       " << wm << " " << wm << endl;
    for (int i = 0; i < 2; i++){
        for(int j = 0; j < 11; j++){
            cout << wm << " ";
        }
        cout << endl;
    }
    cout << "Pilihan anda: ";
    cin >> choose;
    switch (choose){
        case 1:
            system("cls");
            watermark();
            for (int i = 0; i < 2; i++){
                for(int j = 0; j < 9; j++){
                    cout << wm << " ";
                }
                cout << endl;
            }
            cout << wm <<  " " << wm << " PERMUTASI " << wm << " " << wm << endl;
            for (int i = 0; i < 2; i++){
                for(int j = 0; j < 9; j++){
                    cout << wm << " ";
                }
                cout << endl;
            }
            inputValue();
            permutasi();
            break;
        case 2:
            system("cls");
            watermark();
            for (int i = 0; i < 2; i++){
                for(int j = 0; j < 9; j++){
                    cout << wm << " ";
                }
                cout << endl;
            }
            cout << wm <<  " " << wm << " KOMBINASI " << wm << " " << wm << endl;
            for (int i = 0; i < 2; i++){
                for(int j = 0; j < 9; j++){
                    cout << wm << " ";
                }
                cout << endl;
            }
            inputValue();
            kombinasi();
            break;
        case 3:
            cout << "Terima kasih telah menggunakan program ini" << endl;
            break;
        default:
            cout << "Masukkan inputan sesuai pilihan yang tersedia" << endl;
            pilih();
            break;
    }
}

void Matdis::permutasi(){
    if (r > n){
        cout << "Nilai r harus lebih kecil dari n" << endl;
        system("pause");
        inputValue();
    }
    if (r < n){
        hasil = faktorial(n) / faktorial(n - r);
        cout << "P(" << n << ", " << r << ") " << endl;
        cout << setw(7) << n << "!"<< endl;
        cout << "= ";
        for (int i = 0; i < 10; i++){
            cout << static_cast<char>(196);
        }
        cout << endl;
        cout << "   (" << n << " - " << r << ")!"<< endl;
        cout << endl;
        cout << setw(4) << n << "!" << endl;
        cout << "= ";
        for (int i = 0; i < 4; i++){
            cout << static_cast<char>(196);
        }
        cout << endl;
        cout << "   " << n - r << "!" << endl;
        cout << endl;
        cout << "  ";
        for (int i = n; i >= n-r; i--){
            if (i > n - r)
                cout << i << " x ";
            if (i == n - r)
                cout << "\033[9m" << i << "!" << "\033[m";
        }
        cout << endl;
        cout << "= ";
        for (int i = 0; i < 15; i++){
            cout << static_cast<char>(196);
        }
        cout << endl;
        cout << "    " << "\033[9m" << n-r << "!" << "\033[m" << endl;
        cout << endl;
        cout << "= ";
        for (int i = n; i >= n-r; i--){
            if (i > n-r)
                cout << i << " x ";
            if (i == n-r)
                cout << i;
        }
        cout << endl;
        cout << "= " << hasil << endl;
        cout << "Hasil dari " << n << " permutasi " << r << " = " << hasil << endl; 
        repeat();
    }
}

void Matdis::kombinasi(){
    int nTemp = 1;
    int rTemp = 1;
    if (r > n){
        cout << "Nilai r harus lebih kecil dari n" << endl;
        inputValue();
    }
    if (r < n){
        hasil = faktorial(n) / (faktorial(r) * faktorial(n - r));
        cout << "C(" << n << ", " << r << ") " << endl;
        cout << setw(9) << n << "!"<< endl;
        cout << "= ";
        for (int i = 0; i < 15; i++){
            cout << static_cast<char>(196);
        }
        cout << endl;
        cout << "   (" << n << " - " << r << ")! x " << r << "!" << endl;
        cout << endl;
        cout << setw(7) << n << "!" << endl;
        cout << "= ";
        for (int i = 0; i < 9; i++){
            cout << static_cast<char>(196);
        }
        cout << endl;
        cout << "   " << n - r << "! x " << r << "!" << endl;
        cout << endl;
        cout << "  ";
        for (int i = n; i >= r; i--){
            if (i > r)
                cout << i << " x ";
            if (i == r)
                cout << "\033[9m" << i << "!" << "\033[m";
        }
        cout << endl;
        cout << "= ";
        for (int i = 0; i < 10; i++){
            cout << static_cast<char>(196);
        }
        cout << endl;
        cout << "   " << n - r << "! x " << "\033[9m" << r << "!" << "\033[m" << endl;
        cout << endl;
        cout << "  ";
        for (int i = n; i >= r + 1; i--){
            if (i > r + 1)
                cout << i << " x ";
            if (i == r + 1)
                cout << i;
        }
        cout << endl;
        cout << "= ";
        for (int i = 0; i < 6; i++){
            cout << static_cast<char>(196);
        }
        cout << endl;
        cout << "  ";
        for(int i = n-r; i >= 1; i--){
            if(i > 1)
                cout << i << " x ";
            if (i == 1)
                cout << i;
        }
        cout << endl;
        for (int i = n; i >= r + 1; i--){
            nTemp *= i;
        }
        cout << "   " << nTemp;
        cout << endl;
        cout << "= ";
        for (int i = 0; i < 4; i++){
            cout << static_cast<char>(196);
        }
        cout << endl;
        for (int i = n-r; i >= 1; i--){
            rTemp *= i;
        }
        cout << "   " << rTemp;
        cout << endl;
        cout << "= " << hasil << endl;
        cout << "Hasil dari " << n << " kombinasi " << r << " = " << hasil << endl;
        repeat();
    }
}

int Matdis::faktorial(int value){
    if (value == 1 || value == 0){
        return 1;
    }
    else{
        return value * faktorial(value - 1);
    }
}

void Matdis::repeat(){
    cout << "Apakah anda ingin mengulang program? (y/n): ";
    cin >> again;
    if (again == 'y' || again == 'Y'){
        pilih();
    }
    if (again == 'n' || again == 'N'){
        cout << "Terima kasih telah menggunakan program ini." << endl;
    }
}

int main(){
    Matdis matdis;
    matdis.pilih();
    return 0;
}