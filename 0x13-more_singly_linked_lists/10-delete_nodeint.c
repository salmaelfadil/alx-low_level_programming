#include "lists.h"
/**
 * delete_nodeint_at_index -- deletes the node at a specified index
 * @head: pointer to head of the list
 * @index: index of the node to be deleted
 *
 * Return: 1 on sucess
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *tmp = *head;
	listint_t *del = NULL;
	unsigned int i = 0;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(tmp);
		return (1);
	}

	for (; i < index - 1; i++)
	{
		if (tmp->next == NULL || tmp == NULL)
			return (-1);
		tmp = tmp->next;
	}
	
	del = tmp->next;
	tmp->next = del;
	free(del);

	return (1);

}
