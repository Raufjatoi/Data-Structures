#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
    Node* prv;
};

struct DoublyLinkedList {
    Node* head;

    DoublyLinkedList() : head(nullptr) {}

    void add(int v) {
        Node* n = new Node();
        n->data = v;
        n->next = nullptr;
        n->prv = nullptr;

        if (head == nullptr) {
            head = n;
        } else {
            Node* t = head;
            while (t->next != nullptr) {
                t = t->next; 
            }
            t->next = n;  
            n->prv = t;   
        }
    }

    void remove(int v) {
    if (head == nullptr) {
        cout << "List is empty" << endl;
        return;
    }

    Node* t = head;

    if (head->data == v) {
        Node* d = head;
        head = head->next;
        if (head != nullptr) {
            head->prv = nullptr;
        }
        delete d;
        return;
    }
    while (t != nullptr) {
        if (t->data == v) {
            if (t->prv != nullptr) {
                t->prv->next = t->next;
            }
            if (t->next != nullptr) {
                t->next->prv = t->prv;
            }
            delete t;
            return;
        }
        t = t->next;
    }

    cout << "Value not found in the list" << endl;
}

    void print() {
        Node* t = head;
        while (t != nullptr) {
            cout << t->data << " -> ";
            t = t->next;
        }
        cout << "nullptr " << endl;
    }
};

int main() {
    DoublyLinkedList l;
    l.add(1);
    l.add(2);
    l.add(3);
    l.print();

    l.remove(3);
    l.print();

    l.remove(1);
    l.print();
}