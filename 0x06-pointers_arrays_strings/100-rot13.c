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

	for (; s[i] != i'\0'; i++)
	{
		if (s[i] >= 'A' && s[i] < 'Z' || s[i] >= 'a' && s[i] < 'z')
		{
			s[i] = s[i] + 13;
		}
	}
	return (s);
}
