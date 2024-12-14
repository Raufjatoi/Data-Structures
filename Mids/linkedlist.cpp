#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

struct LinkedList {
    Node* head;

    LinkedList() : head(nullptr) {} 

    void add(int v) {
        Node* n = new Node;
        n->data = v;
        n->next = nullptr;

        if (head == nullptr) {
            head = n; 
        } else {
            Node* t = head;
            while (t->next != nullptr) {
                t = t->next; 
            }
            t->next = n; 
        }
    }

void remove(int v) {
    if (head == nullptr) {
        cout << "empty" << endl;
        return;
    }

    if (head->data == v) {
        Node* d = head;
        head = head->next; 
        delete d;
        return;
    }

    Node* current = head;
    Node* prev = nullptr;

    while (current != nullptr && current->data != v) {
        prev = current;
        current = current->next;
    }

    if (current != nullptr) {
        prev->next = current->next; 
        delete current; 
    } else {
        cout << v << " not found" << endl;
    }
}

    void print() {
        Node* t = head; 
        while (t != nullptr) {
            cout << t->data << "->";
            t = t->next; 
        }
        cout << "nullptr";
    }
};

int main (){
    LinkedList l;
    l.add(1);
    l.add(2);
    l.add(3);
    l.remove(2);

    l.print();

}