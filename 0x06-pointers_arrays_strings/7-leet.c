#include "main.h"
/**
 * leet - encodes a string into 1337
 * @s: string to be encoded
 *
 * Return: string
 */
char *leet(char *s)
{
	int i = 0;

	for (; s[i] != '\0'; i++)
	{
		if (s[i] == 65 || s[i] == 97)
		{
			s[i] = 4;
		}

		else if (s[i] == 69 || s[i] == 101)
		{
			s[i] = 3;
		}

		else if (s[i] == 79 || s[i] == 111)
		{
			s[i] = 0;
		}

		else if (s[i] == 84 || s[i] == 116)
		{
			s[i] = 7;
		}

		else if (s[i] == 76 || s[i] == 108)
		{
			s[i] = 1;
		}
	}

	return (s);
}
