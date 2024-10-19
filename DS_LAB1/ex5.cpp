// 5. Write a program to display the average of three numbers entered by the user by
// creating a class named 'Average' having a function to calculate and display the
// average..

#include <iostream>
using namespace std;

class Average {
public:
    void calculateAverage(float num1, float num2, float num3) {
        float avg = (num1 + num2 + num3) / 3;
        cout << "average of the three numbers is: " << avg << endl;
    }
};

int main() {
    float num1, num2, num3;

    cout << "three numbers: ";
    cin >> num1 >> num2 >> num3;

    Average avgObj;

    avgObj.calculateAverage(num1, num2, num3);

    return 0;
}
