#include "main.h"
/**
 * print_times_table - print times table from 0
 * @n: the value of time table
 *
 * return: void
 */
void print_times_table(int n)
{
	int i, j, m;

	if (n >= 0 && n <= 15)
	{
		for (i = 0; i <= n; i++)
		{
			for (j = 0;j <=n; j++)
			{
				_putchar(',');
				_putchar(' ');

				m = i * j;
			}
		}	
	}
