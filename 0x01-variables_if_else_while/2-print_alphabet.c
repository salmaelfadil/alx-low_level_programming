#include <stdio.h>
#include <stdlib.h>
/**
 * main - entry point
 * description: print alphabet
 * return:0
 */
int main(void)
{
	char a='a';

	while (a <= 'z')
	{
		putchar(a);
		a++;
	}

	putchar('\n');
	return (0);
}
