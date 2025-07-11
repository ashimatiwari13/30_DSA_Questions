//Move all zeros to the end of an array.

#include <iostream>
#include <vector>
using namespace std;

void moveZerosToEnd(vector<int>& arr) {
    int n = arr.size();
    int index = 0;  // Position to place the next non-zero element

    // Move all non-zero elements to the front
    for (int i = 0; i < n; i++) {
        if (arr[i] != 0) {
            arr[index++] = arr[i];
        }
    }

    // Fill the remaining positions with zeros
    while (index < n) {
        arr[index++] = 0;
    }
}

int main() {
    int n;
    cout << "Enter size of the array: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter array elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    moveZerosToEnd(arr);

    cout << "Array after moving zeros to the end: ";
    for (int num : arr) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}

//Time Complexity: O(n)
//Space Complexity: O(1)