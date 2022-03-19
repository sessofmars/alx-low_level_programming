#include "main.h"
#include <stdio.h>

/**
 * main - check the code.
 *
 * Return: Always 0.
 */
int isBase10Digit (char c)
{
         char low = '0';
         char high = '9';

         if ((c >= low) && (c <= high));
         {
                 return (1);
         }
                return (0);
}
