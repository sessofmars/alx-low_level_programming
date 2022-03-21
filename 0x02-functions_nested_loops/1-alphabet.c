#include "main.h"
/**
 * print_alphabet - print lowercase alphabets
 *
 * Return: success 0
 */
void print_alphabet(void)
{
	int a = 97;

	int count = 1;

	while (count <= 26)
	{
		_putchar(a);
		a++;
		count++;
	}
	_putchar('\n');
}
