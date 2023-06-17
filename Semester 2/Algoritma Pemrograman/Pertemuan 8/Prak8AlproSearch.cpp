#include <bits/stdc++.h>
using namespace std;

void search(int values[], int searchKey, int size){
    int result = -1;
    for (int i = 0; i < size; i++){
        if (values[i] == searchKey){
            result = i;
            break;
        }
    }
    if (result == -1){
        cout << "Tidak ditemukan";
    }
    else{
        cout << "Ditemukan di indeks ke - " << result + 1;
    }
}

void selectionSort(int value[], int size){
    for (int i = 0; i < size; i ++){
        for (int j = i+1; j <= size; j++){
            if (value[i] > value[j]){
                swap(value[i], value[j]);
            }
        }
    }
    for (int i = 0; i < size; i++){
        cout << value[i] << " ";
    }                   
}

int main(){
    int values[6] = {11, 2, 15, 1, 9, 7};
    int key;
    int size = sizeof(values) / sizeof(values[0]);

    selectionSort(values, size);
    cout << endl;
    cout << "Kunci ";
    cin >> key;
    search(values, key, size);
}