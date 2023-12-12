template <class T> 
class BinaryTreeNode { 
public: 
    BinaryTreeNode() {LeftChild = RightChild = 0;} 
    BinaryTreeNode(const T& e){
        data = e; 
        LeftChild = RightChild = 0;
    } 

    BinaryTreeNode(const T& e, BinaryTreeNode *l, BinaryTreeNode *r){
        data = e; 
        LeftChild = l;
        RightChild = r;
    } 

    T GetData() { return data; }
    BinaryTreeNode<T>* GetLeftChild() { return LeftChild; }
    BinaryTreeNode<T>* GetRightChild() { return RightChild; }

    void SetData(T d) { data = d; }
    void SetLeftChild(BinaryTreeNode<T>* l) { LeftChild = l; }
    void SetRightChild(BinaryTreeNode<T>* r) { RightChild = r; }

    T data;  
    BinaryTreeNode<T> *LeftChild, *RightChild; 
};
