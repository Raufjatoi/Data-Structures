#include <iostream>
using namespace std;

int main(){
    int arr1[3][3] = {{1, 1, 1}, {1, 1, 1}, {1, 1, 1}};
    int arr2[3][3] = {{2, 2, 2}, {2, 2, 2}, {2, 2, 2}};
    int result[3][3] = {};

    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            result[i][j] = arr1[i][j] * arr2[i][j];
        }
    }

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << result[i][j] << " ";
        }
        cout << endl;
    }
}