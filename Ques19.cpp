// Find the intersection of two arrays.

#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;

vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
    unordered_map<int, int> count;
    vector<int> result;

    // Count elements in nums1
    for (int num : nums1)
        count[num]++;

    // Check in nums2 and decrease count
    for (int num : nums2) {
        if (count[num] > 0) {
            result.push_back(num);
            count[num]--;
        }
    }

    return result;
}

int main() {
    int n, m;
    cout << "Enter size of first array: ";
    cin >> n;
    vector<int> nums1(n);
    cout << "Enter elements of first array: ";
    for (int i = 0; i < n; i++)
        cin >> nums1[i];

    cout << "Enter size of second array: ";
    cin >> m;
    vector<int> nums2(m);
    cout << "Enter elements of second array: ";
    for (int i = 0; i < m; i++)
        cin >> nums2[i];

    vector<int> result = intersect(nums1, nums2);

    cout << "Intersection of arrays: ";
    for (int num : result)
        cout << num << " ";
    cout << endl;

    return 0;
}

//Time Complexity: O(n + m)
//Space Complexity: O(min(n, m)) for storing counts