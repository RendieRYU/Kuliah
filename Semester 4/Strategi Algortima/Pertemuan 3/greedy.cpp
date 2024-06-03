#include <iostream>


using namespace std;

void CoinExchange(int C[], int n, int A) {
    int S[100];  // Asumsikan maksimal 100 koin dalam solusi
    int numCoins = 0;  // Jumlah koin dalam S
    int totalValue = 0;  // Total nilai koin dalam S

    // Mengurutkan koin secara descending berdasarkan nilai dengan manual
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (C[i] < C[j]) {
                swap(C[i], C[j]);
            }
        }
    }

    // Iterasi untuk memilih koin yang akan dimasukkan ke S
    for (int i = 0; i < n; i++) {
        if (totalValue + C[i] <= A) {
            S[numCoins++] = C[i];
            totalValue += C[i];
        }
    }

    // Jika total nilai koin dalam S sama dengan A, tampilkan solusi
    if (totalValue == A) {
        cout << "Koin-koin yang dipilih: ";
        for (int i = 0; i < numCoins; i++) {
            cout << S[i] << " ";
        }
        cout << endl;
    }
    // Jika tidak ada solusi, tampilkan pesan error
    else {
        cout << "Tidak ada solusi" << endl;
    }
}

int main() {
    int C[] = {5, 10, 2, 1};  // Himpunan koin
    int n = sizeof(C) / sizeof(C[0]);  // Jumlah koin
    int A = 20;  // Target nilai

    CoinExchange(C, n, A);

    return 0;
}