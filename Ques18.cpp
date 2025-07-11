//Rotate an array to the left by K steps.

#include <iostream>
#include <vector>
using namespace std;

// Function to reverse a portion of the array
void reverse(vector<int>& arr, int start, int end) {
    while (start < end) {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}

// Function to perform left rotation by k steps
void leftRotate(vector<int>& arr, int k) {
    int n = arr.size();
    k = k % n;  // Handle cases where k > n

    reverse(arr, 0, k - 1);     // Reverse first k elements
    reverse(arr, k, n - 1);     // Reverse remaining elements
    reverse(arr, 0, n - 1);     // Reverse the whole array
}

int main() {
    int n, k;

    cout << "Enter size of the array: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter array elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Enter k (number of steps to rotate left): ";
    cin >> k;

    leftRotate(arr, k);

    cout << "Left rotated array: ";
    for (int num : arr) {
        cout << num << " ";
    }

    cout << endl;
    return 0;
}
//Time Complexity: O(n)
//Space Complexity: O(1)