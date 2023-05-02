#include "main.h"
/**
 * rev_string - reverses a string
 * @s: string to be reversed
 *
 * Return: void;
 */
void rev_string(char *s)
{
	int i, j, c;

	i = 0;
	j = 0;

	while (s[i] != '\0')
	{
		j++;
	}

	while (j > i)
	{
		c = s[j];
		s[j--] = s[i];
		s[i++] = c;
	}
}
