#include <iostream>
#include <iomanip>
using namespace std;

class count{
    public:
        void watermark();
        void inputValue();
        int process(int a, int b);
        void outputValue();
        void exit();
    private:
        int a;
        int b;
        string wm;
}; count fpb;

//fungsi untuk menampilkan watermark
void count::watermark(){
    wm = 5;
    for (int i = 0; i < 2; i++){
        for(int j = 0; j < 21; j++){
            cout << wm << " ";
        }
        cout << endl;
    }
    cout << wm << " " << wm << "      Program Kalkulator FPB       " << wm << " " << wm << endl;
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
    cout << wm << " " << wm << "  Pertemuan : 6                    " << wm << " " << wm << endl;
    for (int i = 0; i < 2; i++){
        for(int j = 0; j < 21; j++){
            cout << wm << " ";
        }
        cout << endl;
    }
    cout << endl;
}

//fungsi untuk menginputkan nilai fpb
void count::inputValue(){
    cout << "Menghitung FPB" << endl;
    cout << "Masukan Bilangan Pertama : ";
    while(!(cin >> a)){
        cout << "Input yang anda masukkan salah! Mohon masukkan bilangan." << endl;
        cin.clear();
        cin.ignore();
    }
    cout << "Masukan Bilangan Kedua   : ";
    while(!(cin >> b)){
        cout << "Input yang anda masukkan salah! Mohon masukkan bilangan." << endl;
        cin.clear();
        cin.ignore();
    }
    cout << endl;
}

//fungsi untuk memproses fpb secara rekursif
int count::process(int a, int b){
    if (b == 0){
        return a;
    }
    else{
        return process(b, a % b);
    }
}

//fungsi untuk mengoutputkan nilai fpb
void count::outputValue(){
    for(int i = 0; i < 17; i++){
        cout << wm << " ";
    }
    cout << endl;
    cout << wm << " Hasil" << setw(26) << wm << endl;
    cout << wm << " Bilangan Pertama" << setw(11) << " : " << a << "  " << wm << endl;
    cout << wm << " Bilangan Kedua" << setw(13) << " : " << b << "  " << wm << endl;
    cout << wm << " FPB" << setw(24) << " : " << fpb.process(a,b) << "  " << wm << endl;
    for(int i = 0; i < 17; i++){
        cout << wm << " ";
    }
    cout << endl << endl;    
}

//fungsi untuk menampilkan teks keluar dari program
void count::exit(){
    cout << endl;
    for(int i = 0; i < 29; i++){
        cout << wm << " ";
    }
    cout << endl;
    cout << wm << " Terima kasih telah menggunakan program kalkulator FPB " << wm << endl;
    for(int i = 0; i < 29; i++){
        cout << wm << " ";
    }
    cout << endl << endl;
}

main(){
    char repeat;
    do{
        fpb.watermark();
        fpb.inputValue();
        fpb.outputValue();
        cout << "Apakah ingin mengulang program (y/n) : ";
        cin >> repeat;
        if (repeat == 'y' || repeat == 'Y'){
            system("cls");
        }
    } while(repeat == 'y' || repeat == 'Y');
    fpb.exit();
    return 0;
}