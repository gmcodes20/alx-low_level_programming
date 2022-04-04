#include "main.h"
#include <stdlib.h>


/**
 * create_array - Create array of chars and initialixes it with a specific char
 * @size: size of the array
 * @c: Char to initialize the array
 *
 * Return: Return NULL on error and pointer to the array in success
 */


char *create_array(unsigned int size, char c)
{
	char *p;
	unsigned int i = 0;

	if (size == 0)
		return (NULL);

	p = (char *) malloc(sizeof(char) * size);

	if (p == NULL)
		return (0);
	while (i <= size + 1)
	{
		*(p + i) = c;
		i++;
	}

	*(p + i) = '\0';

	return (p);
}
