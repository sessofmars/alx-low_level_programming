#include "main.h"
/**
 * print_alphabet_x10 - print 10 times
 *
 * Return: 0
 */
void print_alphabet_x10(void)
{
	int count, alphabets;

	count = 10;
	while (count > 0)
	{
		for (alphabets = 'a'; alphabets <= 'z'; alphabets++)
		{
			_putchar(alphabets);
		}
		count--;
		_putchar('\n');
	}
}
