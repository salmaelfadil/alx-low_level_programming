#include "main.h"
/**
 * string_toupper - makes all lowercase letters uppercase
 * @s: pointer to string
 *
 * Return: string
 */
char *string_toupper(char *s)
{
	int i = 0;

	for (; s[i] != '\0'; i++)
	{
		if (s[i] >= 97 && s[i] <= 122)
		{
			s[i] = s[i] - 32;
		}
	}
	return (s);
}
