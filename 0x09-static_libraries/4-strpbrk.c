#include "main.h"
/**
 * _strpbrk - function that searches a string for any set of bytes
 * @s: string
 * @accept: string
 *
 * Return: Always 0 (Success)
 */
char *_strpbrk(char *s, char *accept)
{
	int i = 0;

	while (*s)
	{
		for (; accept[i]; i++)
		{
			if (*s == accept[i])
				return (s);
		}
		s++;
	}
	return ('\0');
}
