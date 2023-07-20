#include "lists.h"
/**
 * get_dnodeint_at_index -- returns the nth node of a list
 * @head: pointer to head of list
 * @index: index of the node to be returned
 *
 * Return: address of the node at index
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;

	if (head == NULL)
		return (NULL);

	if (index == 0)
		return (head);

	for (; i < index; i++)
	{
		if (head->next == NULL)
			return (NULL);
		head = head->next;
	}

	return (head);
}
