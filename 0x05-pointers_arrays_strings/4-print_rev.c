#include "main.h"
/**
 * print_rev - prints a string in reverse followed by a new line
 * @s: string to be printed in reverse
 *
 * Return: void;
 */
void print_rev(char *s)
{
	int c = _strlen(*s);

	for (; c > 0; c--)
	{
		_putchar(s[c]);
	}
	_putchar('\n');
}
