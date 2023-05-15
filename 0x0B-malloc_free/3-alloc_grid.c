#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid -- function that returns a pointer to a
 * 2 dimensional array of ints
 * @width: int
 * @height: int
 *
 * Return: pointer to array
 */
int **alloc_grid(int width, int height)
{
	int **a;
	int i = 0, j = 0;

	if (width <= 0 || height <= 0)
		return (NULL);

	a = malloc(sizeof(int) * height);

	if (a == NULL)
		return (NULL);

	for (; i < height; i++)
	{
		a[i] = malloc(sizeof(int) * width);
		
		if (a[i] == NULL)
		{
			free(a);
			for (; j <= i; j++)
				free(a[j]);
			
			return (NULL);
		}
	}

	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
			a[i][j] = 0;
	}

	return (a);
}
