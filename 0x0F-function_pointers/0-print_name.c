#include "function_pointers.h"
#include <stdlib.h>

/**
 * print_name - This functgion prints a name
 * @name: Name to be printed
 * @f: pointer to the printing function
 *
 * Return: void
 */

void print_name(char *name, void (*f)(char *))
{
	if (!name || !f)
	{
		return;
	}
	f(name);
}
