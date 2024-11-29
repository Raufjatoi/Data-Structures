// singly linked list 

#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int v): data(v), next(nullptr) {}
};

class LinkedList{
    Node* head;

public:
    LinkedList(): head(nullptr) {}

    void addf(int v){
        Node* n = new Node(v);
        n-> next = head;
        head = n;
    }
    
    void addl(int v){
        Node* n = new Node(v);
        if (head == nullptr){
            head = n;
            return;
        }
        Node* t = head;
        while (t->next != nullptr){
            t = t->next;
        }
        t -> next = n;
    }

    void search(int s){
        Node* t = head;
        while (t != nullptr){
            if (t -> data == s){
                cout << "found" << endl;
                return;
            }
            t = t -> next;
        }
        cout << "!found" << endl;
    }
    
    void update (int v , int l){
        int i = 0;
        Node* t = head;
        while(t != nullptr){
            if (i == l){
                t -> data = v;
                return;
            }
            t = t-> next;
            i ++;
        }
        cout << "!location" << endl;            
    }

    void remove(int v) {
    while (head != nullptr && head->data == v) {
        Node* t = head;
        head = head->next;
        delete t;
    }

    Node* t = head;
    while (t != nullptr && t->next != nullptr) {
        if (t->next->data == v) {
            Node* d = t->next;
            t->next = t->next->next;
            delete d;
            return;
        } else {
            t = t->next;
            }
        }
        cout << "!found" << endl;
    }
    
    void print(){
        while (head != nullptr){
            cout << head ->data << "->";
            head = head ->next;
        }
        cout << "null" <<endl;
    }
};

int main (){
    LinkedList l;
    
    l.addl(1);
    l.addl(2);
    l.addl(3);

    l.search(4);
    l.search(3);

    l.update(4 , 2);
    l.update(5, 3);

    l.remove(2);
    l.remove(5);

    l.print();
}