// doubly linked list is well doubled linked next -> and prv <-  🙃

#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;
    Node* prv; // point to previos node 

    // construct 
    Node(int data){
        this->data = data;
        this->next = nullptr;
        this->prv = nullptr;
    }
};

class DoublyLinkedList {
private:
    Node* head;

public:
    DoublyLinkedList(){
        head = nullptr;
    }

    void add( int data){
        Node* n = new Node(data);
        if (head == nullptr){
            head = n;
        } else{
            Node* t = head;
            while ( t -> next != nullptr){
                t = t->next;
            }
            t ->next = n;
            n->prv = t;
        }
    }
    // still some work to do 
    void addf(int data){
        Node* n = new Node(data);
        n-> next = head;
        head = n;
    }
    void view(){
        if (head == nullptr){
            cout << "empty" << endl;
        } else {
            Node* t = head;
            while (t != nullptr){
                cout << t->data << "<->";
                t = t->next;
            }
            cout << "none" << endl;
        }
    }

    void search(int v){
        int pos = 0;
        Node* t = head;
        while (t != nullptr){
            if(t->data == v){
                cout << "found at" << pos << endl;
                return;
            }
            t = t-> next;
            pos++;
        }
        cout << " not found " << endl;
    }

        void remove(int v) {
        if (head == nullptr) {
            cout << "empty" << endl;
            return;
        }
        
        if (head->data == v) {
            Node* toDelete = head;
            head = head->next;
            if (head != nullptr) {
                head->prv = nullptr;  // Update the previous pointer of the new head
            }
            delete toDelete;
            cout << "removed" << endl;
            return;
        }

        Node* t = head;
        while (t != nullptr) {
            if (t->data == v) {
                if (t->prv != nullptr) {
                    t->prv->next = t->next;
                }
                if (t->next != nullptr) {
                    t->next->prv = t->prv;
                }
                delete t;
                cout << "removed" << endl;
                return;
            }
            t = t->next;
        }
        cout << "not found" << endl;
    }
};

int main(){
    DoublyLinkedList l;
    l.add(1);
    l.add(2);
    l.add(3);
    l.add(4);

    l.view();

    l.search(3);
    l.search(6);

    l.remove(4);
    l.view();
    
}