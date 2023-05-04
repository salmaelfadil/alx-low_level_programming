#include "main.h"
/**
 * reverse_array - reverses the content of an array of ints
 * @a: the array of ints
 * @n: number of elements in the array
 *
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int b[n];
	int i = n, j = 0, k = 0, l = 0;

	for (; i > 0; i--)
	{
		b[i] = a[j];
		j++;
	}

	for (; k < n; k++)
	{
		a[k] = b[l];
		l++;
	}


}
