#include <iostream>
using namespace std;
void modNumberIteratif(int i){
    int limit = 100;
    for (i = 1; i <= limit; i++){
        if (i % 5 == 0 && i % 7 == 0){
            cout << i << endl;
        }
    }
}
int main(){
    int i;
    modNumberIteratif(i);
    system("pause");
    return 0;
}