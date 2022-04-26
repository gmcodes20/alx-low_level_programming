#include "lists.h"

/**
 * sum_listint - sum all the data (n) of a listint_t linked list.
 * @head: First node of the linked list
 *
 * Return: sum of all nodes
 */

int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *temp = head;

	while (temp)
	{
		sum += temp->n;
		temp = temp->next;
	}
	return (sum);
}
