#include <iostream>
#include <fstream>
#include <string>
#include <algorithm>

// Function to count the number of vowels in a string
int countVowels(const std::string& str) {
    int count = 0;
    for (char c : str) {
        if (std::string("aeiouAEIOU").find(c) != std::string::npos) {
            count++;
        }
    }
    return count;
}

// Function to count the number of words in a string
int countWords(const std::string& str) {
    std::istringstream iss(str);
    return std::distance(std::istream_iterator<std::string>(iss), std::istream_iterator<std::string>());
}

// Function to reverse a string
std::string reverseString(const std::string& str) {
    return std::string(str.rbegin(), str.rend());
}

// Function to capitalize the second letter of each word in a string
std::string capitalizeSecondLetter(const std::string& str) {
    std::string result = str;
    bool capitalize = true;
    for (char& c : result) {
        if (std::isalpha(c)) {
            if (capitalize) {
                c = std::toupper(c);
                capitalize = false;
            } else {
                capitalize = true;
            }
        }
    }
    return result;
}

int main() {
    std::ifstream inputFile("file.txt");
    std::string fileData;

    if (inputFile.is_open()) {
        std::string line;
        while (std::getline(inputFile, line)) {
            fileData += line;
        }
        inputFile.close();

        // Count vowels
        int vowelCount = countVowels(fileData);
        std::cout << "Number of vowels in the text file statement: " << vowelCount << std::endl;

        // Count words
        int wordCount = countWords(fileData);
        std::cout << "Number of words in the text file statement: " << wordCount << std::endl;

        // Reverse statement
        std::string reversedStatement = reverseString(fileData);
        std::cout << "Reversed statement: " << reversedStatement << std::endl;

        // Capitalize second letter of each word
        std::string capitalizedStatement = capitalizeSecondLetter(fileData);
        std::cout << "Statement with the second letter of each word capitalized: " << capitalizedStatement << std::endl;
    } else {
        std::cerr << "Unable to open file" << std::endl;
    }

    return 0;
}
