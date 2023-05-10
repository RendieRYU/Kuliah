#include <iostream>
#include <iomanip>
using namespace std;

//Fungsi Watermark
void watermark(){
    string wlee;
    wlee = 6;
    for (int i = 0; i < 2; i++){
        for(int j = 0; j < 21; j++){
            cout << wlee << " ";
        }
        cout << endl;
    }
    cout << wlee << " " << wlee << "  Program Kalkulator KPK dan FPB   " << wlee << " " << wlee << endl;
    for (int i = 0; i < 2; i++){
        for(int j = 0; j < 21; j++){
            cout << wlee << " ";
        }
        cout << endl;
    }
    cout << wlee << " " << wlee << "  Nama      : Rendie Abdi Saputra  " << wlee << " " << wlee << endl;
    cout << wlee << " " << wlee << "  NIM       : 2200018094           " << wlee << " " << wlee << endl;
    cout << wlee << " " << wlee << "  Kelas     : A                    " << wlee << " " << wlee << endl;
    cout << wlee << " " << wlee << "  Praktikum : Matematika Diskrit   " << wlee << " " << wlee << endl;
    cout << wlee << " " << wlee << "  Slot      : Selasa 10.30         " << wlee << " " << wlee << endl;
    cout << wlee << " " << wlee << "  Pertemuan : 6                    " << wlee << " " << wlee << endl;
    for (int i = 0; i < 2; i++){
        for(int j = 0; j < 21; j++){
            cout << wlee << " ";
        }
        cout << endl;
    }
}

int main(){
    int a, b, c;
    int choose;
    int kpk;
    int fpb;
    bool repeat = true;
    string hooh;
    hooh = 6;

    do{
        watermark();
        cout << "Masukan Pilihan anda ?" << endl;
        cout << "1. Menentukan KPK" << endl;
        cout << "2. Menentukan FPB" << endl;
        cout << "3. Exit" << endl;
        cout << "Pilihan anda : ";
        cin >> choose;
        
        switch(choose){
            case 1: //KPK
                //Input nilai
                cout << "Menghitung KPK" << endl;
                cout << "Masukan Bilangan Pertama : ";
                cin >> a;
                cout << "Masukan Bilangan Kedua   : ";
                cin >> b;

                //Proses Perhitungan
                if (a > b) {
                    c = a;
                }
                else {
                    c = b;
                }
                while(true){
                    if (c % a == 0 && c % b == 0) {
                        kpk = c;
                        break;
                    }
                    c++;
                }

                //Hasil perhitungan
                for(int i = 0; i < 17; i++){
                    cout << hooh << " ";
                }
                cout << endl;
                cout << hooh << " Hasil" << setw(26) << hooh << endl;
                cout << hooh << " Bilangan Pertama" << setw(11) << " : " << a << "  " << hooh << endl;
                cout << hooh << " Bilangan Kedua" << setw(13) << " : " << b << "  " << hooh << endl;
                cout << hooh << " KPK" << setw(24) << " : " << kpk << "  " << hooh << endl;
                for(int i = 0; i < 17; i++){
                    cout << hooh << " ";
                }
                cout << endl;

                //pause & clear
                system("pause");
                system("cls");
                break;
            
            case 2: //FPB
                //Input nilai
                cout << "Menghitung FPB" << endl;
                cout << "Masukan Bilangan Pertama : ";
                cin >> a;
                cout << "Masukan Bilangan Kedua   : ";
                cin >> b;

                //Proses Perhitungan
                while(true){
                    if (a % b == 0) {
                        fpb = b;
                        break;
                    }
                    c = a % b;
                    a = b;
                    b = c;
                }

                //Hasil perhitungan
                for(int i = 0; i < 17; i++){
                    cout << hooh << " ";
                }
                cout << endl;
                cout << hooh << " Hasil" << setw(26) << hooh << endl;
                cout << hooh << " Bilangan Pertama" << setw(11) << " : " << a << "  " << hooh << endl;
                cout << hooh << " Bilangan Kedua" << setw(13) << " : " << b << "  " << hooh << endl;
                cout << hooh << " FPB" << setw(24) << " : " << fpb << "  " << hooh << endl;
                for(int i = 0; i < 17; i++){
                    cout << hooh << " ";
                }
                cout << endl;
                
                //ubah ke dalam bentuk fungsi rekursif
               

                //pause & clear
                system("pause");
                system("cls");
                break;

            case 3: //Exit
                for(int i = 0; i < 33; i++){
                    cout << hooh << " ";
                }
                cout << endl;
                cout << hooh << " Terima kasih telah menggunakan program kalkulator KPK dan FPB " << hooh << endl;
                for(int i = 0; i < 33; i++){
                    cout << hooh << " ";
                }
                cout << endl;
                repeat = false;
                break;
            
            default: //Error
                cout << "Pilihan anda tidak ada" << endl;
                system("pause");
                system("cls");
                break;
        }
    } while(repeat);
    return 0;
}