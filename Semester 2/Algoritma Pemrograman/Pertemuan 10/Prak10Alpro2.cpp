#include <bits/stdc++.h>
using namespace std;
class node{
    public:
        int data;
        node *next;
};

int main(){
    //langkah satu
    node *baru = NULL;
    baru = new node;
    baru->data = 5;
    baru->next = NULL;
    cout << "Isi data node baru adalah : " << baru->data << endl;
    
    //langkah dua
    node *lain = NULL;
    lain = new node;
    lain->data = 6;
    lain->next = NULL;
    cout << "Isi data node lain adalah : " << lain->data << endl;
    
    //langkah tiga : menyambung rantai
    baru->next = lain;
    cout << "Isi data node lain dicetak dari node baru adalah : " << baru->next->data << endl;
    
    //langkah empat
    node *head = baru;
    cout << "Mencetak node pertama dari pointer head : " << head->data << endl;
    cout << "Mencetak node kedua dari pointer head : " << head->next->data << endl;
    
    //langkah lima : pointer yang jalan - jalan
    cout << "Menggunakan perulangan untuk mencetak setap data pada rantai" << endl;
    node *jalan = head;
    int i = 1;
    while(jalan != NULL){
        cout << "Data ke-" << i << " : " << jalan->data << endl;
        jalan = jalan->next;
        i++;
    }

    //langkah enam : bukti bahwa pointer kepala tidak kehilangan data
    cout << "Mencetak node pertama dari pointer head : " << head->data << endl;
    cout << "Mencetak node kedua dari pointer head : " << head->next->data << endl;
}