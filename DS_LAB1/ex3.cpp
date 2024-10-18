// 3. Write C++ program to build simple calculator using switch case statement.

#include <iostream>
using namespace std;

int main() {
    char op;
    float num1, num2;

    cout << "num1: ";
    cin >> num1;
    cout << "num2: ";
    cin >> num2;

    cout << "operation (+, -, *, /): ";
    cin >> op;

    switch(op) {
        case '+':
            cout << "result: " << num1 << " + " << num2 << " = " << num1 + num2 << endl;
            break;
        case '-':
            cout << "result: " << num1 << " - " << num2 << " = " << num1 - num2 << endl;
            break;
        case '*':
            cout << "result: " << num1 << " * " << num2 << " = " << num1 * num2 << endl;
            break;
        case '/':
            if(num2 != 0) {
                cout << "result: " << num1 << " / " << num2 << " = " << num1 / num2 << endl;
            } else {
                cout << "cant divide by zero." << endl;
            }
            break;
        default:
            cout << "invalid operater" << endl;
    }

}
