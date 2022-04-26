#include "lists.h"

/**
 * get_nodeint_at_index - Returns a node at a certian index
 * @head: first node in the linked list
 * @index:Index of the linked list to return
 *
 * Return: NULL on error or pointer to the node needed.
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *temp = head;


	while (temp && i < index)
	{
		temp = temp->next;
		i++;
	}

	return (temp ? temp : NULL);
}
