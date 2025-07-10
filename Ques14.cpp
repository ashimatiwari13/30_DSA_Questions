//Check if two strings are anagrams.

/* What is anagrams?:
Two strings are anagrams if they contain the same characters with the same frequencies, just possibly in a different order.
Example: "listen" and "silent" are anagrams.*/

#include <iostream>
#include <string>
#include <cctype>        // for tolower()
#include <unordered_map> // for case-sensitive
using namespace std;

// Case-Insensitive Function (uses lowercase conversion)
bool areAnagramsIgnoreCase(string s1, string s2) {
    if (s1.length() != s2.length())
        return false;

    int freq[26] = {0};

    for (char ch : s1)
        freq[tolower(ch) - 'a']++;

    for (char ch : s2) {
        freq[tolower(ch) - 'a']--;
        if (freq[tolower(ch) - 'a'] < 0)
            return false;
    }

    return true;
}

// Case-Sensitive Function (no conversion)
bool areAnagramsCaseSensitive(string s1, string s2) {
    if (s1.length() != s2.length())
        return false;

    unordered_map<char, int> freq;

    for (char ch : s1)
        freq[ch]++;

    for (char ch : s2) {
        freq[ch]--;
        if (freq[ch] < 0)
            return false;
    }

    return true;
}

int main() {
    string str1, str2;

    cout << "Enter first string: ";
    getline(cin, str1);

    cout << "Enter second string: ";
    getline(cin, str2);

    if (areAnagramsIgnoreCase(str1, str2))
        cout << "Case-Insensitive: The strings are anagrams." << endl;
    else
        cout << "Case-Insensitive: The strings are not anagrams." << endl;

    if (areAnagramsCaseSensitive(str1, str2))
        cout << "Case-Sensitive: The strings are anagrams." << endl;
    else
        cout << "Case-Sensitive: The strings are not anagrams." << endl;

    return 0;
}

//Time Complexity: O(n) 
//Space Complexity: O(1) 

