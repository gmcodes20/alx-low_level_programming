#include <stdio.h>
#include "main.h"

/**
 * print_array - prints the integers in an array
 * @a: The pointer to the array
 * @n: number of array elements
 *
 * Return: Nothing
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i <= n; i++)
	{
		printf("%d", a[i]);
		if (i < (n - 1))
		{
			printf(", ");
		}
	}

}
