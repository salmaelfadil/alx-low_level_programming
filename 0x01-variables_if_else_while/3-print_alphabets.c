#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * Description: print alphabet in lower and upper
 * Return: 0 (success)
 */
int main(void)
{ 
	int a = 'a';
	while (a <= 'z') 
	{
		putchar(tolower(a));
		a++;
	}
	while (a <= 'z')
	{ 
		putchar(toupper(a));
		a++;
	}
	putchar('\n');
	return (0);

}
