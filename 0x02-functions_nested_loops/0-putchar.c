#include "main.h"
#include <stdio.h>

/** main - entry point
 * 
 * Return: 0 
 */

int main(void)
{
	char word[]="_putchar";
	int i;

	for (i=0; i <8; i++)
	{
		putchar(word[i]);
	}

	putchar('\n');

	return (0);
}
