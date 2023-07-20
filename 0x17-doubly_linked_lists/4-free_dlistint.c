#include "lists.h"
/**
 * free_dlistint -- frees a doubly linked list
 * @head: pointer to head of list
 *
 * Return: nothing
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *n;

	while (head)
	{
		n = head->next;
		free(head);
		head = n;
	}
}
