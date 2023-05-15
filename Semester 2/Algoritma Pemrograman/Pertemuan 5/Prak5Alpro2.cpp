#include <iostream>
using namespace std;

long faktorial(int n){
    if (n == 0){
        return 1;
    } else {
        if (n > 2){
            cout << n << " x ";
        }
        if (n == 1){
            cout << n << " = ";
        }
        return n * faktorial(n - 1);
    }
    
}
int main(){
    int n;
    cout << "Masukkan nilai n: ";
    cin >> n;
    cout << "!" << n << " = " << faktorial(n);
    return 0;
}
