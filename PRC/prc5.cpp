// queue is fifo (first in first out)
#include <iostream>
using namespace std;

struct Queue{
    int *nums; 
    int size;
    int capacity;

    // contruct 
    Queue(int cap){
        capacity = cap;
        size = 0;
        nums = new int [capacity];
    }

    //destruct
    ~Queue() {
        delete[] nums; 
    }

    bool isEmpty(){
        return size == 0;
    }
    
    // add
    void enqueue(int v){
        if (size < capacity){
            nums[size++] = v;
        }else{
            cout << "full" <<endl;
        }
    }

    // remove 
    int dequeue(){
        if (!isEmpty()){
            int f = nums[0];
            for (int i = 1; i < size; i++){
                nums[i - 1] = nums[i];
            }
            size--;
            return f;
        } else {
            cout << "empty" << endl;
            return -1;
        }
    }

    void display() {
        for (int i = 0; i < size; i++) {
           cout << nums[i] << " ";
       }
       cout << endl;
    }

};

int main (){
    Queue q(5);

    q.enqueue(1);
    q.enqueue(2);
    q.enqueue(3);

    q.display();

    q.dequeue();

    q.display();
}