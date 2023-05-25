#include "variadic_functions.h"
/**
 * sum_them_all - function that returns the sum of all its parameters
 * @n: number of parameters used
 *
 * Return: sum of all parameters
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list np;
	unsigned int sum = 0, i;

	va_start(np, n);

	for (i = 0; i < n; i++)
		sum += va_arg(np, int);

	va_end(np);

	return (sum);
}
