#include <iostream>

using namespace std;

void bubbleSort(int arr[], int n){
    for (int i = 0; i < n - 1; i++){
        for (int j = 0; j < n - 1; j++){
            if(arr[j] > arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j + 1] = temp;
            }
        }
    }
}
void print(int arr[], int n){
    for (int i = 0 ; i < n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main(){
    int numbers[] = {64,34,25,12,22,11,99};
    int n = sizeof(numbers) / sizeof(numbers[0]);

    bubbleSort(numbers , n);

    cout << "sorted array: ";
    print(numbers, n);

}