#include <bits/stdc++.h>
using namespace std;

void inputArray(int array[][3], int maks){
    for (int i = 0; i < maks; i++){
        for (int j = 0; j < maks; j++){
            cout << "Array [" << i << "][" << j << "] : ";
            cin >> array[i][j];
        }
    }
}

void arrayJoin(int array1[][3], int array2[][3], int array1D[], int maks){
    int index = 0;
    for (int i = 0; i < maks; i++){
        for (int j = 0; j < maks; j++){
            array1D[index++] = array1[i][j];
        }
    }
    for (int i = 0; i < maks; i++){
        for (int j = 0; j < maks; j++){
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

void printMatriks(int array[][3], int maks){
    for (int i = 0; i < maks; i++){
        cout << "| ";
        for (int j = 0; j < maks; j++){
            cout << array[i][j] << " ";
        }
        cout << "|" << endl;
    }
    cout << endl;
}

void printArray1D(int array[], int size){
    cout << "{ ";
    for (int i = 0; i < size; i++){
        if (i == size - 1)
            cout << array[i] << " }";
        else
            cout << array[i] << ", ";
    }
    
}

int main(){
    int maks = 3;
    int firstArray[3][3];
    int secondArray[3][3];
    int array1D[1];
    cout << "Array Pertama" << endl;
    inputArray(firstArray, maks);
    cout << endl << endl;  
    cout << "Array Kedua" << endl;
    inputArray(secondArray, maks);
    cout << endl << endl;
    cout << "Matriks Array Pertama" << endl;
    printMatriks(firstArray, maks);
    cout << endl << endl;
    cout << "Matriks Array Kedua" << endl;
    printMatriks(secondArray, maks);
    cout << endl << endl;
    arrayJoin(firstArray, secondArray, array1D, maks);
    cout << "Hasil Gabung Array Pertama dan Kedua" << endl;
    printArray(array1D, 18);
    cout << endl << endl;
    cout << "Array 1 Dimensi" << endl;
    printArray1D(array1D, 18);
    cout << endl << endl;
    sortArray(array1D, 18);
    cout << "Hasil Gabung Array Pertama dan Kedua Setelah di Sorting" << endl;
    printArray(array1D, 18);
    cout << endl << endl;
    cout << "Array 1 Dimensi setelah di sorting" << endl;
    printArray(array1D, 18);
    cout << endl << endl;;
    return 0;
}