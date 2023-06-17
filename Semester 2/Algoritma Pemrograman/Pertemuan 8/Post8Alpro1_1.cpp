#include <bits/stdc++.h>
using namespace std;
int main(){
    //Deklarasi dan inisialisasi variable yang digunakan
    int maks = 3;
    int firstArray[maks][maks];
    int secondArray[maks][maks];
    int sizeFirstArray = sizeof(firstArray) / sizeof(firstArray[0][0]);
    int sizeSecondArray = sizeof(secondArray) / sizeof(secondArray[0][0]);
    int sizeArray1D = sizeFirstArray + sizeSecondArray;
    int array1D[sizeArray1D];
    int index = 0;
    
    //input array pertama
    cout << "Masukkan array pertama : " << endl;
    for (int i = 0; i < maks; i++){
        for (int j = 0; j < maks; j++){
            cout << "Array [" << i << "][" << j << "] : ";
            cin >> firstArray[i][j];
        }
    }
    cout << endl;
    
    //input array kedua
    cout << "Masukkan array kedua : " << endl;
    for (int i = 0; i < maks; i++){
        for (int j = 0; j < maks; j++){
            cout << "Array [" << i << "][" << j << "] : ";
            cin >> secondArray[i][j];
        }
    }
    cout << endl;

    //output array pertama dalam bentuk matriks
    cout << "Matriks Array Pertama" << endl;
    for (int i = 0; i < maks; i++){
        cout << "| ";
        for (int j = 0; j < maks; j++){
            cout << firstArray[i][j] << " ";
        }
        cout << "|" << endl;
    }
    cout << endl;
    
    //output array kedua dalam bentuk matriks
    cout << "Matriks Array Kedua:" << endl;
    for (int i = 0; i < maks; i++){
        cout << "| ";
        for (int j = 0; j < maks; j++){
            cout << secondArray[i][j] << " ";
        }
        cout << "|" << endl;
    }
    cout << endl;

    //proses penggabungan 2 array 2 dimensi menjadi 1 array 1 dimensi
    for (int i = 0; i < maks; i++){
        for (int j = 0; j < maks; j++){
            array1D[index++] = firstArray[i][j];
        }
    }
    for (int i = 0; i < maks; i++){
        for (int j = 0; j < maks; j++){
            array1D[index++] = secondArray[i][j];
        }
    }

    //output array 1 dimensi
    cout << "Hasil Gabung Array Pertama dan Kedua" << endl;
    for(int i = 0; i < sizeArray1D; i++){
        cout << "Array [" << i << "] : " << array1D[i] <<endl;
    }
    cout << endl;

    //output array 1 dimensi dalam bentuk himpunan
    cout << "Array 1 Dimensi" << endl;
    cout << "{ ";
    for (int i = 0; i < sizeArray1D; i++){
        if (i == sizeArray1D - 1)
            cout << array1D[i] << " }";
        else
            cout << array1D[i] << ", ";
    }
    cout << endl << endl;

    //sorting array 1 dimensi
    for (int i = 0; i < sizeArray1D; i ++){
        for (int j = i+1; j <= sizeArray1D; j++){
            if (array1D[i] > array1D[j]){
                swap(array1D[i], array1D[j]);
            }
        }
    }

    //output array 1 dimensi setelah di sorting
    cout << "Hasil Gabung Array Pertama dan Kedua Setelah di Sorting" << endl;
    for(int i = 0; i < sizeArray1D; i++){
        cout << "Array [" << i << "] : " << array1D[i] <<endl;
    }
    cout << endl;

    //output array 1 dimensi setelah di sorting dalam bentuk himpunan
    cout << "Array 1 Dimensi Setelah di Sorting" << endl;
    cout << "{ ";
    for (int i = 0; i < sizeArray1D; i++){
        if (i == sizeArray1D - 1)
            cout << array1D[i] << " }";
        else
            cout << array1D[i] << ", ";
    }
    cout << endl << endl;
}