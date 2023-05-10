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
        cout << setw(80);
        for(int j = 0; j < 21; j++){
            cout << wm << " ";
        }
        cout << endl;
    }
    cout << setw(80) << wm << " " << wm << "      Program Kalkulator FPB       " << wm << " " << wm << endl;
    for (int i = 0; i < 2; i++){
        cout << setw(80);
        for(int j = 0; j < 21; j++){
            cout << wm << " ";
        }
        cout << endl;
    }
    cout << setw(80) << wm << " " << wm << "  Nama      : Rendie Abdi Saputra  " << wm << " " << wm << endl;
    cout << setw(80) << wm << " " << wm << "  NIM       : 2200018094           " << wm << " " << wm << endl;
    cout << setw(80) << wm << " " << wm << "  Kelas     : A                    " << wm << " " << wm << endl;
    cout << setw(80) << wm << " " << wm << "  Praktikum : Matematika Diskrit   " << wm << " " << wm << endl;
    cout << setw(80) << wm << " " << wm << "  Slot      : Selasa 10.30         " << wm << " " << wm << endl;
    cout << setw(80) << wm << " " << wm << "  Pertemuan : 6                    " << wm << " " << wm << endl;
    for (int i = 0; i < 2; i++){
        cout << setw(80);
        for(int j = 0; j < 21; j++){
            cout << wm << " ";
        }
        cout << endl;
    }
    cout << endl;
}

//fungsi untuk menginputkan nilai fpb
void count::inputValue(){
    cout << setw(93) << "Menghitung FPB" << endl;
    cout << setw(106) << "Masukan Bilangan Pertama : ";
    cin >> a;
    cout << setw(106) << "Masukan Bilangan Kedua   : ";
    cin >> b;
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
    cout << setw(84);
    for(int i = 0; i < 17; i++){
        cout << wm << " ";
    }
    cout << endl;
    cout << setw(84) << wm << " Hasil" << setw(26) << wm << endl;
    cout << setw(84) << wm << " Bilangan Pertama" << setw(11) << " : " << a << "  " << wm << endl;
    cout << setw(84) << wm << " Bilangan Kedua" << setw(13) << " : " << b << "  " << wm << endl;
    cout << setw(84) << wm << " FPB" << setw(24) << " : " << fpb.process(a,b) << "  " << wm << endl;
    cout << setw(84);
    for(int i = 0; i < 17; i++){
        cout << wm << " ";
    }
    cout << endl << endl;    
}

//fungsi untuk menampilkan teks keluar dari program
void count::exit(){
    cout << endl;
    cout << setw(72);
    for(int i = 0; i < 29; i++){
        cout << wm << " ";
    }
    cout << endl;
    cout << setw(72) << wm << " Terima kasih telah menggunakan program kalkulator FPB " << wm << endl;
    cout << setw(72);
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
        cout << setw(117) << "Apakah ingin mengulang program (y/n) : ";
        cin >> repeat;
        if (repeat == 'y' || repeat == 'Y'){
            system("cls");
        }
    } while(repeat == 'y' || repeat == 'Y');
    fpb.exit();
    return 0;
}