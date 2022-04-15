#include "variadic_functions.h"

/**
 * print_strings - This function prints numbers seperated by a given seperator
 * @separator: The string to be printed between numbers
 * @n: Number of integer passed to the function
 *
 * Return: void
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ptr;
	unsigned int i;
	char *str;

	va_start(ptr, n);
	for (i = 0; i < n; i++)
	{
		str = va_arg(ptr, char *);
		if (!str)
			str = "(nil)";
		if (!separator)
		{
			printf("%s", str);
		}
		else if (separator && i == 0)
		{
			printf("%s", str);
		}
		else
		{
			printf("%s%s", separator, str);
		}
	}

	va_end(ptr);

	printf("\n");
}
