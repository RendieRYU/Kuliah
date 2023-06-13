#include <iostream> // Rendie Abdi Saputra
#include <conio.h> // 2200018094
using namespace std;

int faktorial(int value){
    if (value == 0 || value == 1){
        return 1;
    } else {
        return value * faktorial(value - 1);
    }
}

void outputPermutasi(int arr[], int n) {
    // Mencari indeks terbesar i sehingga arr[i] < arr[i + 1]
    int i = n - 2;
    while (i >= 0 && arr[i] >= arr[i + 1]) {
        i--;
    }

    // Jika tidak ada indeks seperti itu, permutasi tidak mungkin
    if (i < 0) {
        return;
    }

    // Mencari indeks terkecil j yang lebih besar dari i sehingga arr[j] > arr[i]
    int j = n - 1;
    while (arr[j] <= arr[i]) {
        j--;
    }

    // Menukar arr[i] dengan arr[j]
    swap(arr[i], arr[j]);

    // Membalik semua elemen setelah indeks i
    int r = i + 1;
    int s = n - 1;
    while (r < s) {
        swap(arr[r], arr[s]);
        r++;
        s--;
    }
}


int main(){
    int a[100];
    int number;
    int n;
    int r;
    int N;
    int R;
    int result;

    cout << "------------------------------" << endl;
    cout << " PROGRAM MENGHITUNG PERMUTASI " << endl;
    cout << "   oleh Rendie Abdi Saputra   " << endl;
    cout << "------------------------------" << endl;
    cout << "Masukkan nilai n : ";
    cin >> n;

    for (int i = 0; i < n; i++){
        cout << "Masukkan nilai himpunan A[" << i + 1 << "] : ";
        cin >> a[i];
    }

    cout << "Masukkan nilai r : ";
    cin >> r;

    N = faktorial(n);
    R = faktorial(n - r);
    result = N / R;
    cout << "Nilai permutasi : " << result << endl;
    cout << "Tekan enter untuk melihat hasil generate permutasi..." << endl;
    cin.ignore();
    cin.get();
    number = 1;
    //buatkan hasil dari generate permutasinya
    for (int i = 0; i < result; i++){
        cout << number << ". ";
        for (int j = 0; j < r; j++){
            cout << a[j] << " ";
        }
        cout << endl;
        number++;
        outputPermutasi(a, n);
    }
}