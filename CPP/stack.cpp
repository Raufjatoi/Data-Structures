#include <iostream>
using namespace std;

struct Stack {
    int* nums;   // Pointer to dynamically allocate an array
    int size;
    int capacity;

    Stack(int cap) {
        capacity = cap;
        size = 0;
        nums = new int[capacity];
    }

    ~Stack() {
        delete[] nums;
    }

    bool isEmpty() {
        return size == 0;
    }
    
    //add
    void push(int value) {
        if (size < capacity) {
            nums[size++] = value; // Add value to the top of the stack
        } else {
            cout << "Stack is full!" << endl;
        }
    }

    // remove 
    int pop() {
        if (!isEmpty()) {
            return nums[--size]; // Decrease size and return the top value
        } else {
            cout << "Stack is empty!" << endl;
            return -1; // Indicate that the stack is empty
        }
    }

    int top() {
        if (!isEmpty()) {
            return nums[size - 1]; // Return the top value
        } else {
            cout << "Stack is empty!" << endl;
            return -1; // Indicate that the stack is empty
        }
    }
};

int main() {
    Stack s(5);

    s.push(10);
    s.push(20);
    s.push(30);
    
    cout << "Top element: " << s.top() << endl;

    cout << "Popped element: " << s.pop() << endl;
    cout << "Top element after pop: " << s.top() << endl;

    s.push(40);
    s.push(50);
    s.push(60);
    
    while (!s.isEmpty()) {
        cout << "Popped element: " << s.pop() << endl;
    }

    return 0;
}