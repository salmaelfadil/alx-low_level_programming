#include "main.h"
#include <stdio.h>
/**
 * print_triangle - print triangle
 * @size:size of triangle
 *
 * Return: void
 */
void print_triangle(int size)
{
	int i, j, x;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0; i < size; i++)
		{
			for (j < (size - i); j > 1; j--)
			{
				_putchar(' ');
			}
			for (x = 0; x <= i; x++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
