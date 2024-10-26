// Write a C++ program to print largest value of array.
#include <iostream>
using namespace std;

int max(int nums[], int len) {
    int n = nums[0];
    for (int i = 1; i < len; i++) {
        if (nums[i] > n) {
            n = nums[i];
        }
    }
    return n;
}

int main() {
    int nums[] = {1, 500, 2, 3, 40 , 800};
    int len = sizeof(nums) / sizeof(nums[0]);
    cout << max(nums, len);
}