// Write C++ program to display the diagonal elements of a given matrix.

#include <iostream>
using namespace std;

int main(){
    int arr1[3][3] = {{1,0,0}, {0,1,0}, {0,0,1}};

    int j = 0; 
    for (int i = 0; i < 3; i ++){
            cout << arr1[i][j] << " ";
            j++;
            cout << endl;
    }
}