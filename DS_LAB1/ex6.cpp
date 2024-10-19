// Write a program to display the sum, difference and product of two complex numbers
// by creating a class named 'Complex' with separate functions for each operation
// whose real and imaginary parts are entered by the user.

#include <iostream>
using namespace std;

class Complex {
    float real, imag;

public:
    Complex(float r = 0, float i = 0) : real(r), imag(i) {}

    void input() {
        cout << "real part: "; cin >> real;
        cout << "imaginary part: "; cin >> imag;
    }

    void display() {
        cout << real << " + " << imag << "i" << endl;
    }

    Complex operator+( Complex c) {
        return {real + c.real, imag + c.imag};
    }

    Complex operator-( Complex c) {
        return {real - c.real, imag - c.imag};
    }

    Complex operator*(Complex c) {
        return {real * c.real - imag * c.imag, real * c.imag + imag * c.real};
    }
};

int main() {
    Complex num1, num2;

    cout << "enter first complex number:\n";
    num1.input();
    cout << "enter second complex number:\n";
    num2.input();

    cout << "\nSum: ";
    (num1 + num2).display();

    cout << "Difference: ";
    (num1 - num2).display();

    cout << "Product: ";
    (num1 * num2).display();

    return 0;
}
