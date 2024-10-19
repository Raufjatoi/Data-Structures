#include <iostream>

using namespace std;

int main() {
    // Allocate memory for 3 integers
    int *list = new int[3];

    list[0] = 1;
    list[1] = 2;
    list[2] = 3;

    for (int i = 0; i < 3; i++) {
        cout << list[i] << endl;
    }

    // Free the allocated memory
    delete[] list;

    return 0;
}