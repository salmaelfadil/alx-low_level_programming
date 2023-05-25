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
	va_list sp;
	unsigned int i;
	char *s;

	va_start(sp, n);

	for (i = 0; i < n; i++)
	{
		s = va_arg(sp, char *);

		if (s == NULL)
			printf("(nil)");
		else
			printf("%s", s);

		if (separator != NULL && i != (n - 1))
			printf("%s", separator);
	}
	printf("\n");

	va_end(sp);
}
