// Write a C++ program to Find Sum of Diagonal Elements of Matrix

#include <iostream>
using namespace std;

int main(){
    int arr1[3][3] = {{3,0,0}, {0,2,0}, {0,0,1}};
    int total = 0;

    int j = 0; 
    for (int i = 0; i < 3; i ++){
            total += arr1[i][j];
            j++;
    }
    cout << total;
}