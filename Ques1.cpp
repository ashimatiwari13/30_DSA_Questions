
//FIND MAXIMUM ELEMENT IN A ARRAY

#include <iostream>
using namespace std;

int findMax(int arr[], int n) {
    int maxElement = arr[0];  // Start with the first element
    for (int i = 1; i < n; i++) {
        if (arr[i] > maxElement) {
            maxElement = arr[i];  // Update if a bigger element is found
        }
    }
    return maxElement;
}

int main() {
    int arr[] = {10, 25, 3, 48, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    int maxVal = findMax(arr, n);
    cout << "Maximum element in the array is: " << maxVal << endl;

    return 0;
}

//Time Complexity: O(n)
//Space Complexity: O(1)