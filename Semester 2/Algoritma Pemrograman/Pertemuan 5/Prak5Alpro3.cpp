#include <iostream>

using namespace std;


int fibonaciRekursif(int n){
    if (n == 0){
        return 0;
    } else if (n == 1){
        return 1;
    } else {
        return fibonaciRekursif(n - 1) + fibonaciRekursif(n - 2);
    }
}
int fibonaciIteratif(int n){
    int fibo[n];
    fibo[0] = 0;
    fibo[1] = 1;
    for (int i = 2; i <= n; i++){
        fibo[i] = fibo[i - 1] + fibo[i - 2];
    }
    return fibo[n];
}
int main(){
    int n;
    cout << "Masukkan nilai n: ";
    cin >> n;
    cout << "Hasil fibonaci rekursif: " << fibonaciRekursif(n) << endl;
    cout << "Hasil fibonaci iteratif: " << fibonaciIteratif(n) << endl;
    return 0;
}