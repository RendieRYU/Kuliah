#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    Node* next;
};

// Fungsi untuk menambahkan node baru di awal list
void push(Node** head_ref, int new_data){
    Node* new_node = new Node;
    new_node->data = new_data;
    new_node->next = (*head_ref);
    (*head_ref) = new_node;
}

// Fungsi untuk menghitung jumlah elemen dalam linked list
int getCount(Node* head) {
    int count = 0; // Inisialisasi counter
    Node* current = head; // Inisialisasi pointer ke head
    while (current != NULL) {
        count++;
        current = current->next;
    }
    return count;
}

int main() {
    Node* head = NULL;

    // Menambahkan elemen ke linked list
    push(&head, 1);
    push(&head, 3);
    push(&head, 1);
    push(&head, 2);
    push(&head, 1);

    // Menampilkan jumlah elemen dalam linked list
    int jumlah = getCount(head);
    cout << "Jumlah elemen dalam linked list adalah " << jumlah;
    return 0;
}