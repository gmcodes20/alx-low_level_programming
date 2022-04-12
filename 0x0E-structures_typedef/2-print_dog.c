#include <stdio.h>
#include "dog.h"
#include <stdlib.h>

/**
 * print_dog - Prints the struct dog
 * @d: dog struct to print
 *
 * Return: void
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
		return;
	if (d->owner == NULL)
		d->owner = "(nil)";
	if (d->name == NULL)
		d->name = "(nil)";
	printf("Name: %s\nAge: %f\nOwner: %s\n", d->name, d->age, d->owner);
}
