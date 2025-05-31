//remove all the duplicate from the string
#include <iostream>
#include <unordered_set>
using namespace std;

string removeDuplicates(const string &str) {
    unordered_set<char> seen;
    string result;

    for (char ch : str) {
        if (seen.find(ch) == seen.end()) {
            seen.insert(ch);
            result += ch;
        }
    }
    return result;
}

int main() {
    string input = "programming";
    cout << "Original String: " << input << endl;
    cout << "String without duplicates: " << removeDuplicates(input) << endl;
    return 0;
}

