#include <iostream>
using namespace std;

int main(){
    string nama = "Rendie Abdi Saputra";
    int length = 0;
    while(nama[length] != '\0'){
        length++;
    }
    cout << "Panjang string " << nama << " = " << length;
}