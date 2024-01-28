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
	int arrayLength = array.size();

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
	std::vector<int> exampleArray = {4, 1, 5, 8, 8, 10, 21, 0, -3, 2, 1, 3};

	std::cout << "Original array: ";
	for (int elem : exampleArray) {
		std::cout << elem << " ";
	}
	std::cout << std::endl;

	insertionSort(exampleArray);

	std::cout << "Sorted array: ";
	for (int elem : exampleArray) {
		std::cout << elem << " ";
	}
	std::cout << std::endl;

	return 0;
}
