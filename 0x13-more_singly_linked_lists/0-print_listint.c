#include "lists.h"
/**
 * print_listint - function that prints all ements of a list
 * @h: list
 *
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	int i = 0;

	while (h)
	{
		printf("%i\n", h->n);
		h = h->next;
		i++;
	}
	return (i);
}
