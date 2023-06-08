#include "main.h"
/**
 * print_binary -- prints a binary representation of number
 * @n: num
 *
 * Return: void
 */
void print_binary(unsigned long int n)
{
	if (n > 1)
		print_binary(n >> 1);

	_putchar((n & 1) + '0');
}
