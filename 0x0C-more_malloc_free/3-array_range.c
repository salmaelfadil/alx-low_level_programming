#include "main.h"
#include <stdlib.h>
/**
 * array_range -- function that creates an array of ints
 * @min: int minimum value
 * @max: int max value
 *
 * Return: pointer to array
 */
int *array_range(int min, int max)
{
	int *a;
	int size;
	int i = 0;

	if (min > max)
		return (NULL);

	size = max - min + 1;

	a = malloc(sizeof(int) * size);

	if (a == NULL)
		return (NULL);

	for (; i < size; i++)
	{
		a[i] = min++;
	}

	return (a);
}
