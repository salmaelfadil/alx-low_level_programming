#include <stdio.h>
#include <stdlib.h>
/**
 * main - adds two positive numbers
 * @argc: argument count
 * @argv: argument value
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i = 1, sum = 0;

	if (argc < 2)
	{
		printf("0\n");
	}

	for (; i < argc; i++)
	{
		if (argv[i] > '9' || argv[i] < '0')
		{
			printf("Error\n");
			return (1);
		}

		else
		{
			sum += atoi(argv[i]);
			printf("%d\n", sum);
			return (0);
		}
	}
}
