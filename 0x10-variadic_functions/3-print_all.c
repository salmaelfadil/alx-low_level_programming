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
	bool flag;

	va_start(list, format);

	while (format != NULL && format[i] != '\0')
	{
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(list, int));
				flag = true;
				break;
			case 'f':
				printf("%f", va_arg(list, double));
				flag = true;
				break;
			case 'i':
				printf("%i", va_arg(list, int));
				flag = true;
				break;
			case 's':
				s = va_arg(list, char *);
				if (s == NULL)
					s = "(nil)";
				printf("%s", s);
				break;
		}
		if (format[i + 1] != '\0' && flag == true)
			printf(", ");
		i++;
	}
	printf("\n");
	va_end(list);
}
