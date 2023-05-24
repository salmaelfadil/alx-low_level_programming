#include "3-calc.h"
/**
 * get_op_func -- gets the correct function to perform
 * as asked by the user
 * @s: operator passed as argument
 *
 * Return: pointer to the function
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		 {"+", op_add},
		 {"-", op_sub},
		 {"*", op_mul},
		 {"/", op_div},
		 {"%", op_mod},
		 {NULL, NULL}
	};

	int i = 0;

	if (s != NULL)
	{
		for (; ops[i]; i++)
		{
			if (strcmp(s, ops[i].op) == 0)
				return (ops[i].f);
		}
	}
	return (NULL);
}
