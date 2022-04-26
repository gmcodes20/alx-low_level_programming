#include "lists.h"

/**
 *  add_nodeint - Add nodes at the beginning of a linked list
 * @head: pointer to the first node in the list
 * @n: the data to insert
 *
 * Return: pointer to the new node
 */


listint_t *add_nodeint(listint_t **head, const int n)
{
	list_t *new;

	new = malloc(sizeof(list_t));
	if (!new)
		return (NULL);
	new->n = n;
	new->next = *head;
	*head = new;

	return (new);
}
