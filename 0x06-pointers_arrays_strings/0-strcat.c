#include "main.h"
#include <string.h>

/**
 * main - concatenate two strings.
 * @s1: first character.
 * @s2: second character.
 *
 * Return: (void)
 *
 */


char *_strcat(char *dest, char *src)
{
    char str1[MAX_SIZE], str2[MAX_SIZE];
    char * s1 = str1;
    char * s2 = str2;

    /* Input two strings from user */
    printf("Enter first string: ");
    gets(str1);
    printf("Enter second string: ");
    gets(str2);

    /* Move till the end of str1 */
    while(*(++s1));

    /* Copy str2 to str1 */
    while(*(s1++) = *(s2++));

    printf("Concatenated string = %s", str1);

    return 0;
}
