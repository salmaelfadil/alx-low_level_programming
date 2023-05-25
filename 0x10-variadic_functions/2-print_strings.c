#include "variadic_functions.h"
/**
 * print_strings -- prints strings followed by a new line
 * @separator: string to be printed between strings
 * @n: number of strings passed into the function
 *
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 0;
	bool flag = true;
	va_list sp;
	char *s;

	va_start(sp, n);

	if (separator == NULL)
		flag = false;

	for (; i < n; i++)
	{
		s = va_arg(sp, char*);

		if (s == NULL)
			printf("nil");
		else
			printf("%s", s);
		if (flag == true && i < n - 1)
			printf("%s", separator);
	}
	printf("\n");

	va_end(sp);
}
