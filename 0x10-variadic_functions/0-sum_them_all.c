#include "variadic_functions.h"

/**
 * sum_them_all - Sums every variable passed to the function
 * @n: Numbers of arguement passed
 *
 * Return: the sum of the given variable
 */

int sum_them_all(const unsigned int n, ...)
{
	int sum = 0;
	unsigned int i;
	va_list ptr;

	if (n == 0)
		return (0);

	va_start(ptr, n);

	for (i = 0; i < n; i++)
	{
		sum += va_arg(ptr, int);
	}
	va_end(ptr);

	return (sum);
}
