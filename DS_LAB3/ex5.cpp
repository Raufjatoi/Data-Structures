// Write a C++ program to Transpose Matrix.
#include <iostream>
using namespace std;

int main(){
    int arr1[2][2] = {{1, 2}, {3, 4}};
    int trans[2][2]; // trans mean row to col or col to row ig 

    for (int i = 0; i < 2; i++){
        for (int j = 0; j < 2; j++){
            cout << arr1[i][j] << " ";
        }
        cout << endl;        
    }
    
    cout << endl;

    for (int i = 0; i < 2; i++){
        for (int j = 0; j < 2; j++){
            trans[j][i] = arr1[i][j];
        }
    }

    for (int i = 0; i < 2; i++){
        for (int j = 0; j < 2; j++){
            cout << trans[i][j] << " ";
        }
        cout << endl;
    }
}