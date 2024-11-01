#include <iostream>
using namespace std;

struct node {
    int data;
    node* next;
};

void print (node* n ){
    while (n != nullptr){ 
        cout << n-> data << " ";  // .* = ->
        n = n -> next;
    }
}

int main(){
}