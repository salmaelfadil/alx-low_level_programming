#include <stdio.h>
/**
 * main - entry point
 *
 * Return: 0 success
 */
int main(void)
{
	int i;
	for (i = 0; i < 10; i++)
		putchar(char(i));
	putchar("/n");
	return (0);
}
