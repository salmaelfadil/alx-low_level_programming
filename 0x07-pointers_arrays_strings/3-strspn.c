#include "main.h"
#include <stdio.h>
/**
 * _strspn - gets the length of a prefix substring
 * @s: pointer to string
 * @accept: pointer to accept
 *
 * Return: number of bytes in initial segment of s
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int b = 0;
	int i = 0, j = 0;

	
	for (; s[j] != '\0'; j++)
	{
		for (; accept[i] != '\0'; i++)
		{
			if (*s == accept[i])
			{
				b++;
			}
			else if (accept[i + 1] == '\0')
				return (b);
		}
	}
	return (b);
}
