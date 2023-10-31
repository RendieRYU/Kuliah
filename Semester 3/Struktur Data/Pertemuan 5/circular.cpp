#include<iostream>
using namespace std;

// 1. Membuat struktur untuk node dalam circular linked list
struct Node {
    int data;
    Node* next;
};

// 2. Membuat pointer yang akan menunjuk elemen terakhir dalam list
Node* last = NULL;

// Fungsi untuk menambahkan node baru di awal
void addToStart(int data) {
    Node* newNode = new Node();   // Membuat node baru
    newNode->data = data;

    if (last == NULL) {  // Jika list kosong
        last = newNode;
        newNode->next = last;
    } else {  // Jika list tidak kosong
        newNode->next = last->next;
        last->next = newNode;
    }
}

// Fungsi untuk menambahkan node baru di akhir
void addToEnd(int data) {
    Node* newNode = new Node();   // Membuat node baru
    newNode->data = data;

    if (last == NULL) {  // Jika list kosong
        last = newNode;
        newNode->next = last;
    } else {  // Jika list tidak kosong
        newNode->next = last->next;
        last->next = newNode;
        last = newNode;
    }
}

// Fungsi untuk mencetak elemen list
// Fungsi untuk mencetak elemen list
void printList(int times) {
    int count = 0;
    while(count < times) {
        Node* temp = last->next;
        do {
            cout << temp->data << " ";
            temp = temp->next;
        } while(temp != last->next);
        cout << endl;
        count++;
    }
}

int main() {
    // 3. Menambahkan data 3, 2, 1 di awal
    addToStart(1);
    addToStart(2);
    addToStart(3);

    // 4. Menambahkan data 6, 7, 8 di akhir
    addToEnd(6);
    addToEnd(7);
    addToEnd(8);

    // 5. Pastikan pointer akan selalu menunjuk data paling belakang (selalu menunjuk elemen yang di  masukan terakhir)  
    printList(2);

    // 6. Menambahkan data 4 di antara 1 dan 6
    Node* temp = last->next;
    Node* newNode = new Node();
    newNode->data = 4;
    while(temp->next->data != 6) {
        temp = temp->next;
    }
    newNode->next = temp->next;
    temp->next = newNode;

    // Mencetak list kembali
    printList(2);

    return 0;
}
