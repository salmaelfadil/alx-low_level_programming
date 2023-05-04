#include "main.h"
/**
 * reverse_array - reverses the content of an array of ints
 * @a: the array of ints
 * @n: number of elements in the array
 *
 * Return: void
 */

void reverse_array((int *a, int n)
{
	int i = 0, j = 0;

	n = n - 1;

	while (i <= n)
	{
		j = a[i];
		a[i++] = a[n];
		a[n--] = i;
	}
}
