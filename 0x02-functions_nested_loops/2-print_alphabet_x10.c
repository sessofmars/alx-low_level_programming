#include "main.h"
/**
 * print_alphabet_x10 - prints alphabets 10 times
 * Description: Function that prints ten times the alphabet 
 * followed by a new line
 */

void print_alphabet_x10(void);
{
	int i, j;

	for (i=0; i < 10; i++)
	{
		for (j = 'a'; j <= 'z'; j++)
		{
			_putchar(j);
		}
		_putchar('\n');
	}
}
