#include "variadic_functions.h"
/**
 * sum_them_all -- function that returns the sum of all its parameters
 * @n: number of parameters used
 *
 * Return: int
 */
int sum_them_all(const unsigned int n, ...)
{
	int result;
	unsigned int i = 0;
	va_list np;

	va_start(np, n);

	if (n == 0)
		return (0);

	for (; i < n; i++)
		result += va_arg(np, int);

	va_end(np);

	return (result);
}
