#include "main.h"

/**
 * get_bit - gets the value of a bit at a given index
 * @n: decimal number
 * @index: index to retrieve
 * Return: value of bit at index or -1 if fails
*/

int get_bit(unsigned long int n, unsigned int index)
{
	if (index > sizeof(unsigned long int) * 8)
		return (-1);

	n = n >> index;
	n = n & 1;
	return (n);
}
