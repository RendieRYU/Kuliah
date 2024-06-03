#include <iostream>
#include <algorithm>

using namespace std;

void CoinExchange(int C[], int n, int A) {
    int S[100] = {0};  // Asumsikan maksimal 100 koin dalam solusi
    int numCoins = 0;  // Jumlah koin dalam S
    int totalValue = 0;  // Total nilai koin dalam S

    // Mengurutkan koin secara descending berdasarkan nilai
    sort(C, C + n, greater<int>());

    while (totalValue < A && n > 0) {
        int x = C[0];  // Koin dengan nilai terbesar
        n--;  // Menghapus koin x dari C

        if (totalValue + x <= A) {
            S[numCoins++] = x;
            totalValue += x;
        }

        // Mengurutkan kembali C setelah menghapus koin x
        sort(C, C + n, greater<int>());
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
    int A = 15;  // Target nilai

    CoinExchange(C, n, A);

    return 0;
}