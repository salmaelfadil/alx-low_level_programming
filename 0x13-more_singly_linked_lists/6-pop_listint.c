#include "lists.h"
/**
 * pop_listint -- deletes the head node of list
 * @head: head of list
 *
 * Return: head node's data (int)
 */
int pop_listint(listint_t **head)
{
	listint_t *node;
	int n;

	if (head == NULL || *head == NULL)
		return (0);

	n = (*head)->n;
	node = (*head)->next;
	free(*head);
	*head = node;

	return (n);
}
