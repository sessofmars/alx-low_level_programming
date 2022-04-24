#include <stdlib.h>
#include <stdio.h>

/**
 * print - print opcodes of the program
 * @a: the address
 * @n: number of bytes
 * Return: void
 */

void print(char *a, int n)
{
	int i = 0;

	for (; i < n; i++)
	{
		printf("%.2hhx", a[i]);
		if (i < n - 1)
			printf(" ");
	}
	printf("\n");
}

/**
 * main - prints the opcodes of its own main function
 * @ac: arg counter
 * @av: arg vector
 * Return: 0
 */

int main(int ac, char *av[])
{
	int i;

	if (ac != 2)
	{
		printf("Error\n");
		exit(1);
	}
	i = atoi(av[1]);
	if (i < 0)
	{
		printf("Error\n");
		exit(2);
	}
	print((char *)&main, i);
	return (0);
}
