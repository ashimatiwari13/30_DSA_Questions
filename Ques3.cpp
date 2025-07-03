//REVERSE A GIVEN STRING

#include <iostream>
#include <string>
using namespace std;

void reverseString(string &str) {
    int start = 0;
    int end = str.length() - 1;

    while (start < end) {
        swap(str[start], str[end]);
        start++;
        end--;
    }
}

int main() {
    string str = "Ashima";
    reverseString(str);
    cout << "Reversed string: " << str << endl;
    return 0;
}
//Time Complexity: O(n)
//Space Complexity: O(1)