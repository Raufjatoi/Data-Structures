// Write a C++ program to deletes ITEM from Bottom of the array. Print all elements of
// the array.
#include <iostream>
using namespace std;

void del (int nums [] , int &size) {
    size--;
}
int main(){
    int nums [] = {1,2,3,4,4};
    int len = sizeof(nums) / sizeof(nums[1]);
    del (nums , len);
    for (int i = 0; i < len; i++) cout << nums[i] << " ";
}