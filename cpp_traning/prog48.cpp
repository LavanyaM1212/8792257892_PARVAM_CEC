//count the number of vowel in the given string 
#include <iostream>
#include <string>
#include <cctype>

int countVowels(const std::string& str) {
    int vowelCount = 0;
    for (char ch : str) {
        ch = std::tolower(ch); 
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
            vowelCount++;
        }
    }
    return vowelCount;
}

int main() {
    std::string input;
    std::cout << "Enter a string: ";
    std::getline(std::cin, input); 
    int vowels = countVowels(input);
    std::cout << "Number of vowels: " << vowels << std::endl;

    return 0;
}
