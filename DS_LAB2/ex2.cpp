// Write a C++ program to insert new ITEM at Top of the array. Print all elements of
// the array
#include <iostream>
using namespace std;

void add(int nums[], int &size, int item) {
    for (int i = size; i > 0; i--) nums[i] = nums[i - 1]; 
    nums[0] = item;
    size++;
}

int main() {
    int nums[] = {1, 2, 3, 4, 5};
    int size = sizeof(nums) / sizeof(nums[0]);
    
    add(nums, size, 0); 
    
    for (int i = 0; i < size; i++) cout << nums[i] << " ";

    // cout<< &size;
}