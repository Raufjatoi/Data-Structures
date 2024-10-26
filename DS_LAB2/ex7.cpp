// Write a C++ program to deletes ITEM from lOC given by user of the array. Print all
// elements of the array.
#include <iostream>
using namespace std;

void del (int nums[], int &size , int loc){
    for (int i = loc; i < size - 1; i++) {
        nums[i] = nums[i + 1];
    }
    size --;
}
int main (){
    int nums [] = {1,2,3,4,5,5,6};
    int len = sizeof(nums) / sizeof(nums[3]);
    int index = 5; 
    del (nums , len , index);

    for (int i = 0; i < len ; i++) cout << nums[i] << " ";
}