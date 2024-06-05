#include <iostream>

int main() {
    int rows, cols;

    // Input dimensions from the user
    do {
        std::cout << "Enter the number of rows (not exceeding 3): ";
        std::cin >> rows;
    } while (rows <= 0 || rows > 3);

    do {
        std::cout << "Enter the number of columns (not exceeding 3): ";
        std::cin >> cols;
    } while (cols <= 0 || cols > 3);

    // Dynamically allocate a 2D array of doubles
    double** array = new double*[rows];
    for (int i = 0; i < rows; i++) {
        array[i] = new double[cols];
    }

    // Assign values to each element of the array
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            std::cout << "Enter value for element [" << i << "][" << j << "]: ";
            std::cin >> array[i][j];
        }
    }

    // Output the values of each element of the array
    std::cout << "Values of the 2D array:" << std::endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            std::cout << array[i][j] << " ";
        }
        std::cout << std::endl;
    }

    // Deallocate memory
    for (int i = 0; i < rows; i++) {
        delete[] array[i];
    }
    delete[] array;

    return 0;
}
