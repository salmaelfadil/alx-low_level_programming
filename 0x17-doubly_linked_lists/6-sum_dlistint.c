#include "lists.h"
/**
 * sum_dlistint - sums all data in doubly linked list
 * @head: head  of list
 *
 * Return: sum of all ints in list
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
