#include <iostream>
#include <cmath>

// Function to calculate the area of a square
double calculateSquareArea(double side) {
    return side * side;
}

// Function to calculate the area of a rectangle
double calculateRectangleArea(double length, double width) {
    return length * width;
}

// Function to calculate the area of a triangle
double calculateTriangleArea(double base, double height) {
    return 0.5 * base * height;
}

int main() {
    int choice;
    do {
        std::cout << "Please select the area of the shape to calculate" << std::endl;
        std::cout << "1. Square" << std::endl;
        std::cout << "2. Rectangle" << std::endl;
        std::cout << "3. Triangle" << std::endl;
        std::cout << "4. Quit Program" << std::endl;
        std::cout << "Enter selection: ";
        std::cin >> choice;

        switch (choice) {
            case 1: {
                double side;
                std::cout << "Enter the side length of the square: ";
                std::cin >> side;
                std::cout << "Area of the square: " << calculateSquareArea(side) << std::endl;
                break;
            }
            case 2: {
                double length, width;
                std::cout << "Enter the length of the rectangle: ";
                std::cin >> length;
                std::cout << "Enter the width of the rectangle: ";
                std::cin >> width;
                std::cout << "Area of the rectangle: " << calculateRectangleArea(length, width) << std::endl;
                break;
            }
            case 3: {
                double base, height;
                std::cout << "Enter the base of the triangle: ";
                std::cin >> base;
                std::cout << "Enter the height of the triangle: ";
                std::cin >> height;
                std::cout << "Area of the triangle: " << calculateTriangleArea(base, height) << std::endl;
                break;
            }
            case 4:
                std::cout << "Exiting the program. Goodbye!" << std::endl;
                break;
            default:
                std::cout << "Invalid input. Please enter a valid selection." << std::endl;
        }
    } while (choice != 4);

    return 0;
}
#include <iostream>
#include <cmath>

// Function to calculate the area of a square
double calculateSquareArea(double side) {
    return side * side;
}

// Function to calculate the area of a rectangle
double calculateRectangleArea(double length, double width) {
    return length * width;
}

// Function to calculate the area of a triangle
double calculateTriangleArea(double base, double height) {
    return 0.5 * base * height;
}

int main() {
    int choice;
    do {
        std::cout << "Please select the area of the shape to calculate" << std::endl;
        std::cout << "1. Square" << std::endl;
        std::cout << "2. Rectangle" << std::endl;
        std::cout << "3. Triangle" << std::endl;
        std::cout << "4. Quit Program" << std::endl;
        std::cout << "Enter selection: ";
        std::cin >> choice;

        switch (choice) {
            case 1: {
                double side;
                std::cout << "Enter the side length of the square: ";
                std::cin >> side;
                std::cout << "Area of the square: " << calculateSquareArea(side) << std::endl;
                break;
            }
            case 2: {
                double length, width;
                std::cout << "Enter the length of the rectangle: ";
                std::cin >> length;
                std::cout << "Enter the width of the rectangle: ";
                std::cin >> width;
                std::cout << "Area of the rectangle: " << calculateRectangleArea(length, width) << std::endl;
                break;
            }
            case 3: {
                double base, height;
                std::cout << "Enter the base of the triangle: ";
                std::cin >> base;
                std::cout << "Enter the height of the triangle: ";
                std::cin >> height;
                std::cout << "Area of the triangle: " << calculateTriangleArea(base, height) << std::endl;
                break;
            }
            case 4:
                std::cout << "Exiting the program. Goodbye!" << std::endl;
                break;
            default:
                std::cout << "Invalid input. Please enter a valid selection." << std::endl;
        }
    } while (choice != 4);

    return 0;
}
