//Find the majority element in an array (if any).
//By-->Boyer-Moore Voting Algorithm
#include <iostream>
#include <vector>
using namespace std;

int findMajorityElement(vector<int>& nums) {
    int count = 0, candidate = -1;

    // Phase 1: Find candidate
    for (int num : nums) {
        if (count == 0) {
            candidate = num;
        }
        count += (num == candidate) ? 1 : -1;
    }

    // Phase 2: Verify candidate
    count = 0;
    for (int num : nums) {
        if (num == candidate)
            count++;
    }

    if (count > nums.size() / 2)
        return candidate;
    else
        return -1; // No majority element
}

int main() {
    int n;
    cout << "Enter size of array: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter array elements: ";
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    int result = findMajorityElement(arr);

    if (result != -1)
        cout << "Majority element is: " << result << endl;
    else
        cout << "No majority element found." << endl;

    return 0;
}
//Time Complexity: O(n)
//Space Complexity: O(1)