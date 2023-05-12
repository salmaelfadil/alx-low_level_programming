#include <stdio.h>
/**
 * main - prints all arguments it recieves
 * @argc: argument count
 * @argv: argument value
 *
 * Return: 0 success
 */
int main(int argc, char *argv[])
{
	int i = 0;

	for (; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}
