// stack is last in first out (lifo)

#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

struct Stack {
    Node* head;

    Stack() : head(nullptr) {}

    // Add
    void push(int v) {
        Node* n = new Node;
        n->data = v;
        n->next = head; 
        head = n;       
    }

    void pop(){
        Node* d = head;
        head = head ->next;
        delete d;
    }

    // Print
    void print() {
        Node* temp = head; 
        while (temp != nullptr) {
            cout << temp->data << "->";
            temp = temp->next;
        }
        cout << "nullptr" << endl;
    }

    bool isEmpty(){
        return head == nullptr;
    }

    void peek() {
    if (head == nullptr) {
        cout << "empty" << endl;
        return;
    }
    cout << head->data << endl;
}
};

int main() {
    Stack l;
    l.push(1);
    l.push(2);
    l.push(3);

    l.print();

    l.pop();

    l.print();

    l.pop();

    cout << l.isEmpty() << endl;

    l.peek();

    l.print();
}