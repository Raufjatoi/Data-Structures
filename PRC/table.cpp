#include <iostream>

using namespace std;

int main() {
    int table;

    cout << "Table: ";
    cin >> table;

    for (int i = 1; i < 11; i++) {
        cout << table << " x " << i << " = " << (table * i) << endl;
    }
    
    return 0;
}
