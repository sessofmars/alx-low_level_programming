#include "main.h"
#include <stdio.h>

/**
 * main - a function that takes a pointer to an integer
 * as parameter and updates the value it points
 * to 98.
 *
 * Return: Always 0.
 */

void modif_my_param(int *n)
{
   printf("Value of 'n': %p\n", n);
   printf("Address of 'n': %p\n", &n);
   *n = 98;
	

    return (0);
}
