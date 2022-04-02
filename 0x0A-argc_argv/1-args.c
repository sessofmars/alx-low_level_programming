#include <stdio.h>
/*
 * main - a program that prints the number of arguments
 * passed to it.
 * @argc: counts number of arguments
 * @argv: array of strings.
 * Return: 0 - success.
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
