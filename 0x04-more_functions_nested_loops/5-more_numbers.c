#include "main.h"
/**
 * more_numbers - print numbers from 0 to 14 10 times
 *
 * Return: the numbers from 0 to 14 10 times
 */
void more_numbers(void)
{
	int i, x;

	for (i = 0; i <= 10; i++)
	{
		for (x = 0; x < 15; x++)
		{
			if (x > 9)
			{
				_putchar((x / 10) + '0');
			}
		}
		_putchar((x % 10) + '0');
	}
	_putchar('\n');
}

