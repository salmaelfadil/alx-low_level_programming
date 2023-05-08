#include "main.h"
#include <stdio.h>
/**
 * _strstr - locates a substring
 * @haystack: pointer to string
 * @needle: pointer to substring
 *
 * Return: pointer to the located substring
 */
char *_strstr(char *haystack, char *needle)
{
	int i = 0, j = 0;
	char *h = haystack;
	char *n = needle;

	for (; haystack[i] != '\0'; i++)
	{
		for (; needle[j] != '\0'; j++)
		{
			while (*haystack == *n)
			{
				haystack++;
				n++;
			}
		}
		if (*n == '\0')
			return (h);
		haystack = h + 1;
	}
	return ('\0');
}
