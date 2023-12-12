template<class T>
class Node {
public:
    T data;
    Node<T>* link;
};

template<class T>
class LinkedQueue {
public:
    LinkedQueue() {front = rear = 0;}
    
    ~LinkedQueue() {
        while(front) {
            Node<T>* temp = front;
            front = front->link;
            delete temp;
        }
    }

    int IsEmpty() const {return ((front) ? 0 : 1);}

    int IsFull() const {
        Node<T>* newNode;
        try {
            newNode = new Node<T>;
            delete newNode;
            return 0;
        } catch (std::bad_alloc exception) {
            return 1;
        }
    }

     void Add(const T& e) {
          if (IsFull()) {
               throw "Queue is full";
          } else {
               Node<T>* newNode = new Node<T>;
               newNode->data = e;
               newNode->link = 0;
               if (IsEmpty()) {
                    front = rear = newNode;
               } else {
                    rear->link = newNode;
                    rear = newNode;
               }
          }
     }

     T Delete() {
          if (IsEmpty()) {
               throw "Queue is empty";
          } else {
               Node<T>* temp = front;
               T e = temp->data;
               front = front->link;
               delete temp;
               return e;
          }
     }

     T Front() const {
          if (IsEmpty()) {
               throw "Queue is empty";
          } else {
               return front->data;
          }
     }
private:
     Node<T> *front, *rear;
};
