#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: is pointer to a string of 0 and 1 chars
 *
 * Return: the converted number, or 0 if b is NULL
 * or any number other than 0 or 1
 */

unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int decimal_value = 0;

	if (!b)
		return (0);

	for (i = 0; b[i]; i++)
	{
		if (b[i] < '0' || b[i] > '1')
			return (0);

		decimal_value = 2 * decimal_value + (b[i] - '0');
	}
	return (decimal_value);
}
