#include "main.h"
/**
 * _puts - prints a string followed by a new line
 * @str: string to be printed
 *
 * Return: void
 */
void _puts(char *str)
{
	char c;

	for(; *str != '\0'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
