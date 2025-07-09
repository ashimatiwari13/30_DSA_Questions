//Find the second largest element in an array.

#include <iostream>
#include <limits.h> // For INT_MIN
using namespace std;

int findSecondLargest(int arr[], int n) {
    if (n < 2) return -1;

    int first = INT_MIN;
    int second = INT_MIN;

    for (int i = 0; i < n; i++) {
        if (arr[i] > first) {
            second = first;
            first = arr[i];
        } 
        else if (arr[i] > second && arr[i] != first) {
            second = arr[i];
        }
    }

    return (second == INT_MIN) ? -1 : second;
}

int main() {
    int n;
    cout << "Enter array size: ";
    cin >> n;

    if (n < 2) {
        cout << "Need at least two elements.\n";
        return 0;
    }

    int arr[n];
    cout << "Enter " << n << " elements:\n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int secondLargest = findSecondLargest(arr, n);

    if (secondLargest != -1)
        cout << "Second largest element: " << secondLargest << endl;
    else
        cout << "No second largest element (all elements may be equal).\n";

    return 0;
}

//Time Complexity	O(n)
//Space Complexity	O(1)