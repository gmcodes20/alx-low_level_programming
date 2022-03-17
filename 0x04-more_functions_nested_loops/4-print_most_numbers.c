#include "main.h"

/**
 * print_most_numbers - This function print numbers
 *
 * return: nothing
 */

void print_most_numbers(void)
{
	int i;

	i = 48;
	while (i < 58)
	{
		if (i != 50 || i != 52)
		{
			_putchar(i);
			i++;
		}
	}
	_putchar('\n');
}
