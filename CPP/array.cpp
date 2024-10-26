// an Array is a collection of elements , all of which are same type and
// stored in a contiguous memory locations. 

#include <iostream>
using namespace std;

int main(){
    int nums[5] = {1,2,3,4,5};
    cout << "location in memory : " << nums << endl;

    for (int i = 0; i < 5; i++){
        cout << "address of nums[" << i << "]: " << &nums[i] << " -> value: " << nums[i] << endl;
    }
}