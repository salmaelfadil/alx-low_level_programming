#include "lists.h"
/**
 * add_nodeint -- adds a node to the beggining of a list
 * @head: head of the list
 * @n: number to be added
 *
 * Return: list
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *node;

	node = malloc(sizeof(listint_t));

	if (node == NULL)
		return (NULL);

	node->n = n;
	node->next = *head;
	*head = node;

	return (node);
}
