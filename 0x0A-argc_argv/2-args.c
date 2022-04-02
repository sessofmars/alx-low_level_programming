#include <stdio.h>
/**
 * main - prints all arguments it receives.
 * @argv: arrays that contains the program command line arguments.
 * @argc: counts arguments.
 * Return: 0 - success.
 */
int main(int argc, char *argv[])
{
	int i;
	
	for (i = 0, i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}

