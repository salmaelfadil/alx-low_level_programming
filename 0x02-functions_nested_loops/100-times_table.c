#include "main.h"
/**
 * print_times_table - print times table from 0
 * @n: the number up untill times table will be printed
 *
 * return: voidl
 */
void print_times_table(int n)
{
	int i, j, m;
	
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			m = i * j;
			if (m < 10)
			{
				if (j != 0)
				{
				       	_putchar(' ');
				       	_putchar(' ');
				}
				_putchar(m + '0);
			}
			else
			{
			       	_putchar(' ');
                                _putchar((m / 10) + '0');
                                _putchar((m % 10) + '0');
                        }
			if (j != 9)
			       	_putchar(',');
		}
		_putchar('\n');
	}
}
