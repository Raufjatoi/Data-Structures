#include <iostream>
using namespace std;

struct Queue {
    int* nums; // pointer to dynamically allocate an array
    int size;
    int capacity;

    // constructor to initialize the queue
    Queue(int cap) {
        capacity = cap;
        size = 0;
        nums = new int[capacity]; // allocate memory for the queue
    }

    // destructor to free allocated memory
    ~Queue() {
        delete[] nums; 
    }

    bool isEmpty() {
        return size == 0;
    }

    // add
    void enqueue(int value) {
        if (size < capacity) {
            nums[size++] = value;
        } else {
            cout << "Queue is full!" << endl;
        }
    }
    
    // remove 
    int dequeue() {
        if (!isEmpty()) {
            int frontValue = nums[0];
            for (int i = 1; i < size; i++) {
                nums[i - 1] = nums[i];
            }
            size--;
            return frontValue;
        } else {
            cout << "Queue is empty!" << endl;
            return -1;
        }
    }

    int front() {
        if (!isEmpty()) {
            return nums[0];
        } else {
            cout << "Queue is empty!" << endl;
            return -1;
        }
    }
};

int main() {
    Queue q(5);

    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    
    cout << "Front element: " << q.front() << endl;

    cout << "Dequeued element: " << q.dequeue() << endl;
    cout << "Front element after dequeue: " << q.front() << endl; 

    q.enqueue(40);
    q.enqueue(50);
    q.enqueue(60);

    while (!q.isEmpty()) {
        cout << "Dequeued element: " << q.dequeue() << endl;
    }
    return 0;
}