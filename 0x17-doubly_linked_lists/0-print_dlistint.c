#include "lists.h"
/**
 * print_dlistint -- prints all elements of a doubly linked list
 * @h: pointer to head of list
 *
 * Return: number of elements
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t i = 0;

	for (; h != NULL; i++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
	return (i);
}
