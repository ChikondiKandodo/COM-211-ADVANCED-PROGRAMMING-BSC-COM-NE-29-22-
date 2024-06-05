#include <iostream>
#include <string>

int main() {
    // Dynamically allocate an integer
    int* dynamicInt = new int;

    // Dynamically allocate a string
    std::string* dynamicString = new std::string;

    // User input for the dynamically allocated integer
    std::cout << "Enter an integer value: ";
    std::cin >> *dynamicInt;

    // User input for the dynamically allocated string
    std::cout << "Enter a string value: ";
    std::cin.ignore(); // Ignore the newline character in the input buffer
    std::getline(std::cin, *dynamicString);

    // Output the values
    std::cout << "Dynamically allocated integer value: " << *dynamicInt << std::endl;
    std::cout << "Dynamically allocated string value: " << *dynamicString << std::endl;

    // Deallocate memory
    delete dynamicInt;
    delete dynamicString;

    return 0;
}
