// Find the largest sum subarray (Kadane's Algorithm).

#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int kadaneAlgorithm(const vector<int>& arr) {
    int maxSum = INT_MIN;
    int currentSum = 0;

    for (int num : arr) {
        currentSum += num;
        if (currentSum > maxSum)
            maxSum = currentSum;
        if (currentSum < 0)
            currentSum = 0;
    }

    return maxSum;
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

    int maxSubarraySum = kadaneAlgorithm(arr);
    cout << "Maximum subarray sum is: " << maxSubarraySum << endl;

    return 0;
}

//Time Complexity: O(n)
//Space Complexity: O(1)