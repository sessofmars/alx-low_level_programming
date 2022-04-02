#include <stdio.h>
/*
 * main - a program that prints the number of arguments
 * passed to it.
 * @argc: counts number of arguments
 * @argv: array of strings.
 * Return: 0
 */
int main(int argc, char *argv[]_attribute_((unused)))
{
	printf("%d\n", argc - 1);
	return 0;
}
