#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */

int main(void)
{
	char test[8] = "_putchar";
	int i;

	for (i = 0; i < 9; i++)
	{
		_putchar(test[i]);
	}

	_putchar('\n');
	return (0);
}
