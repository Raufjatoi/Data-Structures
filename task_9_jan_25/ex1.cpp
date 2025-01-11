// 1. Linked List Manipulation
// -> Objective: Understand dynamic memory allocation, pointers, and basic list operations.

// Task: Implement a singly linked list supporting insertion (at head, tail, and middle), deletion (by value and by position), searching, and display functions.

// Extension: Add a function to reverse the linked list in-place.

#include <iostream>
using namespace std;

struct Node{
    int data;
    Node* next;

    Node(int data): data(data), next(NULL){}
};

struct Linkedlist{
    Node* head;

    Linkedlist(){
        head = NULL;
    }

    void atHead (int data){
        Node* n = new Node(data);

        if (head == NULL){
            head = n;
        } else {
            n -> next = head;
            head = n;
        }
    }

    void atTail (int data){
        Node* n = new Node(data);

        if (head == NULL){
            head = n;
        } else {
            Node* t = head;
            while ( t -> next != NULL){
                t = t -> next;
            }
            t -> next = n;
        }
    }

    void atMiddle(int data){
        Node* n = new Node(data);
        
        if (head == NULL){
            head = n;
        } else {
            Node* t = head;
            int c = 0;
            while (t -> next != NULL){
                t = t -> next;
                c++;
            }
            c = c/2; // middle
            t = head;
            while (c--){
                t = t -> next;
            }
            n -> next = t -> next;
            t -> next = n;
        }
    }

    void deleteValue(int v){
        if (head == NULL){
            cout << "empty" << endl;
        }
        else if (head -> data == v){
            Node* t = head;
            head = head -> next;
            delete t;
        } 
        else {
            Node* t = head;
            while (t -> next != NULL && t -> next -> data != v)
                t = t -> next;
            if (t -> next == NULL){
                cout << "!found" << endl;
            } else {
                Node* d = t -> next;
                t -> next = d -> next;
                delete d;
            }
        }
    }

    void deletePosition(int p){
        if (head == NULL){
            cout << "empty" << endl;           
        } else if (p == 0){
            Node* t = head;
            head = head -> next;
            delete t;
        } else {
            int c = 0;
            Node* t = head;
            while(t -> next != NULL && c < p - 1 ){
                t = t -> next;
                c++;
            }
            if (t -> next == NULL){
                    cout << "out of range" << endl;
                } else {
                    Node* d = t -> next;
                    t -> next = d -> next;
                    delete d;
                }
        }
    }

    void search(int v){
        Node* t = head;
        int c  = 0;
        while (t != NULL && t -> data  != v){
            t = t -> next;
            c++;
        }
        if (t == NULL){
            cout << "!found" << endl;
        } else {
            cout << "found at " << c << endl;
        }
    }
    void print(){
        Node* t = head;
        while (t != NULL){
            cout << t -> data << " -> ";
            t = t -> next;
        }
        cout << "NULL" << endl;
    }
};

int main(){
    Linkedlist l;
    l.atHead(1);
    l.atHead(2);
    l.atHead(3);
    l.atTail(10);
    l.atTail(20);
    l.atTail(30);
    l.atMiddle(100);

    l.print();
    l.deletePosition(1);
    l.print();
    l.deleteValue(100);
    l.print();
    l.search(10);
    l.search(100);
}