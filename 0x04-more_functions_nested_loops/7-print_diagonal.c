#include "main.h"
/**
 * print_diagonal - print diagonal line
 * @n: number of times \ would be printed
 * Return: void
 */
void print_diagonal(int n)
{
	int i,j;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else 
	{
		for (i = 0; i < n; i++)
		{
			for (j = 0; j < n; j++)
			{
				_putchar(' ');
			}
			_putchar(92);
			-putchar('\n');
		}
	}
}
