//FIND NUMBER OF ODD EVEN NUMBERS IN A LIST

#include <iostream>
using namespace std;

void countOddEven(int arr[], int n) {
    int odd = 0, even = 0;

    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 == 0)
            even++;
        else
            odd++;
    }

    cout << "Even numbers: " << even << endl;
    cout << "Odd numbers: " << odd << endl;
}

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6, 7};
    int n = sizeof(arr) / sizeof(arr[0]);

    countOddEven(arr, n);
    return 0;
}
//Time Complexity: O(n)
//Space Complexity: O(1)