// Write a C++ program to updates an element at the given index.
#include <iostream>
using namespace std;

void update(int nums[], int &size, int val, int loc) {
    if (loc >= 0 && loc < size) {
        nums[loc] = val;
    } else {
        cout << "loc not found";
    }
}

int main() {
    int nums[] = {1, 2, 3, 4, 6};
    int len = sizeof(nums) / sizeof(nums[0]);
    int val = 5;
    int index = 4;

    update(nums, len, val, index);

    for (int i = 0; i < len; i++) cout << nums[i] << " ";
}