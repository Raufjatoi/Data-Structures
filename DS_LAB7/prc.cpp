// Stack is lifo (last in first out)

#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;

    Node(int v): data(v) , next (nullptr){};
};

struct Stack{
    Node* head;

    Stack(): head(nullptr) {};

    void push(int v){
        Node* n = new Node(v);
        n->next = head;
        head = n;
    }

    void pop() {
        if (head == nullptr){
            cout << "empty\n";
            return;
        }
        Node* t = head;
        head = head ->next;
        delete t;
    }

    void print(){
        if (head == nullptr){
            cout << "empty\n";
            return;
        }
        Node* t = head;
        while ( t != nullptr){
            cout << t -> data << " -> ";
            t = t -> next;
        }
        cout << "nullptr" << endl;
    }
};

int main(){
    Stack s;
    int input ;

    while (true){
        cout << "\t Enter the ops: \n"
             << "1. push\n"
             << "2. print\n"
             << "3. pop\n"
             << "enter op: ";
        
        cin >> input;
        if (input == 1){
            int v;
            cout << "enter value: ";
            cin >> v;
            s.push(v);
        }
        else if (input == 2){
            s.print();
        }
        else if (input == 3){
            s.pop();
        }
        else {
            cout << "error" << endl;
            break;
        }
    }

}