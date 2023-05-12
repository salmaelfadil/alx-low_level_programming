#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints the number of coints to make change for an amount of money
 * @argc: argument count
 * @argv: argument value
 *
 * Return: 0 success
 */
int main(int argc, char *argv[])
{
	int i = 0, count = 0;
	int rem;

	int coins[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	rem = atoi(argv[1]);

	for (; i < sizeof(coins) && rem >= 1; i++)
	{
		while (rem >= coins[i])
		{
			count++;
			rem -= coins[i];
		}
	}
	printf("%i\n", count);
	return (0);
}
