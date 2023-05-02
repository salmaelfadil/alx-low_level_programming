#include "main.h"
#include <stdio.h>
/**
 * print_array - print array of n elements
 * @a: array of ints
 * @n: number of elements
 *
 * Return: void
 */
void print_array(int *a, int n)
{
	int i = 0;

	for (; i < n; i++)
	{
		if (i == (n - 1))
		{ 
			printf("%d", a[i]);
		}
		else
			printf("%d, ", a[i]);
	}
	printf("\n");
}
