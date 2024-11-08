#include <iostream>
using namespace std;

int main(){
    int arr1[3][3][3] = {
        {{1,1,1}, {1,1,1}, {1, 1, 1}},
        {{2, 2, 2}, {2, 2,2}, {2, 2, 2}},
        {{3, 3, 3}, {3, 3, 3}, {3, 3, 3}}
    };

    int arr2[3][3][3] = {
        {{1, 1, 1}, {1, 1, 1}, {1, 1, 1}},
        {{2, 2, 2}, {2, 2, 2}, {2, 2, 2}},
        {{3, 3, 3}, {3, 3, 3}, {3, 3, 3}}
    };

    int result[3][3][3] = {};

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            for (int k = 0; k < 3; k++) {
                result[i][j][k] = arr1[i][j][k] * arr2[i][j][k];
            }
        }
    }

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            for (int k = 0; k < 3; k++) {
                cout << result[i][j][k] << " ";
            }
            cout << endl; 
        }
        cout << endl;
    }
}