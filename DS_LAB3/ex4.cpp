// Write a C++ program to multiply two integer 3-dimensional arrays and print the
// output array.
#include <iostream>
using namespace std;

int main(){
    int arr1[3][3][3] = {
        {{1,2,3},{4,5,6},{7,8,9}},
        {{10,11,12},{13,14,15},{16,17,18}},
        {{19,20,21},{22,23,24},{25,26,27}}
    };

    int arr2[3][3][3] = {
        {{28,29,30},{31,32,33},{34,35,36}},
        {{37,38,39},{40,41,42},{43,44,45}},
        {{46,47,48},{49,50,51},{52,53,54}}
    };

    int res[3][3][3] = {};

    for (int i = 0; i < 3; i ++){
        for (int j = 0; j < 3; j++){
            for (int k = 0; k < 3; k++){
                res[i][j][k] = arr1[i][j][k] * arr2[i][j][k];
            }
        }
    }

    for (int i =0; i < 3; i ++){
        for (int j =0; j < 3; j ++ ){
            for (int k = 0; k < 3; k ++){
                cout << res[i][j][k] <<  " ";
            }
            cout << endl;
        }
        cout << endl;
    }
}