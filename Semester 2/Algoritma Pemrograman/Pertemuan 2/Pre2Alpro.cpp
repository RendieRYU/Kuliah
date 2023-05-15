#include <iostream>
using namespace std;
int year;

void inputYear(){
    cout << "Masukkan tahun : ";
    cin >> year;
}
void processData(){
    if (year % 4 == 0){
        if (year % 100 == 0){
            if (year % 400 == 0){
                cout << year << " adalah tahun kabisat" << endl;
            } else {
                cout << year << " bukan tahun kabisat" << endl;
            }
        } else {
            cout << year << " adalah tahun kabisat" << endl;
        }
    } else {
        cout << year << " bukan tahun kabisat" << endl;
    }
}
int main(){
    inputYear();
    processData();
    system("pause");
    return 0;
}