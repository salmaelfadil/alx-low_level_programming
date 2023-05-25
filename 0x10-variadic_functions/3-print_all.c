#include "variadic_functions.h"
/**
 * print_all - prints all arguments
 * @format: list oftypes of arguments
 *
 * Return: void
 */
void print_all(const char * const format, ...)
{
	int i = 0;
	char *s;
	va_list list;

	va_start(list, format);

	if (format != NULL)
	{
		while (format[i] != '\0')
		{
			switch (format[i])
			{
				case 'c':
					printf("%c", va_arg(list, int));
					break;
				case 'f':
					printf("%f", va_arg(list, double));
					break;
				case 's':
					s = va_arg(list, char *);
					if (s == NULL)
						printf("(nil)");
					printf("%s", s);
					break;
				default:
					i++;
					continue;
			}
			printf(", ");
			i++;
		}
		printf("\n");
		va_end(list);
	}

}
