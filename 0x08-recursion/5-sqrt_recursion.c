#include "main.h"
/**
 * _sqrt_recursion - returns natural square root of a number
 * @n: int
 *
 * Return: square root of n, -1 if there is no square root
 */
int _sqrt_recursion(int n)
{
	if (n <= 0)
		return (-1);
	else if (n == 1)
		return (1);
	return ((n / _sqrt_recursion(n / 2)));
}
