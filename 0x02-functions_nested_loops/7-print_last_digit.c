#include "main.h"
/**
 * print_last_digit - print last digit of num
 * @i: num whose last digit will be printed
 *
 * Return: last digit of num
 */
int print_last_digit(int i)
{
	int last = i % 10;
	
	if (last < 0)
		last *= -1;
	_putchar(last + '0');
	return (last);
}
