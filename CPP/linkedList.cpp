// a Linked List is a data structure where elements ( nodes ) are connected using pointers , 
// allowing dynamic memory allocation.

#include <iostream>
using namespace std;

struct Node {
    int data; 
    Node* next;
};

void search(Node* n , int val){
    while ( n != nullptr){
        if (n->data == val){
            cout << "found";
            break;
        }
        n = n-> next;
    }
    cout << "not found";

}

void print (Node* n){
    while (n != nullptr){
        cout << n->data << " ";  
        n = n ->next; 
    }
}

int main(){
    Node* head = new Node();
    Node* second = new Node();
    Node* third = new Node();

    head->data = 1;
    head->next = second;

    second->data = 2;
    second->next = third;

    third->data = 3;
    third->next = nullptr;

    print(head); 
}