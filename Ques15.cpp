//Remove duplicate elements from an array.

#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

vector<int> removeDuplicates(const vector<int>& arr) {
    unordered_set<int> seen;
    vector<int> result;

    for (int num : arr) {
        if (seen.find(num) == seen.end()) {
            result.push_back(num);
            seen.insert(num);
        }
    }

    return result;
}

int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    vector<int> uniqueArr = removeDuplicates(arr);

    cout << "Array after removing duplicates: ";
    for (int num : uniqueArr)
        cout << num << " ";
    cout << endl;

    return 0;
}
//Time Complexity: O(n)
// Space Complexity: O(n)