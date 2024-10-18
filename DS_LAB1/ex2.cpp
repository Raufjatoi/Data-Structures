// 2. Write C++ program to convert temperature from centigrade to Fahrenheit.

#include <iostream>
using namespace std;

int main() {
    float celsius, fahrenheit;

    cout << "celsius: ";
    cin >> celsius;

    // formula (c X 9/5) + 32
    fahrenheit = (celsius * 9/5) + 32;

    cout << "fahrenheit: " << fahrenheit << endl;

    return 0;
}
