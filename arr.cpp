#include <iostream>
#include <string>

using namespace std;

class SimpleList {
private:
    string* items;     // Pointer to dynamically allocated array of strings
    int capacity;      // Total capacity of the list
    int size;          // Current number of items in the list

public:
    // Constructor
    SimpleList(int cap) : capacity(cap), size(0) {
        items = new string[capacity];  // Dynamically allocate memory for items
    }

    // Destructor
    ~SimpleList() {
        delete[] items;  // Free the allocated memory
    }

    // Method to add an item to the list
    void addItem(const string& item) {
        if (size < capacity) {
            items[size] = item;  // Add the item to the array
            size++;              // Increment the size
        } else {
            cout << "List is full!" << endl;
        }
    }

    // Method to display the items in the list
    void displayItems() const {
        cout << "Items in the list:" << endl;
        for (int i = 0; i < size; i++) {
            cout << items[i] << endl;  // Print each item
        }
    }
};

int main() {
    SimpleList myList(5);  // Create a SimpleList with a capacity of 5

    // Adding items to the list
    myList.addItem("Alice");
    myList.addItem("Bob");
    myList.addItem("Charlie");
    myList.addItem("David");
    myList.addItem("Eva");

    // Attempting to add another item (should show "List is full!")
    myList.addItem("Frank");

    // Displaying items in the list
    myList.displayItems();

    return 0;
}
