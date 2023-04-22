#include <stdio.h>
/**
 * main - entry
 *
 * Return:0 (success)
 */
int main(void)
{
	int i;

	char a;

	for (i = 48; i < 58; i++)
		putchar(i);
	for (a = 'a'; a < 'g'; a++)
		putchar(a);
	putchar('\n');
	return (0);
}
