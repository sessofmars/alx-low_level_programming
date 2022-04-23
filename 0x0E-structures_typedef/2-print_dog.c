#include "dog.h"
#include <stdio.h>

/**
 * print_dog - prints a dog struct
 * @d: pointer to dog struct
 * Return: nothing
*/
void print_dog(struct dog *d)
{
	if (!d)
		return;
	printf("Name: %s\n", (d->name == NULL) ? "(nil)" : d->name);
	printf("Age: %.6f\n", d->age);
	printf("Owner: %s\n", (d->owner == NULL) ? "(nil)" : d->owner);
}
