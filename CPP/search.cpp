#include <iostream>
using namespace std;

void linear(int arr[], int n, int v) {
    bool found = false;
    for (int i = 0; i < n; i++) {
        if (arr[i] == v) {
            cout << "found" << endl;
            found = true;
            break;
        }
    }
    if (!found) {
        cout << "not found" << endl;
    }
}

void binary(int arr[], int n, int v) {
    int low = 0, high = n - 1;
    while (low <= high) {
        int mid = (low + high) / 2;
        if (arr[mid] == v) {
            cout << "found" << endl;
            return;
        }
        else if (arr[mid] < v) {
            low = mid + 1;
        }
        else {
            high = mid - 1;
        }
    }
    cout << "not found" << endl;
}

int main() {
    int arr[] = {10, 32, 45, 55, 65, 66, 77};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    int value;
    cout << "num: ";
    cin >> value;

    char choice;
    cout << "l or b: ";
    cin >> choice;

    if (choice == 'l') {
        linear(arr, n, value);
    }
    else if (choice == 'b') {
        binary(arr, n, value);
    }
    else {
        cout << "choice l or b" << endl;
    }
}
