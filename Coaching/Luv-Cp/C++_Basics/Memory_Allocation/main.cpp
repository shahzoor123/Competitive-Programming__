#include <cstdlib>  // For malloc, realloc, free
#include <iostream>

int main() {
    // Allocate memory for 5 integers
    int* arr = (int*)malloc(5 * sizeof(int));
    if (arr == nullptr) {
        std::cout << "Memory allocation failed!" << std::endl;
        return 1;
    }

    // Initialize array
    for (int i = 0; i < 5; ++i) {
        arr[i] = i + 1;
    }

    // Print original array
    std::cout << "Original array: ";
    for (int i = 0; i < 5; ++i) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    // Reallocate memory for 10 integers (increase the size)
    int* new_arr = (int*)realloc(arr, 10 * sizeof(int));
    if (new_arr == nullptr) {
        std::cout << "Memory reallocation failed!" << std::endl;
        free(arr);  // Free original memory if realloc fails
        return 1;
    }

    // Initialize new elements
    for (int i = 5; i < 10; ++i) {
        new_arr[i] = i + 1;
    }

    // Print expanded array
    std::cout << "Expanded array: ";
    for (int i = 0; i < 10; ++i) {
        std::cout << new_arr[i] << " ";
    }
    std::cout << std::endl;

    // Free the memory
    free(new_arr);

    return 0;
}
