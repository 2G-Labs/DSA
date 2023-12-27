#include <iostream>

/**
 * @brief	Perform a linear search for a key in an array.
 *
 * @param	array		A one-dimensional integer array to be searched.
 * @param	lenght		The number of elements in the array.
 * @param	target		The integer value to search for in the array.
 *
 * @return	If key is found, return the index of its first occurrence; otherwise, return -1.
 */
int LinearSearch(int array[], int length, int target){
	// Iterate through the array
	for(int i = 0; i < length; i++){
		// Check if the current element is equal to the key
		if(array[i] == key)
			// If found, return the index of the key
			return i;
	}
	// If the key is not found in the array, reutrn -1
	return -1;
}

int main(){
	// This is unsorted array of Integer
	int array[] = { 65, 34, 75, 18, 13, 14, 15, 11, 10, 9, 2, 1, 0 };
	int arrayLength = sizeof(array) / sizeof(int);	// This is the size of array
	int key = 64;	// This is the key to be found in the array.

	std::cout << LinearSearch(array, arrayLength, key);	// Calling the function to search key in the array.

	return 0;
}
