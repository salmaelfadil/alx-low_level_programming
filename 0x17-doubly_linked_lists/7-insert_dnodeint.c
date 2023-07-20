#include "lists.h"
/**
 * insert_dnodeint_at_index -- inserts node at index
 * @h: double pointer to head of list
 * @idx: index of node
 * @n: number to be added in the list
 * Return: address of the new node
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new = NULL;
	dlistint_t *head = *h;
	unsigned int size, i = 0;

	if (!h)
		return (NULL);
	if (idx == 0)
	{
		new = add_dnodeint(h, n);
		return (new);
	}
	for (size = 0; head != NULL; size++)
		head = head->next;
	if (idx > size)
		return (NULL);
	head = *h;
	if (idx == size)
	{
		new = add_dnodeint_end(h, n);
		return (new);
	}
	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);
	for (; i < idx - 1; i++)
	{
		if (head ==  NULL)
		{
			free(new);
			return (NULL);
		}
		head = head->next;
	}
	new->n = n;
	new->next = head->next;
	new->prev = head;
	if (head->next)
		head->next->prev = new;
	head->next = new;
	return (new);
}
