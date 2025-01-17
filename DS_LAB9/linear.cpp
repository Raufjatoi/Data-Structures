// linear search in cpp 

#include <iostream>
using namespace std;
int index = 0;
void linearSearch(int arr[], int n, int x){
    for (int i = 0; i < n; i++){
        if (arr[i] == x){
            cout << "found at " << index << endl;
            return;
        } 
        else {
            index++;
        }
    }
    cout << "not found" << endl;
}

int main (){
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int num , n = sizeof(arr)/sizeof(arr[0]);
    cout << "\n Inter a number to Search: ";
    cin >> num;
    linearSearch(arr , n, num);
}