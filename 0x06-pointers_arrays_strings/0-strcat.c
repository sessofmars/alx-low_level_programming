#include "main.h"
#include <string.h>

/**
 * main - concatenate two strings.
 * @s1: first character.
 * @s2: second character.
 *
 * Return: (void)
 */

char *_strcat(char *dest, char *src)
{
    char s1[98] = "Hello ";
    char s2[] = "World!\n";
    strcat(s1,s2);
    putchar("s1,s2: %s\n", s1);

    return 0;
}
