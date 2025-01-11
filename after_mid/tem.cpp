#include <iostream>
using namespace std;

template <typename T>
class Stack {
private:
    T* arr;
    int top;
    int capacity;

public:
    // Constructor
    Stack(int size = 100) {
        arr = new T[size];
        capacity = size;
        top = -1;
    }

    // Destructor
    ~Stack() {
        delete[] arr;
    }

    void push(T value) {
        if (top == capacity - 1) {
            cout << "Stack Overflow\n";
            return;
        }
        arr[++top] = value;
    }

    T pop() {
        if (isEmpty()) {
            cout << "Stack Underflow\n";
            return T(); // Return default value
        }
        return arr[top--];
    }

    T peek() {
        if (!isEmpty()) {
            return arr[top];
        }
        cout << "Stack is empty\n";
        return T();
    }

    bool isEmpty() {
        return top == -1;
    }
};
int main() {
    Stack<int> intStack;

    intStack.push(10);
    intStack.push(20);
    intStack.push(30);

    cout << "Top element: " << intStack.peek() << endl;

    cout << "Popped: " << intStack.pop() << endl;
    cout << "Popped: " << intStack.pop() << endl;

    if (intStack.isEmpty()) {
        cout << "Stack is empty now.\n";
    } else {
        cout << "Stack is not empty.\n";
    }
}