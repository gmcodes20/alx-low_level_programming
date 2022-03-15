
#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */

int main(void)
{
	char test[10] = "_putchar";
	int i;

	i = 0;
	while (i < 10)
	{
		_putchar(test[i]);
		i++;
	}

	_putchar('\n');
	return (0);
}
