//Check if brackets are balanced in an expression.
#include <iostream>
#include <stack>
#include <string>
using namespace std;

bool isMatching(char open, char close) {
    return (open == '(' && close == ')') ||
           (open == '{' && close == '}') ||
           (open == '[' && close == ']');
}

bool areBracketsBalanced(string expr) {
    stack<char> s;

    for (char ch : expr) {
        if (ch == '(' || ch == '{' || ch == '[') {
            s.push(ch);
        } else if (ch == ')' || ch == '}' || ch == ']') {
            if (s.empty() || !isMatching(s.top(), ch)) {
                return false;
            }
            s.pop();
        }
    }

    return s.empty(); // If stack is empty, brackets are balanced
}

int main() {
    string expression;
    cout << "Enter an expression: ";
    cin >> expression;

    if (areBracketsBalanced(expression))
        cout << "Brackets are balanced." << endl;
    else
        cout << "Brackets are NOT balanced." << endl;

    return 0;
}

//Time Complexity	O(n)	
//Space Complexity	O(n)