// linear search with duplicates 

#include <iostream>
using namespace std;

int index = 0;
bool duplicate = false;
int repeat = 1;
int f = 0;
void linearSearch(int arr[], int n , int x){
    for (int i = 0; i < n; i ++){
        if (arr[i] == x){
            cout << arr[i] << " found at " << index << "\n duplicate: " << duplicate << endl;
            index++;
            repeat ++;
            f++;
            if ( repeat == 2){
                duplicate = true;
            }
        }
        else{
            index ++;
        }  
    } 
    if ( f < 1){
    cout << "not found" << endl;
    }
}

int main (){
    int arr[] = {1,2,2,3,4,5,6,7,8,9,10};
    int num , n = sizeof(arr)/sizeof(arr[0]);
    cout << "\n Enter Number to Search: ";
    cin >> num;
    linearSearch(arr , n , num);
}