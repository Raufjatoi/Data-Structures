// Write a C++ program to searches an element using the given index or by the value
#include <iostream>
using namespace std;

void search(int nums[], int &size, int val) {
    for (int i = 0; i < size; i++){ 
        if (nums[i] == val) { 
            cout << "found" << endl;
            return;
        }
    }
    cout << "not found" << endl;
}

int main(){
    int nums [] = {1,2,3,4,5};
    int len = sizeof(nums) / sizeof(nums[0]);
    int f = 3;
    int nf = 100;
    search(nums , len , f);
    search(nums , len , nf);
} 