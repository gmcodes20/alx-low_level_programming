#include "lists.h"
#include <stdlib.h>

/**
 * free_list - Frees the linked list
 * @head: list_t list to be freed
 *
 * Return: Void
 */

void free_list(list_t *head)
{
	list_t *temp;

	while (head)
	{
		temp = head->next;
		free(head->str);
		free(head);
		head = temp;
	}
}
