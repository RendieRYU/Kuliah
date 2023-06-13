#include <bits/stdc++.h>
using namespace std;

class Permutasi{
    public:
        void watermark();
        void inputValue();
        void outputValue();
        int faktorial(int value);
        int countResult(int n, int r);
    private:
        char wm;
        int n;
        int r;
        int a[100];
        int result;
        int number;
};

void Permutasi::watermark(){
    wm = 176;
    for (int i = 0; i < 2; i++){
        for(int j = 0; j < 21; j++){
            cout << wm << " ";
        }
        cout << endl;
    }
    cout << wm << " " << wm << "     Program Permutasi Lanjutan    " << wm << " " << wm << endl;
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
    cout << wm << " " << wm << "  Pertemuan : 9                    " << wm << " " << wm << endl;
    for (int i = 0; i < 2; i++){
        for(int j = 0; j < 21; j++){
            cout << wm << " ";
        }
        cout << endl;
    }
    cout << endl;
}

void Permutasi::inputValue(){
    cout << "Masukkan nilai n: ";
    cin >> n;
    for (int i = 0; i < n; i++){
        cout << "Masukkan nilai a[" << i + 1 << "] : ";
        cin >> a[i];
    }
    cout << "Masukkan nilai r: ";
    cin >> r;
}

int Permutasi::countResult(int n, int r){
    result = faktorial(n) / faktorial(n - r);
    return result;
}

void Permutasi::outputValue(){
    cout << "Hasil permutasi dari " << n << " dan " << r << " adalah " << countResult(n, r) << endl;
    cout << "Tekan enter untuk menampilkan hasil generate permutasi...";
    cin.ignore();
    cin.get();
    number = 1;
    cout << "Hasil generate permutasi: " << endl;
    for (int i = 0; i < result; i++){
        cout << number << ". ";
        for(int j = 0; j < r; j++){
            cout << a[j] << " ";
        }
        cout << endl;
        number++;
        next_permutation(a, a + n);
    }
}

int Permutasi::faktorial(int value){
    if (value == 0 || value == 1){
        return 1;
    } else {
        return value * faktorial(value - 1);
    }
}

int main(){
    Permutasi permutasi;
    permutasi.watermark();
    permutasi.inputValue();
    permutasi.outputValue();
    return 0;
}

