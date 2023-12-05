#include <iostream>
using namespace std;

class Node{
    public:
        int data, priority;
        Node *next, *prev;

    Node(int d, int p){
        data = d;
        priority = p;
        next = prev = NULL;
    }
};

void push(Node *&head, int data, int priority){
    if(head == NULL){
        Node *newNode = new Node(data, priority);
        head = newNode;
        return;
    }

    Node *node = new Node(data, priority);

    Node *temp = head;
    Node *parent = NULL;
    while (temp != NULL && temp->priority <= priority) {
        parent = temp;
        temp = temp->next;
    }

    if (parent == NULL) {
        node->next = head;
        head->prev = node;
        head = node;
    } 
    
    else if (temp == NULL) {
        parent->next = node;
        node->prev = parent;
    } 
    
    else {
        parent->next = node;
        node->prev = parent;
        node->next = temp;
        temp->prev = node;
    }
}

int peek(Node *&head){
    if(head != NULL){
        return head->data;
    }
    return -1;
}

int pop(Node *&head){
    if(head != NULL){
        int curr = head->data;
        head = head->next;
        if(head != NULL){
            head->prev = NULL;
        }
        return curr;
    }
    return -1;
}

void display(Node *&head){
    if(head == NULL){
        cout << "Antrian kosong" << endl;
        return;
    }
    Node *temp = head;
    while(temp != NULL){
        cout << temp->data << " --> ";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}

int main(){
    Node *head = NULL;
    display(head);
    push(head, 2, 2);
    display(head);
    push(head, 5, 5);
    display(head);
    push(head, 8, 1);
    display(head);
    pop(head);
    display(head);
    pop(head);
    display(head);
    pop(head);
    display(head);
    return 0;
}