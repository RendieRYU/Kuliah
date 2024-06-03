#include <iostream>
using namespace std;

int cariElemenTerkecil(int arr[], int n) {
    int min = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] < min) {
            min = arr[i];
        }
    }
    return min;
}

int main() {
    int n;
    cout << "Masukkan jumlah elemen array: ";
    cin >> n;
    int arr[n];
    cout << "Masukkan elemen-elemen array: " << endl;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int min = cariElemenTerkecil(arr, n);
    cout << "Elemen terkecil dalam array adalah: " << min << endl;
    return 0;
}