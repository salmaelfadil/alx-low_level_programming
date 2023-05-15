#include "main.h"
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
	char a[size];

	a[0] = c;

	if (size == 0)
		return (NULL);

	return (a);
}
