//Convert a binary number to decimal.
/*
eg--->   Binary 1011 = 1×2^3 + 0×2^2 + 1×2^1 + 1×2^0 = 8 + 0 + 2 + 1 = 11
*/
#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int binaryToDecimal(string binary) {
    int decimal = 0;
    int power = 0;

    // Traverse from right to left
    for (int i = binary.length() - 1; i >= 0; i--) {
        if (binary[i] == '1') {
            decimal += pow(2, power);
        }
        power++;
    }

    return decimal;
}

int main() {
    string binary;
    cout << "Enter a binary number: ";
    cin >> binary;

    int result = binaryToDecimal(binary);
    cout << "Decimal equivalent: " << result << endl;

    return 0;
}

//Time Complexity  	O(n)	
//Space Complexity	O(1)