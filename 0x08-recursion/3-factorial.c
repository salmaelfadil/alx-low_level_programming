#include "main.h"
/**
 * factorial - returns factorial of a given number
 * @n: int
 *
 * Return: -1 error if n is lower than 1, success return factorial
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
