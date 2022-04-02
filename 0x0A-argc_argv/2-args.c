#include <stdio.h>
/**
 * main - prints all arguments.
 * @argv: holds strings.
 * @argc: counts arguments.
 * Return: 0 - success.
 */
int main(argc, char *argv[] __attribute__((unused)))
{
	int i = 0;
	for (i = 0, i < argc; 1++);
	{
		printf("argv[%d] = %s\n," argv[i]);
		return 0;

	}
}

