//Reversal of string
#include <iostream>
#include <algorithm>
#include <string>

int main() {
    std::string str = "Hello, World!";
    std::reverse(str.begin(), str.end());
    std::cout << "Reversed string: " << str << std::endl;
    return 0;
}
