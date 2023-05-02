#include "main.h"
/**
 * rev_string - reverses a string
 * @s: string to be reversed
 *
 * Return: void;
 */
void rev_string(char *s)
{
	int i, j;

	i = 0;
	j = 0;

	char k[100];

	while (s[i])
	{
		i++;
	}

	while (i--)
	{
		k[j]= s[i];
		j++;
	}
}
