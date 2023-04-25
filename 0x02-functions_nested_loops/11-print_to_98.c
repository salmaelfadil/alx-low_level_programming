#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - print numberts till 98
 * @n: starting number
 *
 * Return: void
 */
void print_to_98(int n)
{
	if (n < 98)
	{
		for (; n < 98; n++)
			printf("%i", n);
	}
	else if (n > 98)
	{
		for (; n > 98; n++)
			printf("%i", n);
	}
	else if (n == 98)
	{
		printf("%i",n);
	}

}
