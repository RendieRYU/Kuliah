#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    Node* next;
};

int countNodes(Node* head) {
    int count = 0;
    Node* current = head;
    while (current != NULL) {
        count++;
        current = current->next;
    }
    return count;
}

int main() {
    int node;
    cout << "Masukkan node: ";
    cin >> node;

    Node* head = new Node;
    Node* current = head;
    for (int i = 1; i < node; i++) {
        current->data = i;
        current->next = new Node;
        current = current->next;
    }
    current->data = node;
    current->next = NULL;

    int count = countNodes(head);
    cout << "Jumlah dari node adalah: " << count << endl;

    return 0;
}