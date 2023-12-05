#include<iostream>
using namespace std;

struct Node {
    string nama;
    bool difabel;
    Node *next, *prev;
};

Node* newNode(string nama, bool difabel) {
    Node* temp = new Node;
    temp->nama = nama;
    temp->difabel = difabel;
    temp->next = temp->prev = NULL;
    return temp;
}

bool isEmpty(Node* head) {
    return head == NULL;
}

void push(Node*& head, string nama, bool difabel) {
    Node* temp = newNode(nama, difabel);
    if (!head) {
        head = temp;
    } else if (difabel) {
        temp->next = head;
        head->prev = temp;
        head = temp;
    } else {
        Node* start = head;
        while (start->next && !start->next->difabel)
            start = start->next;
        temp->next = start->next;
        if (start->next)
            start->next->prev = temp;
        temp->prev = start;
        start->next = temp;
    }
}

void pop(Node*& head) {
    if (head) {
        Node* temp = head;
        head = head->next;
        delete temp;
        if (head) head->prev = NULL;
    }
}

void display(Node* head) {
    if(isEmpty(head)){
        cout << "Antrian kosong" << endl;
        return;
    }
    while (head) {
        cout << "Nama: " << head->nama << " | Difabel: " << (head->difabel ? "Ya" : "Tidak") << endl;
        head = head->next;
    }
}

int main() {
    Node* pq = NULL;
    int jumlah;
    string nama;
    bool difabel;
    int pilih;
    do{
        cout << "=======================" << endl;
        cout << "|| 1. Masukkan data  ||" << endl;
        cout << "|| 2. Hapus data     ||" << endl;
        cout << "|| 3. Tampilkan data ||" << endl;
        cout << "|| 4. Keluar         ||" << endl;
        cout << "=======================" << endl;
        cout << "Masukkan pilihan: ";
        cin >> pilih;
        switch(pilih){
            case 1:
                cout << "Masukkan jumlah penumpang: ";
                cin >> jumlah;
                for(int i = 0; i < jumlah; i++){
                    cout << "Masukkan nama penumpang " << i+1 << " : ";
                    cin >> nama;
                    cout<< "Apakah penumpang difabel? (1 untuk ya, 0 untuk tidak): ";
                    cin>> difabel;
                    push(pq, nama, difabel);
                }
                cout << endl;
                break;
            case 2:
                pop(pq);
                cout << endl;
                break;
            case 3:
                display(pq);
                cout << endl;
                break;
            case 4:
                cout << "Terima kasih telah menggunakan program ini" << endl;
                cout << endl;
                break;
            default:
                cout << "Pilihan tidak tersedia" << endl;
                cout << endl;
                break;
        }
    }while(pilih != 4);
    return 0;
}
