#include "main.h"
/**
 * leet - encodes a string into 1337
 * @s: string to be encoded
 *
 * Return: pointer to s
 */
char *leet(char *s)
{
	int i = 0, j = 0;
	char letters[] = "aAeEoOtTlL";
	char nums[] = "4433007711";

	for (; s[i] != '\0'; i++)
	{
		j = 0;
		for (; letters[j] != '\0'; j++)
		{
			if (s[i] == letters[j])
			{
				s[i] = nums[j];
			}
		}
	}
	return (s);
}