#include "function_pointers.h"

/**
 * array_iterator - loops through an array
 * @array: pointer to array
 * @size: size of the array
 * @action: pointer to function
 * Return: nothing
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array != NULL && action != NULL)
	{
		for (i = 0; i < size; i++)
			action(array[i]);
	}
}
