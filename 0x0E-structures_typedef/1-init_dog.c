#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - initilizes a variable of type struct dog
 * @d: the struct
 * @name: dog's name
 * @age: dog's age
 * @owner: the dog's owner
 * Return: void
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}

}
