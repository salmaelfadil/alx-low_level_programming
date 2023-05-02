#include "main.h"
/**
 * print_rev - prints a string in reverse followed by a new line
 * @s: string to be printed in reverse
 *
 * Return: void;
 */
void print_rev(char *s)
{
	int i = 0;

	while (s[i])
	{
		i++;
	}

	for (; (i + 1) != 0; (i + 1)--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
