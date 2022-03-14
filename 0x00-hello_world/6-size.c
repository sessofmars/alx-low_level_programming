#include<stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main()
{
	int a;
	long int b;
	long long int c;
	char d;
	float f;

	printf("size of a char: %lu bytes\n", (unsigned long)sizeof(d));
	printf("size of an int: %lu bytes\n", (unsigned long)sizeof(a));
	printf("size of long int: %lu bytes\n", (unsigned long)sizeof(b));
	printf("size of a long long int: %lu bytes\n", (unsigned long)sizeof(c)		printf("size of float: %lu bytes\n", (unsigned long)sizeof(f)))
	return (0);
}
