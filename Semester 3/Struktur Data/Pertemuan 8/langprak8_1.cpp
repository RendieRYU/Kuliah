#include<iostream>
#include <iomanip>
using namespace std;

struct Node {
    int data;
    int priority;
    struct Node *next, *prev;
};

// Fungsi untuk membuat node baru
Node* newNode(int data, int priority) {
    Node* temp = new Node;
    temp->data = data;
    temp->priority = priority;
    temp->next = temp->prev = NULL;
    return temp;
}

// Fungsi untuk memeriksa apakah list kosong
bool isEmpty(Node* head) {
    return head == NULL;
}

// Fungsi untuk memasukkan data
void push(Node** head, int data, int priority) {
    Node* start = (*head);

    // Buat node baru
    Node* temp = newNode(data, priority);

    // Jika list kosong, jadikan node baru sebagai head
    if (isEmpty(*head)) {
        *head = temp;
        return;
    }

    // Jika prioritas node baru lebih besar, jadikan sebagai head
    if ((*head)->priority < priority) {

        // memasukkan node baru di awal list
        temp->next = *head;
        (*head)->prev = temp;
        (*head) = temp;
    }
    else {
        // Menelusuri list dan menemukan posisi sebelum node yang prioritasnya lebih kecil untuk menambahkan di sana
        while (start->next != NULL && start->next->priority >= priority)
            start = start->next;

        // Memasukkan node baru
        temp->next = start->next;
        if (start->next != NULL)
            start->next->prev = temp;

        temp->prev = start;
        start->next = temp;
    }
}

// Fungsi untuk menghapus node dengan prioritas tertinggi (head)
void pop(Node** head) {
    Node* temp = *head;
    (*head) = (*head)->next;
    if ((*head) != NULL)
        (*head)->prev = NULL;
    delete temp;
    cout << "Berhasil melayani pelanggan" << endl;
}

// Fungsi untuk menampilkan list
void display(Node* head) {
    if (isEmpty(head)) {
        cout << "Antrian kosong." << endl;
        return;
    }
    while (head != NULL) {
        cout << left << "Jumlah lembar: " << setw(4) << head->data << " | Prioritas: " << head->priority << endl;
        head = head->next;
    }
}

int main() {
    // Buat list kosong
    Node* pq = NULL;
    int lembar;
    int prioritas;
    int jumlah;
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
                cout << "Masukkan jumlah pelanggan print : ";
                cin >> jumlah;
                for(int i = 0; i < jumlah; i++){
                    cout << "Masukkan jumlah lembar print pelanggan " << i+1 << " : ";
                    cin>> lembar;
                    cout<< "Masukkan prioritas print: ";
                    cin>> prioritas;
                    push(&pq, lembar, prioritas);
                }
                cout << endl;
                break;
            case 2:
                pop(&pq);
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
