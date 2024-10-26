#include <iostream>
using namespace std;

void add (int arr [] , int size , int item){
    for (int i = size; i > 0; i--) arr[i] = arr[i - 1];
    arr[0] = item;
    size++;
}
int main(){
    int nums [] = {2,3,4,5,6};
    int size = sizeof(nums) / sizeof(nums[0]);
    
    add(nums , size , 1);

    for (int i = 0; i < size; i++) cout << nums[i] << " ";
}