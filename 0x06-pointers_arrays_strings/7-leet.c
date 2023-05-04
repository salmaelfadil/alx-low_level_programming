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
	char letters[] = "aAeEoOtTlL";
	char nums[] = "4433007711";

	for (; s[i] != '\0'; i++)
	{
		if (s[i] == letters[i])
		{
			s[i] = nums[i];
		}
	}
	return (s);
}
