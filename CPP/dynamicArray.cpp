// a Dynamic Array resizes automatically , allowing efficient addition or removal 
// of elements , unlike fixed-size array.

#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> nums;

    nums.push_back(1);
    nums.push_back(2);
    nums.push_back(3);

    cout << "elements and their addresses after pushin back: " << endl;
    for (int i = 0 ; i < nums.size(); i++){
        cout << "value: " << nums[i] << " --> address: " << &nums[i] << endl;
    }

    nums.pop_back();

    cout << "elements and their addresses after popin back: " << endl;
    for (int i = 0 ; i < nums.size(); i++){
        cout << "value: " << nums[i] << " --> address: " << &nums[i] << endl;
    }
}