//Find the sum of digits of a number.
#include <iostream>
using namespace std;

int sumOfDigits(int num) {
    int sum = 0;

    while (num > 0) {
        sum += num % 10;  // Get last digit
        num /= 10;        // Remove last digit
    }

    return sum;
}

int main() {
    int number;
    cout << "Enter a number: ";
    cin >> number;

    if (number < 0)
        number = -number;  // Handle negative input

    cout << "Sum of digits: " << sumOfDigits(number) << endl;
    return 0;
}

/*
Time Complexity	O(log₁₀n)
Space Complexity	O(1)
*/