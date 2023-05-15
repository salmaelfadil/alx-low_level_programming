#include "main.h"
#include <stdlib.h>
/**
 * alloc_grd -- function that returns a pointer to a 
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

	a = malloc(sizeof(int) * width * height);

	if (a == NULL)
		return (NULL);

	for (; i <= width; i++)
	{
		for (; j <= height; j++)
			a[i][j] = 0;
	}

	return (a);
}
