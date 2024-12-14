#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
    // constructor
    Node(int v) : data(v), next(nullptr) {}
};

struct LinkedList {
    Node* head;
    // constructor
    LinkedList() : head(nullptr) {}

    void addfirst(int v){
        Node* n = new Node(v);
        n->next = head;
        head = n;  
        cout << "added" << endl;  
    }

    void add(int v){
        Node* n = new Node(v);

        if (head == nullptr){
            head = n;
        } else {
            Node* t = head;
            while (t->next!= nullptr){
                t = t->next;
            }
            t->next = n; 
        }
    }
    void remove (){
        if (head == nullptr){
            cout << "empty" << endl;
            return;
        }
        Node* d = head;
        head = head->next;
        delete d;
        cout << "removed" << endl; 
    }
    void print(){
        Node* t = head;
        while (t!= nullptr){
            cout << t->data << " -> ";
            t = t->next;
        }
        cout << "null" << endl; 
    }
};

int main(){
    LinkedList l;
    
    l.addfirst(1);
    l.addfirst(2);
    l.addfirst(3);
    l.add(4);
    l.print();
    l.remove();
    l.print();
}