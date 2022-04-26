#include "lists.h"

/**
 * listint_len - Returns the numbers of items in a list (list_t)
 * @h: A list of list_t
 *
 * Return: The number of items in the list
 */


size_t listint_len(const listint_t *h)
{
	size_t i = 0;

	while (h)
	{
		i++;
		h = h->next;
	}
	return (i);
}
