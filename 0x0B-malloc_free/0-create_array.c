#include "main.h"
#include <stdlib.h>
/**
 * create_array - function that creates an array of chars
 * and initalizes it with a speciic char
 * @size: unsigned int size of array
 * @c: character
 *
 * Return: NULL if size is 0, else return pointer to array
 */
char *create_array(unsigned int size, char c)
{
	char *a;

	if (size == 0)
		return (NULL);

	a = malloc(sizeof(char) * size);
	a[0] = c;

	if (a == NULL)
		return (NULL);

	return (a);
}
