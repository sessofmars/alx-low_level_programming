#include "functions_pointers.h"


/**
 * main - a function that prints a name.
 * @name: name of the person.
 * @f: function pointer.
 *
 * Return: a name.
 */

void print_name(char *name, void (*f)(char *));
{
	if(name && f)
		f(name);
}

