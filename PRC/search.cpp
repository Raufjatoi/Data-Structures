#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
    vector<string> names = {"Rauf", "Umar", "Ahsan", "Najaf", "Ali", "Nawab", "Mudassir", "Huzaifa"};

    string name;
    cout << "Name: ";
    cin >> name;

    bool found = false;

    for (string name : names) {
        if (name == name) {  
            found = true;
            break;
        }
    }

    if (found) {
        cout << name << " was found in the list." << endl;
    } else {
        cout << name << " was not found in the list." << endl;
    }

    return 0;
}
