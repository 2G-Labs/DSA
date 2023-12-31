#include <iostream>

/**
 * @brief	Swaps the values of a & b. Works with any data type (both a & b should be of same type)
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

int main() {

	// The initial values
	int a = 19;
	int b = 34;

	// Printing the values of variables
	std::cout << "Value of a: " << a << " | Value of b: " << b << std::endl;


	// Swapping the values
	swap(a, b);

	// Printing the values of variables again
	std::cout << "Value of a: " << a << " | Value of b: " << b << std::endl;

	return 0;
}
