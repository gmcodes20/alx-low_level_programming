#include "variadic_functions.h"

/**
 * print_numbers - This function prints numbers seperated by a given seperator
 * @separator: The string to be printed between numbers
 * @n: Number of integer passed to the function
 *
 * Return: void
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ptr;
	unsigned int i;

	va_start(ptr, n);
	for (i = 0; i < n; i++)
	{
		if (!separator)
		{
			printf("%d", va_arg(ptr, int));
		}
		else if (separator && i == 0)
		{
			printf("%d", va_arg(ptr, int));
		}
		else
		{
			printf("%s%d", separator, va_arg(ptr, int));
		}
	}

	va_end(ptr);

	printf("\n");
}
