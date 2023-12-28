#include <iostream>

/**
 * @brief	Sorts the array using Bubble Sort algorithm
 *
 * @param	array		A one-dimensional integer array to be Sorted.
 * @param	length		The number of elements in the array.
 *
 */
void bubbleSort(int array[], int length) {
	for(int i = 0; i < length; i++) {
		bool swapped = false;
		for (int j = 0; j < length - 1 - i; j++) {
			if (array[j] > array[j+1]) {
				// Swap the elements
				int temp = array[j];
				array[j] = array[j+1];
				array[j+1] = temp;
				
				// Setting the flag
				swapped = true;
			}
		}
		if (!swapped) return;	// Not swapped for once, i.e., the array is sorted
	}
}

int main() {

	// This is array of Integer
	int array[] = {  4, 2, 5, 1, 19, 23, 12, 11, 7 };
	// This is the size of array
	int arrayLength = sizeof(array) / sizeof(int);

	// Calling the function to sort the array
	bubbleSort(array, arrayLength);
	
	// Printing the sorted array, in formatted way
	std::cout << "{ ";
	
	for(int i = 0; i < arrayLength; i++){
		std::cout << array[i] << " ";
	}
	
	std::cout << "}" << std::endl;

	return 0;
}
