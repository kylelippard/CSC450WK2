#include <iostream>
#include <string>

int main() {
    std::string firstString, secondString, concatenatedString;

    // Loop to take input and concatenate strings 3 times
    for (int i = 0; i < 3; ++i) {
        std::cout << "Enter the first string: ";
        std::getline(std::cin, firstString);

        std::cout << "Enter the second string: ";
        std::getline(std::cin, secondString);

        concatenatedString = firstString + " " + secondString;

        std::cout << "Concatenated string: " << concatenatedString << std::endl;
        std::cout << "-----------------------------" << std::endl;
    }

    return 0;
}

