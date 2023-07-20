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

	if (!head)
		return (-1);
	if (index == 0)
	{
		*head = *head->next;
		if (*head->next)
			*head->next->prev = NULL;

		free(*head);
		return (1);
	}
	for (; i < index; i++)
	{
		if (*head->next == NULL)
			return (-1);
		*head = *head->next;
	}

	(*head->prev)->next = *head->next;

	if (*head->next)
		(*head->next)->prev = *head->prev;

	free(*head);

	return (1);
}
