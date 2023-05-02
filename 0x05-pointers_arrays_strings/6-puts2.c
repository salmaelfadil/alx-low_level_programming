#include "main.h"
/**
 * puts2 - prints every other character
 * @str: string to be printed
 *
 * Return: void;
 */
void puts2(char *str)
{
	int i = 0;

	for (; str[i] != '\n'; i += 2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
