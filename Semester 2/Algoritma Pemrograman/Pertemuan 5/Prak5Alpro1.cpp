#include <iostream>
using namespace std;

void ulang_rekursif(int n){
    if(n >= 1){
        ulang_rekursif(n-1);
        cout << n << " ";
    }
}
int main(){
    int n;
    cout << "Masukkan nilai n: ";
    cin >> n;
    ulang_rekursif(n);
    return 0;
}
