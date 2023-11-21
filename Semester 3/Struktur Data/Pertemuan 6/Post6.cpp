#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;

class Stack {
    vector<string> arr;
    int top;
public:
    Stack() : top(-1) {}
    void push(string data);
    void pop();
    void display();
};

void Stack::push(string data){
    vector<string> newArr(top + 2);
    for (int i = 0; i <= top; i++) {
        newArr[i] = arr[i];
    }
    newArr[++top] = data;
    arr = newArr;
    cout << "Memasukkan " << data << " ke dalam stack" << endl;
}

void Stack::pop(){
    if (top < 0) {
        cout << "stack kosong. Tidak bisa mengeluarkan elemen dari stack" << endl;
        return;
    }
    cout << "Mengeluarkan " << arr[top] << " dari stack" << endl;
    vector<string> newArr(top);
    for (int i = 0; i < top; i++) {
        newArr[i] = arr[i];
    }
    arr = newArr;
    top--;
}

void Stack::display() {
    if (top < 0) {
        cout << "stack kosong." << endl;
        return;
    }
    cout << "Elemen-elemen dalam stack dari atas ke bawah:" << endl;
    for (int i = top; i >= 0; i--) {
    cout << "            |          |" << endl;
        cout << left << "            |";
        if (arr[i].length() == 10){
            cout << arr[i];
        } else {
            if (arr[i].length() % 2 == 0){
                for(int j = 5; j > arr[i].length()/2; j--){
                    cout << " ";
                }
                cout << arr[i];
                for(int j = 5; j > arr[i].length()/2; j--){
                    cout << " ";
                }
            }
            else {
                for(int j = 4; j > arr[i].length()/2; j--){
                    cout << " ";
                }
                cout << arr[i];
                for(int j = 5; j > arr[i].length()/2; j--){
                    cout << " ";
                }
            }
        }
        cout << "|" << endl;
        cout << "            |__________|" << endl;
    }
}

int main() {
    Stack stack;
    int choose;
    do{
        cout << "+==================================+" << endl;
        cout << "|  Program  Data Nama Dalam Stack  |" << endl;
        cout << "+==================================+" << endl;
        cout << "| 1. Masukkan Data  (Push)         |" << endl;
        cout << "| 2. Hapus Data     (Pop)          |" << endl;
        cout << "| 3. Tampilkan Data (Display)      |" << endl;
        cout << "| 4. Keluar         (Exit)         |" << endl;
        cout << "+==================================+" << endl;
        cout << "Pilih menu: ";
        cin >> choose;
        switch(choose){
            case 1: {
                string data;
                cout << "Masukkan data: ";
                cin >> data;
                stack.push(data);
                system("pause");
                system("cls");
                break;
            }
            case 2: {
                stack.pop();
                system("pause");
                system("cls");
                break;
            }
            case 3: {
                stack.display();
                system("pause");
                system("cls");
                break;
            }
            case 4: {
                cout << "Terima kasih telah menggunakan program ini" << endl;
                break;
            }
            default: {
                cout << "Pilihan tidak tersedia" << endl;
                system("pause");
                system("cls");
                break;
            }
        }
    } while(choose != 4);
    return 0;
}