#include "lists.h"
/**
 * sum_listint -- returns sum of all data in list
 * @head: head of list
 *
 * Returns: sum
 */
int sum_listint(listint_t *head)
{
	unsigned int sum;

	if (head == NULL)
		return (0);

	while (head)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
