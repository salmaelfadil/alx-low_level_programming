#include <stdio.h>
#include <stdlib.h>
/**
 * main - entry point
 * description: print alphabet
 * Return: 0 (success)
 */
int main(void)
{
	char a = 'a';

	while (a <= 'z')
	{
		putchar(a);
		a++;
	}

	putchar('\n');
	return (0);
}
