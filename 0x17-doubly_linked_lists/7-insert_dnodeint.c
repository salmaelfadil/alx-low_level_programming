#include "lists.h"
/**
 * insert_dnodeint_at_index -- inserts node at index
 * @h: double pointer to head of list
 * @n: number to be added in the list
 * Return: address of the new node
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new;
	dlistint_t *head = *h;
	unsigned int size = 0;
	unsigned int i = 0;

	new = NULL;

	if (!h)
		return (NULL);

	if (idx == 0)
	{
		new = add_dnodeint(h, n);
		return (new);
	}
	for (; head != NULL; size++)
		head = head->next;

	if (idx == size)
	{
		new = add_dnodeint_end(h, n);
		return (new);
	}

	new = malloc(sizeof(dlistint_t));

	if (!new)
		return (NULL);

	head = *h;

	for (; i < idx; i++)
	{
		if (head= NULL)
			return (NULL);
		head= head->next;
	}

	new->n = n;
	new->next = head->next;
	new->prev = head;
	head->next->prev = new;
	head->next = new;

	return (new);
}
