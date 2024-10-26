#include <iostream>
using namespace std;

void add(int arr1[], int arr2[], int result[], int size) {
    for (int i = 0; i < size; i++) {
        result[i] = arr1[i] + arr2[i];
    }
}

int main() {
    const int size = 5;
    int arr1[size] = {1, 2, 3, 4, 5};
    int arr2[size] = {1, 2, 3, 4, 5};
    int result[size];

    add(arr1, arr2, result, size);

    for (int i = 0; i < size; i++) cout << result[i] << " ";
}