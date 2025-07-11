//Find the first non-repeating character in a string.
#include <iostream>
#include <unordered_map>
#include <string>
using namespace std;

char firstNonRepeatingChar(const string& str) {
    unordered_map<char, int> freq;

    // First pass: count frequencies
    for (char ch : str) {
        freq[ch]++;
    }

    // Second pass: find first non-repeating
    for (char ch : str) {
        if (freq[ch] == 1)
            return ch;
    }

    return '\0'; // null character if no non-repeating character
}

int main() {
    string str;
    cout << "Enter a string: ";
    getline(cin, str);

    char result = firstNonRepeatingChar(str);

    if (result != '\0')
        cout << "First non-repeating character: " << result << endl;
    else
        cout << "No non-repeating character found." << endl;

    return 0;
}
//Time Complexity: O(n)
//Space Complexity: O(1)