#include "lists.h"
/**
 * listint_t *get_nodeint_at_index -- returns the nth node of a list
 * @head: head of node
 * @index: unsigned int index of node
 *
 * Return: pointer tolist
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;

	if (head == NULL)
		return (NULL);

	while (i < index)
	{
		head = head->next;
		if (head == NULL)
			return (NULL);
		i++;
	}

	return (head);
}
