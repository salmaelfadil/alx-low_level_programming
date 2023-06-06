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
	unsigned int i = 0;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(tmp);
		return (1);
	}

	else
	{
		for (; i < index - 1; i++)
		{
			if (tmp->next == NULL || tmp == NULL)
				return (-1);
			tmp = tmp->next;
		}
	}

	tmp->next = tmp->next->next;

	return (1);
}
