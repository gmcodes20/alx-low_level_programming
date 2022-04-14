#include "function_pointers.h"
#include <stdlib.h>

/**
 * array_iterator - executes a function given as parameter
 * @array: Array to iterate
 * @size: size of the given array
 * @action: pointer to the function used
 *
 * Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (!array || !action)
		return;

	for (i = 0; i < size, i++)
		action(array[i]);
}
