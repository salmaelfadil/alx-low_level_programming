#include "main.h"
/**
 * print_line - line
 * @n: number of times _ to be printed
 * Return: void
 */
void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		_putchar('-');
	}

	_putchar('\n');
}

