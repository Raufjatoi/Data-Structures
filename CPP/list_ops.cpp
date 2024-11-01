#include <iostream>
using namespace std;

int max(int arr[], int size);
int min(int arr[], int size);
void add_top(int nums[], int &size, int item);
void add_bottom(int nums[], int &size, int item);
void add_cus(int nums[], int &size, int item, int index);
void dele(int nums[], int &size);
void dele_bottom(int nums[], int &size);
void dele_cus(int nums[], int &size , int index);
bool search(int nums[] , int size , int val);
void update(int nums[] , int &size , int val , int index);
void add(int arr1[], int arr2[], int result[], int size);
void sub(int arr1[], int arr2[], int result[], int size);

int main() {
    int nums[] = {1, 2, 3, 400, 5, 0, -1, 10};
    int len = (sizeof(nums) / sizeof(nums[0])) - 1;
    int item = 0;
    int last_item = 9;
    int update_item = 6;
    int index = 5;

    cout << "max : " << max(nums, len) << endl;
    cout << "min : " << min(nums, len) << endl;
    cout << "fake len : " << (sizeof(nums) / sizeof(nums[0])) << endl;
    cout << "real len : " << len << endl;

    for (int i = 0; i < len; i++) cout << nums[i] << " ";
    cout << endl;

    add_cus(nums, len, update_item, index);

    for (int i = 0; i < len; i++) cout << nums[i] << " ";
    cout << endl;

    add_top(nums, len, item);

    for (int i = 0; i < len; i++) cout << nums[i] << " ";
    cout << endl;

    add_bottom(nums, len, last_item);

    for (int i = 0; i < len; i++) cout << nums[i] << " ";
    cout << endl;

    dele(nums, len);

    for (int i = 0; i < len; i++) cout << nums[i] << " ";
    cout << endl;

    dele_bottom(nums , len);

    for (int i = 0; i < len ; i++) cout << nums[i] << " ";
    cout << endl;

    dele_cus(nums , len , 3);
    for (int i = 0; i < len; i++) cout << nums[i] << " ";
    cout << endl;

    cout << search(nums , len, 1 ) << endl;
    cout << search(nums , len , 10000) << endl;

    update(nums , len , 10000 , 0);

    for (int i = 0 ; i < len ; i++) cout << nums[i] << " ";
    cout << endl;

    int result[len] = {};
    add(nums , nums , result , len);

    for (int i =0; i < len ; i++) cout << result[i] << " ";
    cout << endl;

    int result2[len] = {};
    sub(nums, nums , result2 , len);
    
    for (int i =0; i < len ; i++) cout << result2[i] << " ";
    cout << endl;
}

int max(int arr[], int size) {
    int max = arr[0];
    for (int i = 0; i < size; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    return max;
}

int min(int arr[], int size) {
    int min = arr[0];
    for (int i = 0; i < size; i++) {
        if (arr[i] < min) {
            min = arr[i];
        }
    }
    return min;
}

void add_top(int nums[], int &size, int item) {
    for (int i = size; i > 0; i--) {
        nums[i] = nums[i - 1];
    }
    nums[0] = item;
    size++;
}

void add_bottom(int nums[], int &size, int item) {
    nums[size] = item;
    size++;
}

void add_cus(int nums[], int &size, int item, int index) {
    for (int i = size; i > index; i--) nums[i] = nums[i - 1];
    nums[index] = item;
    size++;
}

void dele(int nums[], int &size) {
    for (int i = 0; i < size - 1; i++) nums[i] = nums[i + 1];
    size--;
}

void dele_bottom(int nums[] , int &size){
    size--;
}
void dele_cus(int nums[] , int &size , int index){
    for (int i = index; i < size - 1; i ++){
        nums[i] = nums[i + 1];
    }
    size--;
}
bool search(int nums [] , int size  , int val){
    for(int i = 0; i < size; i ++) {
        if (nums[i] == val){
            return true;
        }
    }
    return false;
}
void update (int nums[] , int &size , int val , int index){
    nums[index] = val;
}
void add(int arr1[] , int arr2[], int result[] , int size){
    for (int i =0; i < size ; i ++){
        result[i] = arr1[i] + arr2[i];
    }
}
void sub (int arr1[], int arr2[], int result[] , int size){
    for (int i = 0; i < size ; i ++){
        result[i] = arr1[i] - arr2[i];
    }
}