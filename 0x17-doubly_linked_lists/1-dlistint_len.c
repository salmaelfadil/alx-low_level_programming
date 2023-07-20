#include "lists.h"
/**
 * dlistint_len -- returns number of elements in list
 * @h: pointer to head of list
 *
 * Return: number of elements
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t i = 0;

	for (; h != NULL; i++)
		h = h->next;

	return (i);
}
