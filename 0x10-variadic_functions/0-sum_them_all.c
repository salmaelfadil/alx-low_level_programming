#include "variadic_functions.h"
/**
 * sum_them_all -- function that returns the sum of all its parameters
 * @n: number of parameters used
 *
 * Return: int
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int result = 0;
	unsigned int i = 0;
	va_list np;

	va_start(np, n);

	for (; i < n; i++)
		result += va_arg(np, int);

	va_end(np);

	return (result);
}
