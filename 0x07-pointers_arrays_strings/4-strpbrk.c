#include "main.h"
/**
 * _strpbrk - function that searches a string for any set of bytes
 * @s: pointer to string
 * @accept: pointer to string that will be searched
 *
 * Return: pointer to the byte in s
 */
char *_strpbrk(char *s, char *accept)
{
	int i = 0, j = 0;

	for (; s[i] != '\0'; i++)
	{
		for (; accept[j] != '\0'; j++)
		{
			if (*(s + i) == *(accept + j))
			{
				return (s + i);
			}
		}
	}
	return ('\0');
}
