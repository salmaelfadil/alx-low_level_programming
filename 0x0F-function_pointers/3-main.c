#include "3-calc.h"
/**
 * main -- entry point
 * @argc: argument count
 * @argv: argument value
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int (*f)(int, int);
	int result;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	f = get_op_func(argv[2]);

	if (f == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	result = f(atoi(argv[1]), atoi(argv[3]));

	printf("%d\n", result);

	return (0);
}
