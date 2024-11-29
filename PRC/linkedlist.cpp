// linked list is list but linked 🙂

#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node *next; // point to next

    // construct
    Node(int v) : data(v), next(nullptr) {}
};

class LinkedList {
private:
    Node *head;

public:
    // construct
    LinkedList() : head(nullptr) {}

    // add first
    void addf(int v) {
        Node *n = new Node(v);
        n->next = head;
        head = n;
    }

    // add last
    void adde(int v) {
        Node *n = new Node(v);
        if (head == nullptr) {
            head = n;
        } else {
            Node *t = head;
            while (t->next != nullptr) { 
                t = t->next;
            }
            t->next = n;
        }
    }

    // add at
    void addAt(int v, int i) {
        if (i == 0) {
            addf(v);
            return;
        } else {
            Node *n = new Node(v);
            Node *t = head;
            for (int j = 1; j < i && t != nullptr; j++) {
                t = t->next;
            }
            if (t == nullptr) {
                cout << "huh" << endl;
                delete n;
                return;
            }
            n->next = t->next;
            t->next = n;
        }
    }

    // delete
    void del(int v) {
        if (head == nullptr) {
            cout << "empty" << endl;
            return;
        }
        if (head->data == v) {
            Node *t = head;
            head = head->next;
            delete t;
            return;
        }
        Node *t = head;
        while (t->next != nullptr && t->next->data != v) {
            t = t->next;
        }
        if (t->next == nullptr) {
            cout << "not found" << endl;
            return;
        }
        Node *d = t->next;
        t->next = t->next->next;
        delete d;
    }

    // search 
    bool search(int v) {
        Node *t = head;
        while (t != nullptr) {
            if (t->data == v) {
                return true;
            }
            t = t->next;
        }
        return false;
    }

    // display 
    void display() {
        if (head == nullptr) {
            cout << "empty" << endl;
            return;
        }
        Node *t = head;
        while (t != nullptr) {
            cout << t->data << " -> ";
            t = t->next;
        }
        cout << "null" << endl;
    }

    // destructor
    ~LinkedList() {
        Node *t = head;
        while (t != nullptr) {
            Node *next = t->next;
            delete t;
            t = next;
        }
    }
};

int main() {
    LinkedList list;

    list.addf(1);
    list.addf(2);
    list.adde(3);
    list.addAt(25, 0);

    list.display();

    cout << (list.search(1) ? "found" : "!found") << endl;
    cout << (list.search(4) ? "found" : "!found") << endl;

    list.del(2);
    list.display();

    list.del(4);
}