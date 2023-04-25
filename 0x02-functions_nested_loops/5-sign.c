#include "main.h"

/**
  * print_sign - checks the sign of a number
  * @n: number to check
  *
  * Return: 1 for positive num, -1 for negative num or zero for 0
  */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
