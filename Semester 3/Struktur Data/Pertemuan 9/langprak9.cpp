#include <iostream> 
#include "lqueue.hpp"
#include "btnode.hpp"
using namespace std;

template <class T>
void Visit(BinaryTreeNode<T> *x) { 
    cout << x->data << ' ';
}

template <class T>
void InOrder(BinaryTreeNode<T> *x){
    if (x){
        InOrder(x->LeftChild);
        Visit(x);
        InOrder(x->RightChild);
    }
}

template <class T>
void PreOrder(BinaryTreeNode<T> *x){ 
    if (x) { 
        Visit(x); 
        PreOrder(x->LeftChild); 
        PreOrder(x->RightChild); 
    }
}

template <class T>
void PostOrder(BinaryTreeNode<T> *x) { 
    if (x) { 
        PostOrder(x->LeftChild); 
        PostOrder(x->RightChild); 
        Visit(x); 
    }
}

template <class T>
void LevelOrder(BinaryTreeNode<T> *x) { 
    LinkedQueue<BinaryTreeNode<T>*> q; 
    BinaryTreeNode<T> *p; 
    q.Add(x); 
    while (!q.IsEmpty()) { 
        p = q.Delete(); 
        Visit(p); 
        if (p->LeftChild) 
            q.Add(p->LeftChild); 
        if (p->RightChild) 
            q.Add(p->RightChild); 
    } 
}

int main(){ 
    BinaryTreeNode<int> x, y, z;
    x.data = 1;
    y.data = 2;
    z.data = 3;
    x.LeftChild = &y;
    x.RightChild = &z;
    y.LeftChild = 0;
    y.RightChild = 0;
    z.LeftChild = 0;
    z.RightChild = 0;

    cout << "Kunjungan Preorder    : ";
    PreOrder(&x);
    cout << endl;
    cout << "Kunjungan Inorder     : ";
    InOrder(&x); 
    cout << endl;
    cout << "Kunjungan Postorder   : ";
    PostOrder(&x);
    cout << endl;
    cout << "Kunjungan Level order : ";
    LevelOrder(&x);
    cout << endl;
    return 0;
};