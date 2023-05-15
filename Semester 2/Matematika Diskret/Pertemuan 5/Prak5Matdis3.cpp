#include <iostream>
#include <string>
using namespace std;

//Fungsi untuk menampilkan watermark
void watermark(){
    cout<<"+=================================+" << endl;
    cout<<"| Nama   : Rendie Abdi Saputra    |" << endl;
    cout<<"| NIM    : 2200018094             |" << endl;
    cout<<"| Prodi  : Informatika            |" << endl;
    cout<<"| Kelas  : A                      |" << endl;
    cout<<"| Slot   : Selasa 10.30           |" << endl;
    cout<<"+=================================+" << endl;
}

//Fungsi program yang akan diekesekusi
int main(){
    watermark();
    int jumlah;
    string f[100][100];
    string g[100][100];

    cout << "Masukkan jumlah f(x) : ";
    cin >> jumlah;

    cout << "Masukkan fungsi f -> x" << endl;
    for(int i = 1; i <= jumlah; i++){
        cout << "f(x) = ";
        cin >> f[0][i];

        cout << "x = ";
        cin >> f[i][0];
    }

    cout << "Masukkan fungsi g -> x" << endl;
    for(int i = 1; i <= jumlah; i++){
        cout << "g(x) = ";
        cin >> g[0][i];

        cout << "x = ";
        cin >> g[i][0];
    }

    
    system("cls"); //Fungsi untuk membersihkan layar
    watermark();
    cout << "f(x) = {";
    for(int i = 1; i <= jumlah; i++){
        cout << "(" << f[0][i] << ", " << f[i][0] << "), ";
    }
    cout << "}" << endl;
    
    cout << "g(x) = {";
    for(int i = 1; i <= jumlah; i++){
        cout << "(" << g[0][i] << ", " << g[i][0] << "), ";
    }
    cout << "}" << endl;

    cout << "f o g = {";
    for(int i = 1; i <= jumlah; i++){
        for (int j = 1; j <= jumlah; j++){
            if (f[i][0] == g[0][j]){
                cout << "(" << f[0][i] << ", " << g[i][0] << "), ";
            }
        }
    }
    cout << "}" << endl;
    return 0;
}