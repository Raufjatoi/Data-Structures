#include <iostream>
#include <stack>
#include <cctype>
using namespace std;

int prcd (char op){
    if (op == '+' || op == '-') 
    return 1;
    if (op == '*' || op == '/') 
    return 2;

    return 0;
}

bool isOp (char c){
    return c == '+' || c == '-' || c == '*' || c == '/';
}

string infixToPostfix (const string& infix){
    stack<char> s;
    string postfix = "";

    for (char c : infix){
        if (isalnum(c)){
            postfix += c;
        } else if ( c == '('){
            s.push(c);
        } else if (c == ')'){
            while (!s.empty() && s.top() != '('){
                postfix += s.top();
                s.pop();
            }
            s.pop();
        } else if (isOp(c)){
            while (!s.empty() && prcd(s.top()) >= prcd (c)){
                postfix += s.top();
                s.pop();
            }
            s.push(c);
        }
    }

    while (!s.empty()){
        postfix += s.top();
        s.pop();
    }

    return postfix;
}

int main(){
    string i = "(A+B)*C-(D/E)";
    cout << i << endl;
    string p = infixToPostfix(i);
    cout << p << endl;
}