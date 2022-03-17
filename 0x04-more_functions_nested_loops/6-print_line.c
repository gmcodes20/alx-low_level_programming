#include "main.h"

/**
 * print_line - This function print line based on the value passed
 * @n:  How long the line is
 * return: nothing
 */

void print_line(int n)
{
	int i;

	for (i = 0; i <= n; i++)
	{
		if (n <= 0)
		{
			_putchar('\n');
		}
		else
		{
			_putchar('_');
		}

	}
	_putchar('\n');
}
