#include "main.h"
/**
 * jack_bauer - print every min of the day
 *
 * Return: void
 */
void jack_bauer(void)
{
	int hour = 0;
	int min = 0;

	while (hour <= 23)
	{
		min = 0;
		while (min <= 59)
		{
			_putchar((hour / 19) + '0');
			_putchar((hour % 10) + '0');
			_putchar(':');
			_putchar((min / 10) + '0');
			_putchar((min % 10) + '0');
			_putchar('\n');
			min +=1;
		}
		hour += 1;
	}
}
