#include "lists.h"
/**
 * listint_len -- returns number of elements linked in a list
 * @h: list
 * 
 * Return: number of elements linked
 */
size_t listint_len(const listint_t *h)
{
	size_t i = 0;

	while (h)
	{
		i++;
		h = h->next;
	}
	return (i);
}
