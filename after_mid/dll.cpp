#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
    Node* previous;

    Node(int v) : data(v), next(nullptr), previous(nullptr) {} 
};
struct DoublyLinkedList {
    Node* head;
    Node* tail;

    DoublyLinkedList() : head(nullptr), tail(nullptr) {}

    void addFirst(int value){
        Node* n = new Node(value);
        if(head == nullptr){
            head = n;
            tail = n;
        } else {
            n->next = head;
            head->previous = n;
            head = n;
        }
        cout << "Node added: " << value << endl;
    }

    void addLast(int value){
        Node* n = new Node(value);
        if(tail == nullptr){
            head = n;
            tail = n;
        } else {
            while (tail->next != nullptr){
                tail = tail->next;
            }
            tail->next = n;
            n->previous = tail;
            tail = n;
        }
        cout << "Node added: " << value << endl;
    };

    void removeFirst(){
        if(head == nullptr){
            cout << "List is empty." << endl;
            return;
        }
        Node* temp = head;
        head = head->next;
        if(head!= nullptr){
            head->previous = nullptr;
        } else {
            tail = nullptr;
        }
        delete temp;
        cout << "First node removed." << endl;
    }

    void removeLast(){
        if(tail == nullptr){
            cout << "List is empty." << endl;
            return;
        }
        Node* temp = tail;
        tail = tail->previous;
        if(tail!= nullptr){
            tail->next = nullptr;
        } else {
            head = nullptr;
        }
        delete temp;
        cout << "Last node removed." << endl;
    }

    void print(){
        Node* temp = head;
        while(temp!= nullptr){
            cout << temp->data << " <-> ";
            temp = temp->next;
        }
        cout << "nullptr" << endl;
    }

};

int main(){
    DoublyLinkedList dll;
    dll.addFirst(1);
    dll.addFirst(2);
    dll.addLast(3);
    dll.addLast(4);
    dll.print();
    dll.removeFirst();
    dll.print();
    dll.removeLast();
    dll.print();
}