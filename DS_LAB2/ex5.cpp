// Write a C++ program to deletes ITEM from Top of the array. Print all elements of the
// array.
#include <iostream>
using namespace std;

void del(int nums[], int &size) {
    for (int i = 0; i < size - 1; i++) {
        nums[i] = nums[i + 1];
    }
    size--;
}
int main(){
    int nums [] = {1,1,2,3,4,5};
    int len = (sizeof(nums) / sizeof(nums[0]));

    del (nums , len);

    for (int i =0; i < len; i++) cout << nums[i] <<" ";
}