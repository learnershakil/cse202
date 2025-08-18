#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    std::string str;
    std::cout << "Enter a string: ";
    std::getline(std::cin, str);

    std::string cleaned;
    for (char c : str) {
        if (!isspace(c))
            cleaned += std::tolower(c);
    }

    std::string reversed = cleaned;
    std::reverse(reversed.begin(), reversed.end());

    if (cleaned == reversed)
        std::cout << "Palindrome" << std::endl;
    else
        std::cout << "Not a palindrome" << std::endl;

    return 0;
}