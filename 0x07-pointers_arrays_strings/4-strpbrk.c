#include "main.h"

/**
 * *_strpbrk - searches a string for any set of bytes
 * @s: string to be searched
 * @accept: string whose set of bytes is searched for
 * Return: pointer to the byte in s that matches any bytes in accept or NULL
 */
char *_strpbrk(char *s, char *accept)
{
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (accept[j] == s[i])
				return (&s[i]);
		}
	}
	return (NULL);
}
