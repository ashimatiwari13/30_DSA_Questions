//Calculate the factorial of a number.

#include <iostream>
using namespace std;

long long factorial(int n) {
    long long fact = 1;

    for (int i = 2; i <= n; i++) {
        fact *= i;
    }

    return fact;
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    if (num < 0) {
        cout << "Factorial is not defined for negative numbers.\n";
    } else {
        cout << "Factorial of " << num << " is: " << factorial(num) << endl;
    }

    return 0;
}
/*
Time Complexity	O(n)
Space Complexity	O(1)
*/