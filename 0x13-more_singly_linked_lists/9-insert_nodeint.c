#include "lists.h"
/**
 * insert_nodeint_at_index -- function that inserts a new node at a
 * given index
 * @head: head of the list
 * @idx: index
 * @n: number to be added
 *
 * Return: pointer to the new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *node;
	listint_t *tmp = *head;
	unsigned int i = 0;

	node = malloc(sizeof(listint_t));

	if (node == NULL || head == NULL)
		return (NULL);

	node->n = n;
	node->next = NULL;

	if (idx == 0)
	{
		node->next = *head;
		*head = node;
		return (node);
	}

	else
	{
		for (; i < idx - 1 && tmp; i++)
			tmp = tmp->next;
	}

	node->next = tmp->next;
	tmp->next = node;

	return (node);
}
