#include "lists.h"
/**
 * add_node - function that add a new node at the beginning list
 * @head: dereferenced pointer to head
 * @str: string to be duplicated
 *
 * Return: address of the new element
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *node;
	int i = 0;

	node = malloc(sizeof(list_t));

	if (node == NULL)
		return (NULL);

	node->str = strdup(str);

	for (; str[i]; i++)
		;

	node->len = i;
	node->next = *head;
	*head = node;

	return (node);
}
