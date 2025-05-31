//check after reversing  the string whether it is palindrome or not
#include <iostream>
#include <algorithm> // For std::reverse
using namespace std;

bool isPalindrome(string str) {
    string reversedStr = str;
    reverse(reversedStr.begin(), reversedStr.end()); // Reverse the string
    return str == reversedStr; // Check if original and reversed strings are equal
}

int main() {
    string input;
    cout << "Enter a string: ";
    cin >> input;

    if (isPalindrome(input)) {
        cout << "The string is a palindrome." << endl;
    } else {
        cout << "The string is not a palindrome." << endl;
    }

    return 0;
}
