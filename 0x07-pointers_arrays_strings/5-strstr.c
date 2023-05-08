#include "main.h"
/**
 * _strstr - locates a substring
 * @haystack: pointer to string
 * @needle: pointer to substring
 *
 * Return: pointer to the located substring
 */
char *_strstr(char *haystack, char *needle)
{
	int i = 0;

	if (*needle == 0)
		return (haystack);

	for (; haystack[i] >= '\0'; i++)
	{
		if (haystack[i] == needle[i])
		{
			while (haystack[i] == needle[i])
			{
				if (needle[i + 1] == '\0')
					return (haystack);
			}
		}
	}
	return ('\0');
}
