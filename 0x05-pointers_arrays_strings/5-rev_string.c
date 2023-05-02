#include "main.h"
/**
 * rev_string - reverses a string
 * @s: string to be reversed
 *
 * Return: void;
 */
void rev_string(char *s)
{
	char c, *i, *j;
	int k = 0;

	while(s[k] != '\0')
	{
		k++;
	}

	j[0] = s[k];

	for (i = s; i < j; i++; j--)
	{
		c = *i;
		*i = *j;
		*j = c;
	}
}
