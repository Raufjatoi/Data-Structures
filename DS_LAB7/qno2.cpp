// Qno 2 Stack in Linkedlist format  

#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;

    Node(int v) : data(v), next(nullptr) {}
};

struct Stack {
    Node* head; 

    Stack() : head(nullptr) {}

    void push(int v) {
        Node* n = new Node(v);
        n->next = head;
        head = n;    
    }

    void pop() {
        if (head == nullptr) {
            cout << "empty\n";
            return;
        }
        Node* t = head; 
        head = head->next; 
        delete t;      
    }

    int len() {
        int count = 0;
        Node* t = head;
        while (t != nullptr) {
            count++;
            t = t->next;
        }
        return count;
    }
    void display() {
        if (head == nullptr) {
            cout << "empty\n";
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
    Stack s;

    s.display();

    s.push(1);
    s.push(2);
    s.push(3);

    s.display();

    s.pop();
    s.display();

    cout << "Len: " << s.len() << endl;

    cout << "empty? " << (s.isEmpty() ? "Yes" : "No") << endl;

}