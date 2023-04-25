#include "main.h"
/**
 * print_alphabet_x10 - entry point
 * print alphabet 10 times
 * Return: void
 *
 */

void print_alphabet_x10(void)
{
	int l;
	int i;

	for (l = 0; l < 11; l ++)
	{
		for (i = 97; i < 123; i++)
		{
			_putchar(i);
		}

		_putchar('\n');
	}
}
