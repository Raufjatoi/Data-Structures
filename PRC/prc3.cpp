#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

// Function to add a new node at the end of the linked list
void add(Node*& head, int value) {
    Node* newNode = new Node();
    newNode->data = value;
    newNode->next = nullptr;

    if (head == nullptr) {
        head = newNode;
    } else {
        Node* temp = head;
        while (temp->next != nullptr) {
            temp = temp->next;
        }
        temp->next = newNode;
    }
}

// Function to remove a node with a given value
void remove(Node*& head, int value) {
    if (head == nullptr) return;

    if (head->data == value) {
        Node* toDelete = head;
        head = head->next;
        delete toDelete;
        return;
    }

    Node* temp = head;
    while (temp->next != nullptr && temp->next->data != value) {
        temp = temp->next;
    }

    if (temp->next == nullptr) {
        cout << "Value " << value << " not found\n";
        return;
    }

    Node* toDelete = temp->next;
    temp->next = temp->next->next;
    delete toDelete;
}

// Function to search for a value in the linked list
void search(Node* head, int value) {
    Node* temp = head;
    while (temp != nullptr) {
        if (temp->data == value) {
            cout << "Value " << value << " found\n";
            return;
        }
        temp = temp->next;
    }
    cout << "Value " << value << " not found\n";
}

// Function to update the first occurrence of a value in the linked list
void update(Node* head, int oldValue, int newValue) {
    Node* temp = head;
    while (temp != nullptr) {
        if (temp->data == oldValue) {
            temp->data = newValue;
            cout << "Value " << oldValue << " updated to " << newValue << "\n";
            return;
        }
        temp = temp->next;
    }
    cout << "Value " << oldValue << " not found\n";
}

// Function to print the linked list
void print(Node* head) {
    Node* temp = head;
    while (temp != nullptr) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main() {
    Node* head = nullptr;

    // Adding values to the linked list
    add(head, 1);
    add(head, 2);
    add(head, 3);

    // Printing the linked list
    cout << "Linked list after adding values: ";
    print(head);

    // Searching for a value
    search(head, 2);

    // Updating a value
    update(head, 2, 5);
    cout << "Linked list after updating a value: ";
    print(head);

    // Removing a value
    remove(head, 1);
    cout << "Linked list after removing a value: ";
    print(head);

    return 0;
}
