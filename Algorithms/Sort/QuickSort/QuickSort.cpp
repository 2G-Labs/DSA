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
 * @brief	Partition the elements into two parts around the pivot
 * This function arrange the elements of array into tow parts around the pivot
 * 
 * @param	array	Reference to the vector containing elements.
 * @param	low		Lowest index of the array.
 * @param	high	Highest index of the array.
 * @return	int		The pivot around which the elements are partitioned.
 */
int partition(std::vector<int>& array, int low, int high) {
	// Choose the rightmost element as the pivot
	int pivot = array[high];
	int i = low - 1;

	// Iterate through the array to rearrange elements
	for(int j = low; j <= high - 1; j++) {
		if(array[j] <= pivot) {
			i = i + 1;
			swap(i, j, array);
		}
	}

	// Place the pivot in its correct position
	swap(i + 1, high, array);
	return i + 1;
}

/**
 * @brief	Perform Quick Sort on a vector.
 *
 * This function sorts the elements of the vector in ascending order using the
 * Quick Sort algorithm.
 *
 * @param	array	Reference to the vector to be sorted.
 * @param	low		Reference to the lowest index of the array.
 * @param	high	Reference to the highest index of the array.
 */
void quickSort(std::vector<int>& array, int low, int high) {
	if(low < high) {
		// Partion the array into two segments
		int pivotIndex = partition(array, low, high);

		// Recursively sort the two segments
		quickSort(array, low, pivotIndex -1);
		quickSort(array, pivotIndex + 1, high);
	}
}


int main() {
	// Example usage
	std::vector<int> myArray = {-1, -5, -7, 6, 1, 0, 0, 4, 1, 12, 100};

	// Print the original array
	std::cout << "Original array: ";
	for (int elem : myArray) {
		std::cout << elem << " ";
	}
	std::cout << std::endl;

	// Sort the array using bubble sort
	quickSort(myArray, 0, myArray.size()-1);

	// Print the sorted array
	std::cout << "Sorted array: ";
	for (int elem : myArray) {
		std::cout << elem << " ";
	}
	std::cout << std::endl;

	return 0;
}