//Check if a number is a perfect square.

#include <iostream>
#include <cmath>
using namespace std;

bool isPerfectSquare(int n) {
    if (n < 0) return false; // negative numbers can't be perfect squares

    int root = sqrt(n);
    return root * root == n;
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    if (isPerfectSquare(num))
        cout << num << " is a perfect square." << endl;
    else
        cout << num << " is not a perfect square." << endl;

    return 0;
}

//Time Complexity: O(1) 
//Space Complexity: O(1)