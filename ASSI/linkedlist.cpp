#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int data) {
        this->data = data; // . + * == ->
        this->next = nullptr; // this.next* == this->next ( same same but diff : | )
    }
};

class LinkedList {
private:
    Node* head;

public:
    LinkedList() {
        head = nullptr;
    }

    void add(int data) {
        Node* n = new Node(data);
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
    void addf(int data){
        Node* n = new Node(data);
        n-> next = head;
        head = n;
    }
    void view() {
        if (head == nullptr) {
            cout << "empty" << endl;
        } else {
            Node* t = head;
            while (t != nullptr) {
                cout << t->data << " -> ";
                t = t->next;
            }
            cout << "None" << endl;
        }
    }

    void search(int v) {
        int pos = 0;
        Node* t = head;
        while (t != nullptr) {
            if (t->data == v) {
                cout << v << " found at " << pos << endl;
                return;
            }
            t = t->next;
            pos++;
        }
        cout << "not found" << endl;
    }

    void remove(int v) {
        if (head == nullptr) {
            cout << "empty" << endl;
            return;
        }
        if (head->data == v) {
            Node* toDelete = head;
            head = head->next;
            delete toDelete;
            cout << "removed" << endl;
            return;
        }

        Node* t = head;
        while (t->next != nullptr) {
            if (t->next->data == v) {
                Node* toDelete = t->next;
                t->next = t->next->next;
                delete toDelete;
                cout << "removed" << endl;
                return;
            }
            t = t->next;
        }
        cout << "not found" << endl;
    }
};

int main() {
    LinkedList l;
    l.addf(1);
    l.addf(2);
    l.addf(3);
    l.view();          
    l.search(2);       
    l.remove(2);
    l.view();        
    l.search(2);       

    return 0;
}