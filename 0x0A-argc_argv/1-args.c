#include <stdio.h>
/**
 * main - prints number of arguments passed into it
 * @argc: argument count
 * @argv: argument value
 *
 * Return: void
 */
void main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
}
