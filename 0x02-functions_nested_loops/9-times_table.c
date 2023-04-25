#include "main.h"
/**
 * times_table - print time table
 *
 * Return: void
 */
void times_table(void)
{
	int i, j, n, m;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			for (n = 0; n < 10; n++)
			{
				m = j * n;
				_putchar('m');
				_putchar(',');
			}
		}
	_putchar('\n');
	}
}
