#include "main.h"
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
	int i = 0;

	while (*s)
	{
		for (; accept[i]; i++)
		{
			if (*s == accept[i])
			{
				b++;
			}
			else if (accept[i + 1] == '\0')
			{
				return (b);
			}
		}
		s++;
	}
	return (b);
}
