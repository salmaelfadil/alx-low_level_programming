#include "variadic_functions.h"
/**
 * print_all -- function that prints anything
 * @format: list of all types of arguments
 *
 * Return: void
 */
void print_all(const char * const format, ...)
{
	int i = 0;
	char *s;
	va_list list;

	va_start(list, format);

	while (format != NULL && format[i] != '\0')
	{
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(list, int));
				break;
			case 'i':
				printf("%i", va_arg(list, int));
			case 'f':
				printf("%f", va_arg(list, double));
			case 's':
				s = va_arg(list, char*);
				if (s == NULL)
					printf("(nil)");
				else
					printf("%s", s);
				break;
			default:
				i++;
				continue;
		}
		if (format[i + 1] != '\0')
			printf(", ");
		i++;
	}
	printf("\n");
	va_end(list);
}
