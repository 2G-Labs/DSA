#include <iostream>

/**
 * @brief	Swaps the values of a & b. (Works with any data type, a & b be both of same type)
 *
 * @param	a	The reference of first variable to be swapped
 * @param	b	The reference of second variable to be swapped
 *
 */
template <typename T>
void swap(T &a, T &b) {
	T temp = a;
	a = b;
	b = temp;
}

/**
 * @brief	Swaps the values of a & b without using any other temporary variable, 
 *		works with numerical data type (a & b should be of same type)
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

	// -----------------------| SwapAny |-----------------------
	std::cout << "-----------------------| SwapAny |-----------------------" << std::endl;
	// Printing the values of variables
	std::cout << "Before Swapping\n Value of a: " << a << " | Value of b: " << b << std::endl << std::endl;

	// Swapping the values
	swap(a, b);

	// Printing the values of variables again
 	std::cout << "After Swapping\n Value of a: " << a << " | Value of b: " << b << std::endl;

	// -----------------------| SwapNum |-----------------------
	std::cout << "-----------------------| SwapNum |-----------------------" << std::endl;
	// Printing the values of variables
	std::cout << "Before Swapping\n Value of a: " << a << " | Value of b: " << b << std::endl << std::endl;

 	// Swapping the values using SwapNum algorithm (number specific swapping)
 	swapNum(a, b);

	// Printing the values of variables again
 	std::cout << "After Swapping\n Value of a: " << a << " | Value of b: " << b << std::endl;


	return 0;
}
