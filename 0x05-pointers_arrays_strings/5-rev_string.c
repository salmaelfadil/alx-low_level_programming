#include "main.h"
/**
 * rev_string - reverses a string
 * @s: string to be reversed
 *
 * Return: void;
 */
void rev_string(char *s)
{
	int i;

	i = 0;

	while (s[i])
	{
		i++;
	}

	char k[i];
	int j = 0;

	for (; i != 0; i--)
	{
		for (; j < i; j++)
		{
			k[j] = s[i];
		}
	}
}
