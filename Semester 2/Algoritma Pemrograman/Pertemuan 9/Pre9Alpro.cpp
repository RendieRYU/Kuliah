#include <bits/stdc++.h>
using namespace std;

int main(){
    int maksIndex1 = 3;
    int maksIndex2 = 3;
    int array2D[maksIndex1][maksIndex2];
    int array1D[maksIndex1 * maksIndex2];
    int sizeArray = sizeof(array2D) / sizeof(array2D[0][0]);
    int index = 0;

    for (int i = 0; i < maksIndex1; i++){
        for (int j = 0; j < maksIndex2; j++){
            cout << "Masukkan Array indeks[" << i << "][" << j << "] : ";
            cin >> array2D[i][j];
        }
    }
    cout << endl;
    cout << "Menampilkan array 2 dimensi..." << endl;
    for (int i = 0; i < maksIndex1; i++){
        for (int j = 0; j <maksIndex2; j++){
            cout << array2D[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
    cout << "Konversi matriks ke array 1 dimensi..." << endl;
    for (int i = 0; i < maksIndex1; i++){
        for (int j = 0; j <maksIndex2; j++){
            array1D[index++] = array2D[i][j];
        }
    }

    for (int i = 0; i < sizeArray; i++){
        cout << array1D[i] << " ";
    }
    cout << endl << endl;

    cout << "Mengurutkan array 1 dimensi..." << endl;
    for (int i = 0; i < sizeArray; i++){
        for (int j = i + 1; j < sizeArray; j++){
            if (array1D[i] > array1D[j]){
                int temp = array1D[i];
                array1D[i] = array1D[j];
                array1D[j] = temp;
            }
        }
    }

    for (int i = 0; i < sizeArray; i++){
        cout << array1D[i] << " ";
    }
    cout << endl << endl;

    cout << "Mengembalikan ke array 2 dimensi..." << endl;
    index = 0;
    for (int i = 0; i < maksIndex1; i++){
        for (int j = 0; j < maksIndex2; j++){
            array2D[i][j] = array1D[index++];
        }
    }
    for (int i = 0; i < maksIndex1; i++){
        for (int j = 0; j < maksIndex2; j++){
            cout << array2D[i][j] << " ";
        }
        cout << endl;
    }
}