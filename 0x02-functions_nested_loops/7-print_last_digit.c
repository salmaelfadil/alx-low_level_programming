#include "main.h"
/**
 * print_last_digit - print last digit of num
 * @i: num whose last digit will be printed
 *
 * Return: last digit of num
 */
int print_last_digit(int i)
{
	_putchar(i % 10 + '0');
	return (i % 10);
}
