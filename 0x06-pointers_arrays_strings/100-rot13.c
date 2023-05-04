#include "main.h"
/**
 * rot13 - replace the letter by the 13th letter after it
 * @s: string which will be ciphered
 *
 * Return: ciphered string
 */
char *rot13(char *s)
{
	int i = 0;

	for (; s[i] != '\0'; i++)
	{
		if (s[i] >= 65 && s[i] < 90 || s[i] >= 97 && s[i] < 122)
		{
			s[i] = s[i] + 13;
		}
	}
	return (s);
}
