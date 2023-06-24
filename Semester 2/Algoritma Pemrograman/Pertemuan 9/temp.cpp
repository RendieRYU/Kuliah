/*
Pada kamar Andi terdapat 24 buku tulis yang masih berantakan,
pada setiap buku tersebut terdapat angka untuk membedakan satu dengan yang lainnya.
Ia ingin buku-buku tersebut tertata rapi dan urut mulai dari angka yang paling kecil.
Lalu, menempatkan semua buku itu pada 4 rak yang berbeda.
Buatlah program di mana menampilkan angka-angka pada buku itu agar Andi mengingat letak buku yang tepat sesuai raknya.
*/

#include <iostream>
#include <algorithm>
#include <iomanip>
using namespace std;

void inputBook(int book[], int totalBook){
    for(int i = 0; i < totalBook; i++){
        cout << "Masukkan angka pada buku ke-" << i + 1 << ": "; 
        cin >> book[i];
    }
}

void sortBook(int book[], int totalBook){
    sort(book, book + totalBook);
}

void convert1DTo2D(int book1D[], int book2D[][6], int totalBook, int totalRack, int totalBookInRack){
    int index = 0;
    for (int i = 0; i < totalRack; i++){
        for (int j = 0; j < totalBookInRack; j++){
            book2D[i][j] = book1D[index++];
        }
    }
}

void printBook(int book2D[][6], int totalRack, int totalBookInRack){
    for(int i = 0; i < totalRack; i++){
        for(int j = 0; j < totalBookInRack; j++){
            cout << setw(4) << book2D[i][j];
        }
        cout << endl;
    }
}

int main(){
    const int totalBook = 24;
    int book[totalBook];
    int totalRack = 4;
    int totalBookInRack = totalBook / totalRack; 
    cout << "Anda memiliki " << totalBook << " buku. Silakan masukkan angka pada setiap buku.\n";
    inputBook(book, totalBook);
    sortBook(book, totalBook);
    int rackArr[4][6];
    convert1DTo2D(book, rackArr, totalBook, totalRack, totalBookInRack);
    printBook(rackArr, totalRack, totalBookInRack);
    
    return 0;
}