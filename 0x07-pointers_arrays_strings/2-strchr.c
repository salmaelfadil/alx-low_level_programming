#include "main.h"
#include <stdio.h>
/**
 * _strchr - locates a character in a string
 * @s: string
 * @c: character to be searched for
 * Return: pointer to character
 */
char *_strchr(char *s, char c)
{
	unsigned int i = 0;

	for (; s[i] != '\0'; i++)
	{
		if (s[i] == c)
		{
			return (&s[i]);
		}
		else
			return (NULL);
	}
	return (NULL);

}
