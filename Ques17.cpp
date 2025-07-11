/*Check if a number is an Armstrong number.

 An Armstrong number (also known as a narcissistic number) is a number that is
 equal to the sum of its own digits each raised to the power of the number of digits.


| Number   | Number of Digits (d) | Digit Breakdown | Calculation                                       | Sum  | Armstrong? 
  | **153**  | 3                    | 1, 5, 3         | $1^3 + 5^3 + 3^3 = 1 + 125 + 27$                  | 153  | ✅ Yes      
  | **9474** | 4                    | 9, 4, 7, 4      | $9^4 + 4^4 + 7^4 + 4^4 = 6561 + 256 + 2401 + 256$ | 9474 | ✅ Yes      
*/

#include <iostream>
#include <cmath>
using namespace std;

bool isArmstrong(int num) {
    int original = num;
    int sum = 0;
    int digits = log10(num) + 1; // number of digits

    while (num > 0) {
        int digit = num % 10;
        sum += pow(digit, digits);
        num /= 10;
    }

    return sum == original;
}

int main() {
    int number;
    cout << "Enter a number: ";
    cin >> number;

    if (isArmstrong(number))
        cout << number << " is an Armstrong number." << endl;
    else
        cout << number << " is not an Armstrong number." << endl;

    return 0;
}

//Time Complexity: O(d)
//Space Complexity: O(1)