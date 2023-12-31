#include <iostream>
#include <vector>

/**
 * @brief	Swap two elements in a vector.
 *
 * This function swaps the elements at positions `i` and `j` in the provided vector.
 *
 * @param i	Index of the first element to be swapped.
 * @param j	Index of the second element to be swapped.
 * @param array Reference to the vector containing elements.
 */
void swap(size_t i, size_t j, std::vector<int>& array) {
    int temp = array[i];
    array[i] = array[j];
    array[j] = temp;
}

/**
 * @brief	Perform Bubble Sort on a vector.
 *
 * This function sorts the elements of the vector in ascending order using the
 * Bubble Sort algorithm.
 *
 * @param array Reference to the vector to be sorted.
 */
void bubbleSort(std::vector<int>& array) {
    // Iterate through each element of the array
    for (size_t i = 0; i < array.size() - 1; ++i) {
        // Flag to keep track of whether any swaps occurred in this pass
        bool swapped = false;

        // Compare and swap adjacent elements within the unsorted portion of the array
        for (size_t j = 0; j < array.size() - 1 - i; ++j) {
            if (array[j] > array[j + 1]) {
                // Swap elements if they are in the wrong order
                swap(j, j + 1, array);

                // Set the flag to indicate a swap occurred
                swapped = true;
            }
        }

        // If no swaps were made in this pass, the array is already sorted
        if (!swapped) {
        	return;
        }
    }
}

int main() {
    // Example usage
    std::vector<int> myArray = {4, 2, 1, 3};

    // Print the original array
    std::cout << "Original array: ";
    for (int elem : myArray) {
        std::cout << elem << " ";
    }
    std::cout << std::endl;

    // Sort the array using bubble sort
    bubbleSort(myArray);

    // Print the sorted array
    std::cout << "Sorted array: ";
    for (int elem : myArray) {
        std::cout << elem << " ";
    }
    std::cout << std::endl;

    return 0;
}
