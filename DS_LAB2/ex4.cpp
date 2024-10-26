// Write a C++ program to insert new ITEM at given location LOC. Print all elements of
// the array
#include <iostream>
using namespace std;

void add(int nums[], int &size, int loc, int item) {
    for (int i = size; i > loc; i--) {
        nums[i] = nums[i - 1];
    }
    nums[loc] = item;
    size++;
}

int main() {
    int nums[10] = {1, 2, 3, 4, 5, 7};
    int size = 6;
    int item = 6;
    int loc = 5; // index

    add(nums, size, loc, item);

    for (int i = 0; i < size; i++) cout << nums[i] << " ";
}