#include "lists.h"

/**
 * free_listint - Frees Listint list
 * @head: pointer to the head of the list
 *
 * Return: Void
 */

void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
