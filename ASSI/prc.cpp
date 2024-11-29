#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int data){
        this-> data = data; // . *  to ->
        this-> next = nullptr; // this.next* == this->next
    }
};

class LinkedList {
private:
    Node* head;
public:
    LinkedList(){
        head = nullptr;
    }

    void add(int data){
        Node*  n = new Node(data);
        if (head  == nullptr){
            head = n;
        }
        else {
            Node* t = head;
            while ( t-> next != nullptr){
                t = t->next;
            }
            t->next = n;
        }
    }

    void view(){
        if (head == nullptr){
            cout << "empty" << endl;
        }
        else {
            Node* t = head;
            while ( t != nullptr){
                cout << t->data << " -> ";
                t = t->next;
            }
            cout << "None" << endl;
        }
    }

    void search(int v){
        int pos = 0;
        Node* t = head;
        while ( t != nullptr){
            if (t-> data == v){
                cout << v << " found at " << pos << endl;
                return;
            }
            t = t -> next;
            pos++;
        }
        cout << "not found" << endl; 
    }

    void remove ( int v){
        if (head == nullptr){
            cout << "empty" << endl;
            return;
        }
        if (head -> data == v){
            Node* d = head;
            head = head ->next;
            delete d;
            cout << "removed" << endl;
            return;
        }

        Node* t = head;
        while ( t -> next != nullptr){
            if ( t -> next -> data == v ){
                Node* d = t-> next;
                delete d;
                cout << "removed" << endl;
                return;
            }
            t = t->next;
        }
        cout << "not found" << endl;
    }
};

int main(){
    LinkedList l;
    l.add(1);
    l.add(2);
    l.view();
    l.search(2);
    l.add(3);
    l.view();
    l.search(1);

    return 0;
}

