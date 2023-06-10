#include <iostream>
using namespace std;
void insertionSort(int values[], int size){
    int key;
    int j;
    for (int i = 1; i < size; i++){
        key = values[i];
        j = i-1;
        while (j >= 0 && values[j] > key){
            values[j+1] = values[j];
            j = j-1;
        }
        values[j+1] = key;
    }
}
void selectionSort(int values[], int size){
    for (int i = 0; i < size; i ++){
        for (int j = i+1; j < size; j++){
            if (values[i] > values[j]){
                swap(values[i], values[j]);
            }
        }
    }
}

void printArray(int values[], int size){
    for (int i = 0; i < size; i++){
            cout << values[i] << " ";
    }
}

void inputArray(int values[], int size){
    for (int i = 0; i < size; i++){
        cout << "Data[" << i << "] : ";
        cin >> values[i];
    }
}

int main(){
    int size;
    cout << "Masukkan jumlah data: ";
    cin >> size;
    int values[size];
    inputArray(values, size);
    cout << "Data sebelum sorting: " << endl;
    printArray(values, size);
    cout << endl;
    cout << "1. Insertion Sort" << endl;
    cout << "2. Selection Sort" << endl;
    cout << "Pilih metode sorting: ";
    int choice;
    cin >> choice;
    if (choice == 1){
        cout << "Data setelah sorting dengan cara insertion sort:" << endl;
        insertionSort(values, size);
    } else if (choice == 2){
        cout << "Data setelah sorting dengan cara selection sort:" << endl;
        selectionSort(values, size);
    } else {
        cout << "Pilihan tidak tersedia" << endl;
    }
    printArray(values, size);
    return 0;
}