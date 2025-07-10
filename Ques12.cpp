//Count the frequency of elements in an array.
#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;

void countFrequencies(const vector<int>& arr) {
    unordered_map<int, int> freq;

    for (int num : arr) {
        freq[num]++;
    }

    for (auto& pair : freq) {
        cout << pair.first << " occurs " << pair.second << " times\n";
    }
}

int main() {
    vector<int> arr = {4, 2, 4, 5, 2, 3, 1, 4};

    countFrequencies(arr);

    return 0;
}

//Time Complexity: O(n)
//Space Complexity: O(n) (for map)