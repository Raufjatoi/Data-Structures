#include <iostream>

using namespace std;

int main(){
    int nums [5] = {5,1,2,4,3};
    cout << sizeof(nums) / sizeof(nums[0]) << endl;
}