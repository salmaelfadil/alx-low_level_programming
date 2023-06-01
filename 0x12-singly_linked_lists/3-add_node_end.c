#include "lists.h"
/**
 * add_node_end -- function that adds a new node at the end of a list
 * @head: head of the list
 * @str: string to be duplicated
 *
 * Rereturn: address of new element
 */
list_t *add_node_end(list_t **head, const char *str)
{
	int i = 0;
	list_t *node, *temp;

	if (str == NULL)
		return (NULL);

	node = malloc(sizeof(list_t));

	if (node == NULL)
		return (NULL);

	node->str = strdup(str);

	for (; str[i]; i++)
		;

	node->len = i;
	node->next = NULL;
	temp = *head;

	if (temp == NULL)
		*head = node;

	while(temp->next)
		temp = temp->next;

	temp->next = node;

	return (node);
}
