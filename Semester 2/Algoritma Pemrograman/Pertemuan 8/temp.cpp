#include <iostream>
#include <iomanip>
using namespace std;
struct barang{
    int id;
    string nama;
    int stok;
    int price;
}; barang b[100];
int main(){
    b[0] = {1, "Logitech", 5, 130000};
    b[1] = {2, "Acer", 3, 100000};
    b[2] = {3, "Asus", 2, 150000};
    b[3] = {4, "Lenovo", 4, 120000};
    b[4] = {5, "HP", 1, 110000};

    for(int i = 0; i < 60; i++){
        cout << static_cast<char>(196);
    }
    cout << endl;
    cout << left << setw(2) << "|" << setw(3) << "Id" << setw(2) << "|" << setw(30) << "Nama Barang" << setw(2) << "|" << setw(5) << "Stok" << setw(2) << "|" << setw(13) << "Harga Satuan" << "|" << endl;
    for(int i = 0; i < 60; i++){
        cout << static_cast<char>(196);
    }
    cout << endl;
    for(int i = 0; i < 5; i++){
        cout << left << setw(2) << "|" << setw(3) << b[i].id << setw(2) << "|" << setw(30) << b[i].nama << setw(2) << "|" << setw(5) << b[i].stok << setw(2) << "|" << setw(13) << b[i].price << "|" << endl;
            for(int j = 0; j < 60; j++){
                cout << static_cast<char>(196);
            }
            cout << endl;
    }

}