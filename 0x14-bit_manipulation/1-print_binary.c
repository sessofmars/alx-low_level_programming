#include "main.h"

/**
 * print_binary - prints the binary representation of a number
 * @n: number to be converted to binary
 * Return: nothing
*/

void print_binary(unsigned long int n)
{
	unsigned long int i;

	i = n;

	if (n < 2)
	{
		_putchar(n + '0');
		return;
	}
	else
	{
		print_binary(n >> 1);
		i = i & 1;
		_putchar(i + '0');
	}
}
