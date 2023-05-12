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
	int j;

	if (argc < 2)
	{
		printf("0\n");
		return (0);
	}

	for (; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if ((argv[i][j]) > '9' || argv[i][j] < '0')
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}
