
//Merge two sorted arrays into one.

#include <iostream>
#include <vector>
using namespace std;

vector<int> mergeSortedArrays(const vector<int>& a, const vector<int>& b) {
    int i = 0, j = 0;
    vector<int> merged;

    while (i < a.size() && j < b.size()) {
        if (a[i] < b[j]) {
            merged.push_back(a[i++]);
        } else {
            merged.push_back(b[j++]);
        }
    }

    // Add remaining elements
    while (i < a.size()) {
        merged.push_back(a[i++]);
    }
    while (j < b.size()) {
        merged.push_back(b[j++]);
    }

    return merged;
}

int main() {
    vector<int> arr1 = {1, 3, 5, 7};
    vector<int> arr2 = {2, 4, 6, 8};

    vector<int> result = mergeSortedArrays(arr1, arr2);

    cout << "Merged array: ";
    for (int val : result)
        cout << val << " ";
    cout << endl;

    return 0;
}
// Time complexity-->Best/Average/Worst Case : O(n + m)

//Space Complexity: O(n + m) (for output array)