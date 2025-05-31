//palindrame or not
#include <iostream>
#include <string>
using namespace std;

bool isPalindrome(const string& str) {
    int start = 0, end = str.length() - 1;
    while (start < end) {
        if (str[start] != str[end]) {
            return false;
        }
        start++;
        end--;
    }
    return true;
}

int main() {
    string input;
    cout << "Enter a sequence: ";
    cin >> input;

    if (isPalindrome(input)) {
        cout << "The sequence is a palindrome." << endl;
    } else {
        cout << "The sequence is not a palindrome." << endl;
    }

    return 0;
}
