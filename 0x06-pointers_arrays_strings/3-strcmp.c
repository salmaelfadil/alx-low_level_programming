#include "main.h"
/**
 * _strcmp - compares two strings
 * @s1: string one
 * @s2: string two
 *
 * Return: int the difference between strings
 */

int _strcmp(char *s1, char *s2)
{
	int i = 0, j;

	while (s1[i] != '\0')
	{
		c1++;
		i++;
	}

	j = 0;

	while (s2[j] != '\0')
	{
		j++;
	}

	return (j - i);
}
