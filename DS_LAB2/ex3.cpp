// Write a C++ program to insert new ITEM at Bottom of the array. Print all elements
// of the array.
#include <iostream>
using namespace std;

void add(int nums[], int &size, int item) {
    nums[size] = item;
    size++;
}

int main() {
    int nums[6] = {1, 2, 3, 4, 5}; 
    int size = 5;

    add(nums, size, 6);

    for (int i = 0; i < size; i++) cout << nums[i] << " ";
}