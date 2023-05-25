#include "variadic_functions.h"
/**
 * print_numbers -- prints numbers
 * @separator: string to be printed between numbers
 * @n: number of ints
 *
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 0;
	bool flag = true;
	va_list np;

	va_start(np, n);

	if (separator == NULL)
		flag = false;

	for (; i < n; i++)
	{
		printf("%d", va_arg(np, int));
		if (flag == true)
			printf("%s", separator);

	}

	printf("\n");

	va_end(np);
}
