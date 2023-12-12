#include <iostream>
using namespace std;

class Node {
public:
    char data;
    Node *left, *right;
};

Node* newNode(char data) {
    Node* node = new Node();
    if (node == NULL) {
        cout << "Memory error\n";
        return NULL;
    }
    node->data = data;
    node->left = NULL;
    node->right = NULL;
    return node;
}

Node* insert(Node* node, char data) {
    if (node == NULL) 
        return newNode(data);
    if (data < node->data) 
        node->left = insert(node->left, data);
    else if (data > node->data) 
        node->right = insert(node->right, data);
    return node;
}

void preorder(Node* root) {
    if (root != NULL) {
        cout << root->data << " ";
        preorder(root->left);
        preorder(root->right);
    }
}

void inorder(Node* root) {
    if (root != NULL) {
        inorder(root->left);
        cout << root->data << " ";
        inorder(root->right);
    }
}

void postorder(Node* root) {
    if (root != NULL) {
        postorder(root->left);
        postorder(root->right);
        cout << root->data << " ";
    }
}

int main() {
    Node* root = NULL;
    root = insert(root, 'J');
    insert(root, 'R');
    insert(root, 'D');
    insert(root, 'G');
    insert(root, 'T');
    insert(root, 'E');
    insert(root, 'M');
    insert(root, 'H');
    insert(root, 'P');
    insert(root, 'A');
    insert(root, 'F');
    insert(root, 'Q');    
 
    cout << "Preorder traversal  : "; preorder(root); cout << "\n";
    cout << "Inorder traversal   : "; inorder(root); cout << "\n";
    cout << "Postorder traversal : "; postorder(root); cout << "\n";
    return 0;
}