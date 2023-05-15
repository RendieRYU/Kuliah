#include <iostream>
using namespace std;

int modNumberRekursif(int i){
    int limit = 100;
    if (i <= limit){
        if (i % 5 == 0 && i % 7 == 0){
            cout << i << endl;
        }
        return modNumberRekursif(i + 1);
    }
    return i;
}

int main(){
    int i;
    i = 1;
    modNumberRekursif(i);
    system("pause");
    return 0;
}