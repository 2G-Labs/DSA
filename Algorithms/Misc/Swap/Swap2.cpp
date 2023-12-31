#include <iostream>

/**
 * @brief	Swaps the values of a & b without using any other temporary variable
 *
 * @param	a		The reference of first variable to be swapped
 * @param	b		The reference of second variable to be swapped
 *
 */
void swapNum(int &a, int &b) {
	a = a + b;		// The `a` now contains:	(a + b)
	b = a - b;		// The `b` now contains:	(a + b) - b	= a
	a = a - b;		// The `a` now contains:	(a + b) - a	= b
}

int main() {

	// The initial values
	int a = 19;
	int b = 34;

	// Printing the values of variables
	std::cout << "Value of a: " << a << " | Value of b: " << b << std::endl;


	// Swapping the values using swapNum (number specific swapping)
	swapNum(a, b);

	// Printing the values of variables again
	std::cout << "Value of a: " << a << " | Value of b: " << b << std::endl;

	return 0;
}
