#include <iostream>
using namespace std;

void selectionSort(int a[], int n) {
    int i, j, imaks, temp;

    for (i = n - 1; i > 0; i--) {
        imaks = 0;
        for (j = 1; j <= i; j++) {
            if (a[j] > a[imaks]) {
                imaks = j;
            }
        }
        temp = a[i];
        a[i] = a[imaks];
        a[imaks] = temp;
    }
}

int main() {
    int n;
    cout << "Masukkan jumlah elemen: ";
    cin >> n;

    int a[n];
    cout << "Masukkan elemen-elemen: ";
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    selectionSort(a, n);

    cout << "Array setelah diurutkan: ";
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    cout << endl;

    return 0;
}