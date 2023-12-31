#include <iostream>

/**
 * @brief	Swaps the values of a & b without using any other temporary variable, 
 *		works with numerical values of any data type (a & b should be of same data type)
 *
 * @param	a	The reference of first variable to be swapped
 * @param	b	The reference of second variable to be swapped
 *
 */
void swapNum(int &a, int &b) {
	a = a + b;	// The `a` now contains:	(a + b)
	b = a - b;	// The `b` now contains:	(a + b) - b	= a
	a = a - b;	// The `a` now contains:	(a + b) - a	= b
}

int main() {

	// The initial values
	int a = 19;
	int b = 34;

	// Printing the values of variables
	std::cout << "Before Swapping\n Value of a: " << a << " | Value of b: " << b << std::endl << std::endl;


	// Swapping the values using SwapNum algorithm (number specific swapping)
	swapNum(a, b);

	// Printing the values of variables again
	std::cout << "After Swapping\n Value of a: " << a << " | Value of b: " << b << std::endl;

	return 0;
}
