#include "main.h"

/**
 * _pow - calculates a raised to the power b
 * @a: base number
 * @b: exponent
 *
 * Return: number
 */

int _pow(int a, int b)
{
	if (b < 0)
		return (-1);
	if (b == 0)
		return (1);

	return (a * _pow(a, b - 1));
}

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: pointer to a string of 0 and 1 chars
 *
 * Return: converted number or 0 if b is NULL or have chars that aren't 0 or 1
*/

unsigned int binary_to_uint(const char *b)
{
	unsigned int decimal;
	int len, power;

	if (b == NULL)
		return (0);

	len = 0;
	while (b[len] != '\0')
		len++;

	decimal = 0;
	power = 0;
	while (len-- && len >= 0)
	{
		if (b[len] == '1')
			decimal += _pow(2, power);
		else if (b[len] != '0')
			return (0);
		power++;
	}

	return (decimal);
}
