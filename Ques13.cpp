//Find the missing number in a range from 1 to N.
#include <iostream>
#include <vector>
using namespace std;

int findMissingNumber(const vector<int>& arr, int N) {
    int total = N * (N + 1) / 2;
    int sum = 0;

    for (int num : arr) {
        sum += num;
    }

    return total - sum;
}

int main() {
    vector<int> arr = {1, 2, 4, 5, 6}; // Missing 3
    int N = 6;

    int missing = findMissingNumber(arr, N);
    cout << "Missing number is: " << missing << endl;

    return 0;
}
//Time Complexity: O(n)
// Space Complexity: O(1)