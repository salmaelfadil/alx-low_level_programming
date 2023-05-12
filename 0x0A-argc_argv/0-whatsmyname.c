#include <stdio.h>
#include "main.h"
/**
 * main - prints the program's name followed by new line
 * @argc: argument count
 * @argv: argument value
 *
 * Return: 0 success
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", argv[0]);

	return (0);
}
