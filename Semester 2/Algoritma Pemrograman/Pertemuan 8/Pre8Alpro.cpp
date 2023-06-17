#include <bits/stdc++.h>
using namespace std;

void inputArray(int array[][3]){
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            cout << "Array [" << i << "][" << j << "] : ";
            cin >> array[i][j];
        }
    }
}

void arrayJoin(int array1[][3], int array2[][3], int array1D[]){
    int index = 0;
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            array1D[index++] = array1[i][j];
        }
    }
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            array1D[index++] = array2[i][j];
        }
    }
}

void printArray(int array1D[], int size){
    for (int i = 0; i < size; i++){
        cout << array1D[i] << " ";
    }
}

void sortArray(int array1D[], int size){
    for (int i = 0; i < size; i ++){
        for (int j = i+1; j < size; j++){
            if (array1D[i] > array1D[j]){
                swap(array1D[i], array1D[j]);
            }
        }
    }      
}

int main(){
    int firstArray[3][3];
    int secondArray[3][3];
    int array1D[18];
    cout << "Masukkan array pertama : " << endl;
    inputArray(firstArray);
    cout << "Masukkan array kedua : " << endl;
    inputArray(secondArray);
    arrayJoin(firstArray, secondArray, array1D);
    cout << "hasil penggabungan 2 array 2 dimensi menjadi 1 array 1 dimensi : ";
    printArray(array1D, 18);
    cout << endl;
    sortArray(array1D, 18);
    cout << "hasil penggabungan 2 array 2 dimensi menjadi 1 array 1 dimensi setelah di sorting: ";
    printArray(array1D, 18);
}
