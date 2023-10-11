#include <iostream>
using namespace std;

class Number {
private:
    int number;
public:
    Number(int num) : number(num) {}

    void reverseIterative() {
        int temp = number;
        if(number > 99999){
            cout << "Melebihi batas maksimal";
            return;
        }
        while (temp != 0) {
            int digit = temp % 10;
            cout << digit;
            temp /= 10;
        }
    }

    void reverseRecursive(int num = -1) {
        if(num == -1)
            num = number;
        
        if(num > 99999){
            cout << "Melebihi batas maksimal";
            return;
        }
        
        if (num == 0)
            return;

        int digit = num % 10;
        cout << digit;

        reverseRecursive(num / 10);
    }
};

int main() {
    int number;
    cout << "Masukkan angka (maks.5) : ";
    cin >> number;
    Number num(number);
    cout << "Iterative: ";
    num.reverseIterative();
    cout << "\nRecursive: ";
    num.reverseRecursive();
    
    return 0;
}
