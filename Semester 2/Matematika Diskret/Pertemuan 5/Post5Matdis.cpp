#include <iostream>
using namespace std;

class faktorial{
    public:
        void inputValue();
        void watermark();
        void process();
        int fak_rekursif(int n);
        int fak_iteratif(int n);

    private:
        int value;
        int total;
        int result;
        int choose;
};

main(){
    string again;
    faktorial fak;
    do{
        fak.watermark();
        fak.inputValue();
        fak.process();
        cout << endl;
        cout << "Hitung lagi? (y/n) : ";
        cin >> again;
        if (again == "y" || again == "Y"){
            system("cls");
        }
    } while (again == "y" || again == "Y");
    cout << "Terima kasih telah menggunakan program ini" << endl;
    return 0;
}

void faktorial::watermark(){
    cout<<"+=================================+" << endl;
    cout<<"| Nama   : Rendie Abdi Saputra    |" << endl;
    cout<<"| NIM    : 2200018094             |" << endl;
    cout<<"| Prodi  : Informatika            |" << endl;
    cout<<"| Kelas  : A                      |" << endl;
    cout<<"| Slot   : Selasa 10.30           |" << endl;
    cout<<"+=================================+" << endl;
}

void faktorial::inputValue(){
    cout << "Masukkan nilai : ";
    cin >> value;
}

void faktorial::process(){
    cout << "Pilih metode penghitungan" << endl;
    cout << "1. Rekursif" << endl;
    cout << "2. Iteratif" << endl;
    cout << "Pilihan : ";
    cin >> choose;
    switch (choose){
        case 1:
            cout << "Hasil dari " << value << "! yang dihitung menggunakan fungsi rekursif adalah " << fak_rekursif(value);
            break;
        case 2:
            cout << "Hasil dari " << value << "! yang dihitung menggunakan fungsi iteratif adalah " << fak_iteratif(value);
            break;
        default:
            cout << "Pilihan tidak tersedia" << endl;
            break;
    }
}

int faktorial::fak_rekursif(int n){
    if (n <= 1){
        return 1;
    } 
    else {
        result = n * fak_rekursif(n-1);
        return result;
    }
}

int faktorial::fak_iteratif(int n){
    result = 1;
    for (int i = 1; i <= n; i++){
        result = result * i;
    }
    return result;
}