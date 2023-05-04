#include "main.h"
/**
 * leet - encodes a string into 1337
 * @s: string to be encoded
 *
 * Return: pointer to s
 */
char *leet(char *s)
{
	int i = 0, j;
	char letters[] = "aAeEoOtTlL";
	char nums[] = "4433007711";

	for (; s[i] != '\0'; i++)
	{
		for (j = 0; letters[j] != '\0'; j++)
		{
			if (s[i] == letters[j])
			{
				s[i] = nums[j];
			}
		}
	}
	return (s);
}
