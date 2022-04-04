#include <stdlib.h>
#include "main.h"

/**
 * _strdup - returns a pointer to a new string which is a
 * duplicate of the string str
 * @str: String to duplicate
 *
 * Return:  On success,
 * the _strdup() function returns a pointer to the duplicated
 * string.  It returns NULL if insufficient memory was availab
*/


char *_strdup(char *str)
{
	char *dup;
	unsigned int i, lenght;

	i = 0;
	lenght = 0;
	if (str == NULL)
	{
		return (NULL);
	}

	while (str[lenght])
	{
		lenght++;
	}

	dup = malloc(sizeof(char) * (lenght + 1));

	if (dup == NULL)
		return (NULL);

	while ((dup[i] = str[i]) != '\0')
		i++;
return (dup);
}
