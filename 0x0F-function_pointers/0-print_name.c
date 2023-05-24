#include "function_pointers.h"
#include <stdlib.h>
/**
 * print_name - funcion that prints a name
 * @name: string
 * @f: pointer to function that takes string as argument and returns void
 *
 * Return void
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
}
