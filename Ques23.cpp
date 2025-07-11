// Count vowels and consonants in a string.
#include <iostream>
#include <string>
using namespace std;

bool isVowel(char ch) {
    ch = tolower(ch);
    return (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u');
}

int main() {
    string str;
    cout << "Enter a string: ";
    getline(cin, str); // allows spaces too

    int vowels = 0, consonants = 0;

    for (char ch : str) {
        if (isalpha(ch)) { // check if it's a letter
            if (isVowel(ch))
                vowels++;
            else
                consonants++;
        }
    }

    cout << "Vowels: " << vowels << endl;
    cout << "Consonants: " << consonants << endl;

    return 0;
}

//Time Complexity	O(n)	
//Space Complexity	O(1)