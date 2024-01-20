#include <iostream>
#include <vector>

/**
 * @brief	Swap two elements in a vector.
 *
 * This function swaps the elements at positions `i` and `j` in the provided vector.
 *
 * @param	i		Index of the first element to be swapped.
 * @param	j		Index of the second element to be swapped.
 * @param	array	Reference to the vector containing elements.
 */
void swap(int i, int j, std::vector<int>& array) {
    int temp = array[i];
    array[i] = array[j];
    array[j] = temp;
}

/**
 * @brief	Perform Selection Sort on a vector.
 *
 * This function sorts the elements of the vector in ascending order using the
 * Selection Sort algorithm.
 *
 * @param	array	Reference to the vector to be sorted.
 */
void selectionSort(std::vector<int>& array) {
	// This is the length of given array
	int arrayLength = array.size();

	// Iterating through each element of the array
	for(int i = 0; i < arrayLength; i++){
		// Considering the minimum value is at index 'i'
		int minIndex = i;

		// Iterating through elements from `i + 1` to `last element` of the array
		for(int j = i + 1; j < arrayLength - 1; j++){
			// Checks the element at index `j`(current element) is smaller than the element at `minIndex`
			if(array[j] < array[minIndex])
				// The current element is smaler that the element at `minIndex`
				minIndex = j;
		}

		// Swapping the element of the array at index `minIndex` and `i`
		swap(minIndex, i, array);
	}
}

int main() {
    // Example usage
    std::vector<int> myArray = {4, 1, 5, 8, 8, 10, 21, 0, -3, 2, 1, 3};

    // Print the original array
    std::cout << "Original array: ";
    for (int elem : myArray) {
        std::cout << elem << " ";
    }
    std::cout << std::endl;

    // Sort the array using selction sort
    selectionSort(myArray);

    // Print the sorted array
    std::cout << "Sorted array: ";
    for (int elem : myArray) {
    	std::cout << elem << " ";
    }
	std::cout << std::endl;

    return 0;
}
