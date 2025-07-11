//Implement binary search on a sorted array.

#include <iostream>
#include <vector>
using namespace std;

int binarySearch(vector<int>& arr, int target) {
    int left = 0;
    int right = arr.size() - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (arr[mid] == target)
            return mid; // target found
        else if (arr[mid] < target)
            left = mid + 1;
        else
            right = mid - 1;
    }

    return -1; // target not found
}

int main() {
    int n, target;
    cout << "Enter size of the array: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter sorted array elements: ";
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    cout << "Enter target element to search: ";
    cin >> target;

    int index = binarySearch(arr, target);

    if (index != -1)
        cout << "Element found at index: " << index << endl;
    else
        cout << "Element not found in array." << endl;

    return 0;
}

//Time Complexity	O(log n)	
//Space Complexity	O(1)