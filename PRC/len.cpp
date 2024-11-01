#include <iostream>
using namespace std;

int main (){
    int nums[] = {1,2,3,4,5,6}; // index_len = 5 , real_len 6 
    int len = sizeof(nums); // so 24 is maybe like a bits not byte 
    int real_len = sizeof(nums) / sizeof(nums[0]);
    int index_len = (sizeof(nums) / sizeof(nums[0]) - 1); // hope this works 
    cout << index_len << endl;
    cout << real_len << endl;
    cout << len ;
    cout<< endl;
    cout << (sizeof(nums) / sizeof(1)) << endl;
    cout << sizeof(1);
}