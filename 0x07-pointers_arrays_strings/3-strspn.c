#include "main.h"

/**
 * _strspn - finds the length of a substring
 * @s: the string to be searched
 * @accept: searching parameter to s
 * Return: length of substring
 */
unsigned int _strspn(char *s, char *accept)
{
	int i, j, ctrl;

	for (i = 0; s[i] != '\0'; i++)
	{
		ctrl = 0;
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (accept[j] == s[i])
				ctrl = 1;
		}
		if (ctrl == 0)
			return (i);
	}
	return (i);
}
