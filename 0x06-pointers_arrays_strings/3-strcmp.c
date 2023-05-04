#include "main.h"
/**
 * _strcmp - compares two strings
 * s1: string one
 * s2: string two
 *
 * Return: 0 if strings are equal
 */

int _strcmp(char *s1, char *s2)
{
	int cmp, i = 0, j = 0;

	while (s1[i] != '\0')
	{
		i++;
	}

	while (s2[j] != '\0')
	{
		j++;
	}

	cmp = i - j;

	return (cmp);
}
