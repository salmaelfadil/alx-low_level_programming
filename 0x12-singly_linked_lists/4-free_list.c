#include "lists.h"
/**
 * free_list - function that frees a list
 * @head: pointer to head of list
 *
 * Return: void
 */
void free_list(list_t *head)
{
	while (head != NULL)
	{
		free(head);
		free(head->str);
		head = head->next;
	}
}
