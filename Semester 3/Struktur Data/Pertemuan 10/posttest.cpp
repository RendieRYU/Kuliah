#include<iostream>
using namespace std;

struct Node {
    int data;
    Node* left;
    Node* right;
};

Node* GetNewNode(int data) {
    Node* newNode = new Node();
    newNode->data = data;
    newNode->left = newNode->right = NULL;
    return newNode;
}

Node* Insert(Node* root,int data) {
    if(root == NULL) { // empty tree
        root = GetNewNode(data);
    }
    else if(data <= root->data) {
        root->left = Insert(root->left,data);
    }
    else {
        root->right = Insert(root->right,data);
    }
    return root;
}

void Inorder(Node *root) {
    if(root == NULL) return; 

    Inorder(root->left);       // Visit left subtree
    cout << root->data << " "; // Print data
    Inorder(root->right);      // Visit right subtree
}

void Preorder(Node *root){
    if(root == NULL) return;

    cout << root->data << " "; // Print data
    Preorder(root->left);      // Visit left subtree
    Preorder(root->right);     // Visit right subtree
}

void Postorder(Node *root){
    if(root == NULL) return;

    Postorder(root->left);     // Visit left subtree
    Postorder(root->right);    // Visit right subtree
    cout << root->data << " "; // Print data
}

int main() {
    Node* root = NULL;  // Creating an empty tree
    /*Code to test the logic*/
    // root = Insert(root,50);	
    // root = Insert(root,19);	
    // root = Insert(root,18);	
    // root = Insert(root,57);	
    // root = Insert(root,95);	
    // root = Insert(root,77);	
    // root = Insert(root,39);	
    // root = Insert(root,61);	
    // root = Insert(root,23);	
    // root = Insert(root,56);	
    //1, 8, 0, 9, 4, 22
    root = Insert(root,1);
    root = Insert(root,8);
    root = Insert(root,0);
    root = Insert(root,9);
    root = Insert(root,4);
    root = Insert(root,22);

    // Print Nodes in Preorder
    cout<<"Preorder: ";
    Preorder(root);
    cout << endl;
    // Print Nodes in Inorder
    cout<<"Inorder: ";
    Inorder(root);
    cout << endl;
    // Print Nodes in Postorder
    cout<<"Postorder: ";
    Postorder(root);
    cout << endl;

}
