#include <stdio.h>
#include "main.h"

/**
 * print_diagsums - prints sum of diagonals of square matrix
 * @a: number of rows
 * @size: number of columns
 * Return: void
 */
void print_diagsums(int *a, int size)
{
	int i, x, ordinaryDiagSum, principalDiagSum;

	ordinaryDiagSum = 0;
	principalDiagSum = 0;

	for (i = 0; i < size; i++)
	{
		ordinaryDiagSum += a[i * size + i];
	}

	for (x = size - 1; x >= 0; x--)
	{
		principalDiagSum += a[x * size + (size - x - 1)];
	}

	printf("%d, %d\n", ordinaryDiagSum, principalDiagSum);
}
