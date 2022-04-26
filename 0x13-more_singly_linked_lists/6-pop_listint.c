#include "lists.h"

/**
 * pop_listint - Deletes the head node of a listint_t linked listand.
 * @head: Pointer to the head node
 *
 * Return: the head node’s data (n).
 */


int pop_listint(listint_t **head)
{
	listint_t *temp;
	int num;

	if (!head || !*head)
		return (0);

	num = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;

	return (num);
}
