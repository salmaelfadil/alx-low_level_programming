#include "main.h"
/**
 * rev_string - reverses a string
 * @s: string to be reversed
 *
 * Return: void;
 */
void rev_string(char *s)
{
	int i = 0, j = 0;
	char a[10000];

	while (s[i] != '\0')
	{
		a[i] = s[i];
		i++;
	}

	i--;

	while (i >= 0)
	{
		s[i] = a[i];
		i--;
		j++;
	}
	s[j++] = '\0';
}
