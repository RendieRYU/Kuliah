#include <iostream>
using namespace std;

double pangkat(double a, int n) {
    double hasil = 1;
    for (int i = 1; i <= n; i++) {
        hasil *= a;
    }
    return hasil;
}

int main() {
    double a;
    int n;
    cout << "Masukkan nilai a: ";
    cin >> a;
    cout << "Masukkan nilai n: ";
    cin >> n;
    double hasil = pangkat(a, n);
    cout << "Hasil " << a << "^" << n << " = " << hasil << endl;
    return 0;
}