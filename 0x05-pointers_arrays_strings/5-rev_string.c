#include "main.h"
/**
 * rev_string - reverses a string
 * @s: string to be reversed
 *
 * Return: void;
 */
void rev_string(char *s)
{
	int i, j, k;

	i = 0;
	j = 0;

	while (s[i])
	{
		i++;
	}

	while (j > i)
	{
		k = s[i];
		s[j--] = s[i];
		s[i++] = k;
	}
}
