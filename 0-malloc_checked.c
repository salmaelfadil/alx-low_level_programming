#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked -- function that allocates memory using malloc
 * @b: unsigned int
 *
 * Return: void
 */
void *malloc_checked(unsigned int b)
{
	int *i;

	i = malloc(sizeof(b));

	if (i == NULL)
		exit(98);
}
