#include<iostream>
using namespace std;

struct Node {
    int data;
    Node *left, *right;
    int height;
};

Node* GetNewNode(int data) {
    Node* newNode = new Node();
    newNode->data = data;
    newNode->left = newNode->right = NULL;
    newNode->height = 1;
    return newNode;
}

int height(Node *N) {
    if (N == NULL)
        return 0;
    return N->height;
}

Node *rightRotate(Node *y) {
    Node *x = y->left;
    Node *T2 = x->right;
    x->right = y;
    y->left = T2;
    y->height = max(height(y->left), height(y->right)) + 1;
    x->height = max(height(x->left), height(x->right)) + 1;
    return x;
}

Node *leftRotate(Node *x) {
    Node *y = x->right;
    Node *T2 = y->left;
    y->left = x;
    x->right = T2;
    x->height = max(height(x->left), height(x->right)) + 1;
    y->height = max(height(y->left), height(y->right)) + 1;
    return y;
}

int getBalance(Node *N) {
    if (N == NULL)
        return 0;
    return height(N->left) - height(N->right);
}

Node* Insert(Node* node, int data) {
    if (node == NULL)
        return(GetNewNode(data));

    if (data < node->data)
        node->left = Insert(node->left, data);
    else if (data > node->data)
        node->right = Insert(node->right, data);
    else
        return node;

    node->height = 1 + max(height(node->left), height(node->right));

    int balance = getBalance(node);

    if (balance > 1 && data < node->left->data)
        return rightRotate(node);

    if (balance < -1 && data > node->right->data)
        return leftRotate(node);

    if (balance > 1 && data > node->left->data) {
        node->left = leftRotate(node->left);
        return rightRotate(node);
    }

    if (balance < -1 && data < node->right->data) {
        node->right = rightRotate(node->right);
        return leftRotate(node);
    }

    return node;
}

void Preorder(Node *root) {
    if(root == NULL) return;

    cout << root->data << " ";
    Preorder(root->left);
    Preorder(root->right);
}

void Inorder(Node *root) {
    if(root == NULL) return; 

    Inorder(root->left);
    cout << root->data << " ";
    Inorder(root->right);
}

void Postorder(Node *root){
    if(root == NULL) return;
    
    Postorder(root->left);
    Postorder(root->right);   
    cout << root->data << " ";
}

void printTree(Node* root, std::string indent = "", bool isRight = true) {
    if (root != nullptr) {
        printTree(root->right, indent + (isRight ? "        " : "|       "), true);
        cout << indent;
        if (isRight) std::cout << " /";
        else cout << " \\";
        cout << "----- " << root->data << "\n";
        printTree(root->left, indent + (isRight ? "|       " : "        "), false);
    }
}

int main() {
    Node *root = NULL;
    root = Insert(root,50);	
    root = Insert(root,19);	
    root = Insert(root,18);	
    root = Insert(root,57);	
    root = Insert(root,95);	
    root = Insert(root,77);	
    root = Insert(root,39);	
    root = Insert(root,61);	
    root = Insert(root,23);	
    root = Insert(root,56);	

    // Print Nodes in Preorder
    cout<<"Preorder: "; Preorder(root); cout << endl;
    // Print Nodes in Inorder
    cout<<"Inorder: "; Inorder(root); cout << endl;
    // Print Nodes in Postorder
    cout<<"Postorder: "; Postorder(root);cout << endl;
    // Print Nodes in Tree form
    cout << "AVL Tree: " << endl; printTree(root); cout << endl;

    return 0;
}