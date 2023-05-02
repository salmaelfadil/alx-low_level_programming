#include "main.h"
/**
 * puts_half - prints the second half of the string
 * @str: string to be printed
 *
 * Return: void;
 */
void puts_half(char *str)
{
	int i = 0, n;

	while (str[i])
	{
		i++;
	}

	if ((i % 2) != 0)
	{
		n = (i - 1) / 2;
		n++;
	}
	else
	{
		n = i / 2;
	}
	while (n < j)
	{
		_putchar(str[n]);
		n++;
	}
	_putchar('\n');
}
