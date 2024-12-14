#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

struct Queue {
    Node* head; 
    Node* tail; 

    Queue() : head(nullptr), tail(nullptr) {}

    void enqueue(int v) {
        Node* n = new Node;
        n->data = v;
        n->next = nullptr; 

        if (isEmpty()) { 
            head = tail = n; 
        } else {
            tail->next = n; 
            tail = n;       
        }
    }

    void dequeue() {
        if (isEmpty()) {
            cout << "empty" << endl;
            return;
        }

        Node* temp = head;  
        head = head->next;  
        delete temp;        

        if (head == nullptr) { 
            tail = nullptr;    
        }
    }

    void print() {
        if (isEmpty()) {
            cout << "empty" << endl;
            return;
        }

        Node* t = head;
        while (t != nullptr) {
            cout << t->data << " -> ";
            t = t->next;
        }
        cout << "nullptr" << endl;
    }

    bool isEmpty() {
        return head == nullptr;
    }
};

int main() {
    Queue q;

    q.enqueue(1);
    q.enqueue(2);
    q.enqueue(3);
    q.print(); 

    q.dequeue(); 
    q.print(); 

    q.dequeue();
    q.print(); 

    q.dequeue();
    q.print(); 

    q.dequeue(); 

}
