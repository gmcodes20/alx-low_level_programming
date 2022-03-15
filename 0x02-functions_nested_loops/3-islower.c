#include  "main.h"
#include <ctype.h>


/**
 * _islower - print_alphabet
 * @c: its mine damnit
 *
 * Return: 1 if lowercase and 0 otherwise;
 * Does my stuff explained.
 */

int _islower(int c)
{
	if (islower(c))
	{
		return (1);
	}

	else
	{
		return (0);
	}
}
