//remove all  the duplicate string and put all original string
#include <iostream>
#include <vector>
#include <set>

int main() {
    std::vector<std::string> strings = {"apple", "banana", "apple", "orange", "banana", "grape"};
    std::set<std::string> uniqueStrings(strings.begin(), strings.end());

    std::cout << "Unique strings are: ";
    for (const auto& str : uniqueStrings) {
        std::cout << str << " ";
    }
    std::cout << std::endl;

    return 0;
}
