#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * Description: print alphabet in lower and upper
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

	a = 'A';
	
	while (a <= 'Z')
	{ 
		putchar(a);
		a++;
	}
	putchar('\n');
	return (0);

}
