#include "variadic_functions.h"

/**
 * main - a function that prints numbers, and a new line.
 * @seperator: string to be printed between numbers.
 * @n: the number of integers passed.
 *
 * return: nothing
 */
void print_numbers(const char *separator, const unsigned int n, ...);
{
	va_list valist;
	unsigned int i;

	va_start(valist, n);

	for (i = 0; i < n; i++)
	{
		printf("%d",va_arg(valist, int));
		if (seperator && i < n - 1)
			printf("%s",seperator);
	}

	printf("\n')
	va_end(valist);
