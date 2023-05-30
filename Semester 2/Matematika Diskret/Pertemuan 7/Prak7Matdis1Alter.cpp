#include <iostream>
using namespace std;
class prime{
    public:
        void watermark();
        void process();
        void inputValue();
        void outputValue();
        bool checkPrime(int value);
        void repeat(char agains);
    private:
        int value;
        char again;
        string wm;
};

void prime::watermark(){
    wm = 6;
    for (int i = 0; i < 2; i++){
        for(int j = 0; j < 21; j++){
            cout << wm << " ";
        }
        cout << endl;
    }
    cout << wm << " " << wm << "  Program Mencari Bilangan Prima   " << wm << " " << wm << endl;
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
    cout << wm << " " << wm << "  Pertemuan : 7                    " << wm << " " << wm << endl;
    for (int i = 0; i < 2; i++){
        for(int j = 0; j < 21; j++){
            cout << wm << " ";
        }
        cout << endl;
    }
}

void prime::inputValue(){
    cout << "Masukkan nilai : ";
    cin >> value;
}

bool prime::checkPrime(int value){
    if (value <= 1)
        return false;
    for (int i = 2; i < value; i++){
        if (value % i == 0)
            return false;
    }
    return true;
}

void prime::outputValue(){
    if (checkPrime(value))
        cout << value << " adalah bilangan prima" << endl;
    else
        cout << value << " bukan bilangan prima" << endl;
}

void prime::repeat(char agains){
    cout << "Apakah anda ingin mengulang ? (y/n) : ";
    cin >> again;
    if (again == 'y' || again == 'Y'){
        system("cls");
        watermark();
        process();
    }
    else if (again == 'n' || again == 'N'){
        for(int i = 0; i < 33; i++){
            cout << wm << " ";
        }
        cout << endl;
        cout << wm << " Terima kasih telah menggunakan program kalkulator KPK dan FPB " << wm << endl;
        for(int i = 0; i < 33; i++){
            cout << wm << " ";
        }
        cout << endl;
    }
    else{
        cout << "Inputan anda salah" << endl;
        repeat(again);
    }
}

void prime::process(){
    inputValue();
    outputValue();
    repeat(again);
}

int main(){
    prime p;
    p.watermark();
    p.process();
    return 0;
}