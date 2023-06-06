#include "lists.h"
/**
 * add_nodeint_end -- function that adds node at the end of the list
 * @head: head of the list
 * @n: int to be added
 *
 * Return: address of new element
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *node;
	listint_t *tmp;

	node = malloc(sizeof(listint_t));

	if (node == NULL)
		return (NULL);

	node->n = n;
	node->next = NULL;

	if (*head == NULL)
	{
		*head = node;
		return (node);
	}

	*tmp = *head;

	while (tmp->next)
	{
		tmp = tmp->next;
	}

	tmp->next = node;

	return (node);
}
