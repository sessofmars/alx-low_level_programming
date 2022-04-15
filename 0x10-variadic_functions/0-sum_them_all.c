#include <variadic_functions.h>

/**
 * main - a function that returns the sum of all it's parameters.
 *
 *@n: amount of the arguments
 *
 * return: sum of its parameters
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list valist; //holds information needed by other macros.
	unsigned int i; //declaration of int i
	int sum = 0; //initialisation

	if (n == 0) //conditional statement
		return (0);

	va_start(valist, n); //access to variadic function enabled

	for (i = 0; i < n; i++) //for loop
		sum += va_arg(valist, int); //access to next variadic function enabled.

	va_end(valist); //ends traversal of variadic function

	return (sum);
}
