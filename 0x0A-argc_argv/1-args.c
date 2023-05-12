#include <stdio.h>
/**
 * main - prints number of arguments passed into it
 * @argc: argument count
 * @argv: argument value
 *
 * Return: 0 success
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);

	return (0);
}
