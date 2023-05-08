#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - prints sum of two diagonals of a square matrix
 * @a: array
 * @size: size of array
 *
 * Return: void
 */
void print_diagsums(int *a, int size)
{
	int i = 0, j = 0, s1 = 0, s2 = 0;

	for (; i < size; i++)
	{
		s1 += a[i];
		a += size;
	}

	a -= size;

	for (; j < size; j++)
	{
		s2 += a[j];
		a -= size;
	}

	printf("%d, %d\n", s1, s2);
}
