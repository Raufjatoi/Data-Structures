// Write a C++ program to add two 2-dimensional arrays.

#include <iostream>
using namespace std;

int main (){
    int arr1[2][2] = {{1,1}, {2,2}};  // 2rows and 2 cols
    int arr2[2][2] = {{2,2}, {1,1}};
    int arr3[2][2] = {};

    for (int i = 0; i < 2; i++){
        for (int j = 0; j < 2; j++){
            arr3[i][j] = arr1[i][j] + arr2[i][j];
        }
    }

    for (int i = 0; i < 2; i++){
        for (int j = 0; j < 2; j++){
            cout << arr3[i][j] << " ";
        }
        cout << endl;
    }
}