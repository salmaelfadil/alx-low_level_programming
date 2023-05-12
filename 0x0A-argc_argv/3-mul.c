#include <stdio.h>
/**
 * main - multiplies two numbers
 * @argc: argument count
 * @argv: agrument value
 *
 * Return: 0 success
 */
int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	else
	{
		printf("%i\n", atoi(argv[1]) * atoi(argv[2]));
		return (0);
	}
}
