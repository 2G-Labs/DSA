#include <iostream>
#include <vector>

/**
 * @brief	Perform Insertion Sort on a vector.
 *
 * This function sorts the elements of the vector in ascending order using the
 * Insertion Sort algorithm.
 *
 * @param	array	Reference to the vector to be sorted.
 */
void insertionSort(std::vector<int>& array) {
	// This is the length of given array
	int arrayLength = array.size();

	// Iterating through each element of the array from index 1 to lastIndex(arrayLength -1)
	for(int i = 1; i < arrayLength; i++){
		int key = array[i];
		int j = i - 1;
	
		// Moving elements greater than key to one position ahed
		while(j >= 0 && array[j] > key) {
			array[j + 1] = array[j];
			j = j - 1;
		}

		array[j + 1] = key;
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

	// Sort the array using Insertion Sort
	insertionSort(myArray);

	// Print the sorted array
	std::cout << "Sorted array: ";
	for (int elem : myArray) {
		std::cout << elem << " ";
	}
	std::cout << std::endl;

	return 0;
}
