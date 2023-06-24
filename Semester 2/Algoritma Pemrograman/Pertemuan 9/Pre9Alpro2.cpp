#include <bits/stdc++.h>
using namespace std;

void inputArray(int array[][3], int size){
    for (int i = 0; i < size; i++){
        for (int j = 0; j < size; j++){
            cout << "Masukkan Array indeks[" << i << "][" << j << "] : ";
            cin >> array[i][j];
        }
    }
}

void printArray2D(int array[][3], int size){
    for (int i = 0; i < size; i++){
        for (int j = 0; j < size; j++){
            cout << array[i][j] << " ";
        }
        cout << endl;
    }
}

void convert2DTo1D(int array1D[], int array2D[][3], int size){
    int index = 0;
    for (int i = 0; i < size; i++){
        for (int j = 0; j <size; j++){
            array1D[index++] = array2D[i][j];
        }
    }
}

void printArray1D(int array[], int size){
    for (int i = 0; i < size; i++){
        cout << array[i] << " ";
    }
    cout << endl;
}

void sortArray(int array[], int size){
    for (int i = 0; i < size; i++){
        for (int j = i + 1; j < size; j++){
            if (array[i] > array[j]){
                int temp = array[i];
                array[i] = array[j];
                array[j] = temp;
            }
        }
    }
}

void convert1DTo2D(int array1D[], int array2D[][3], int size){
    int index = 0;
    for (int i = 0; i < size; i++){
        for (int j = 0; j <size; j++){
            array2D[i][j] = array1D[index++];
        }
    }
}

int main(){
    
    int array2D[3][3];
    int array1D[3*3];
    int sizeIndexArray2D = sizeof(array2D) / sizeof(array2D[0]);
    int sizeArray = sizeof(array2D) / sizeof(array2D[0][0]);
    
    //input array
    inputArray(array2D, sizeIndexArray2D);

    //print array 2d
    cout << "Menampilkan array 2 dimensi..." << endl;
    printArray2D(array2D, sizeIndexArray2D);
    
    //convert array 2d to array 1d
    cout << "Konversi matriks ke array 1 dimensi..." << endl;
    convert2DTo1D(array1D, array2D, sizeIndexArray2D);
    printArray1D(array1D, sizeArray);
    
    //sorting array 1d
    cout << "Mengurutkan array 1 dimensi..." << endl;
    sortArray(array1D, sizeArray);
    printArray1D(array1D, sizeArray);

    //convert array 1d to array 2d
    cout << "Mengembalikan ke array 2 dimensi..." << endl;
    convert1DTo2D(array1D, array2D, sizeIndexArray2D);
    printArray2D(array2D, sizeIndexArray2D);
    return 0;
}