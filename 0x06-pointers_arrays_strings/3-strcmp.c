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
	int i = 0;

	for (; s1[i] == s2[i] && s2[i] != '\0' && s1 != '\0'; i++)
	{
		;
	}

	return (s1[i] - s2[i]);
}
