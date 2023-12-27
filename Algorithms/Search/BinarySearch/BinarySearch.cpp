#include <iostream>

/**
 * @brief	Perfor a binary search for a key in a sorted array
 *
 * @param	array		A one-dimensional integer array to be searched. Must be sorted.
 * @param	length		The number of elements in the array.
 * @param	target 		The integer value to search for in the array.
 *
 * @return	If the key is found, return the index of its occurence; otherwise return -1.
 */
int binarySearch(int array[], int length, int target){
	// Setting low and high index.
	int low = 0, high = length - 1;

	// Iterate while low is smaller or equal to high
	while (low <= high) {
		// Setting mid point/index to search at middle.
		int mid = (low + high) / 2;

		// If the middle element is equal to key
		if (array[mid] == target)
			// If found, return the mid index.
			return mid;

		// If the key is smaller than the middle element
		if (target < array[mid])
			// Setting high equal to middle - 1
			high = mid - 1;
		else
			// Otherwise, setting low equal to middle + 1
			low = mid + 1;
	}

	// It the key is not found in the array, return -1
	return -1;
}

int main() {

	// This is sorted array of Integer
	int array[] = { 2, 4, 5, 6, 11, 13, 18, 19, 42, 882, 1911 };
	// This is the size of array
	int arrayLength = sizeof(array) / sizeof(int);
	// This is the key to be searched in the array
	int key = 19;

	// Calling the function to search key in the array
	std::cout << binarySearch(array, arrayLength, key);

	return 0;
}
