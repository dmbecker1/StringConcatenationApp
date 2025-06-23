#include <iostream>
#include <string>

int main() {
    std::string firstInput, secondInput, result;

    for (int i = 1; i <= 3; ++i) {
        std::cout << "Test " << i << std::endl;

        std::cout << "Enter the first string: ";
        std::getline(std::cin, firstInput);

        std::cout << "Enter the second string: ";

        std::getline(std::cin, secondInput);

        result = firstInput + secondInput;

        std::cout << "Concatenated result: " << result << "\n\n";
    }

    return 0;
}