#include "lists.h"
/**
 * delete_dnodeint_at_index -- a function that deletes the node at index
 * of a doubly linked list
 * @head: double pointer to head of list
 * @index: index at which node to be deleted
 *
 * Return: 1 if success else -1
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int i = 0;
	dlistint_t *node;

	if (!head || !(*head))
		return (-1);

	node = *head;

	if (index == 0)
	{
		*head = node->next;
		if (node->next)
			node->next->prev = NULL;

		free(node);
		return (1);
	}
	for (; i < index; i++)
	{
		if (node->next == NULL)
			return (-1);
		node = node->next;
	}
	if (node == NULL)
		return (-1);

	node->prev->next = node->next;

	if (node->next)
		node->next->prev = node->prev;

	free(node);

	return (1);
}
