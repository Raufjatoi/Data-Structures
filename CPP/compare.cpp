#include <iostream>
using namespace std;

int len(char str[]) {
    int l = 0;
    while (str[l] != '\0') {
        l++;
    }
    return l;
}

int main() {
    char str1[100];
    char str2[100];
    cout << "string1: ";
    cin.getline(str1, 100); 
    cout << "string2: ";
    cin.getline(str2, 100);

    if (len(str1) != len(str2)){
        cout << "not same";
        return 0;
    }
    for(int i=0; i <= len(str1); i++){
        if (str1[i] != str2[i]){
            cout << "not same";
            return 1;
        }
    }
    cout << "same";
}