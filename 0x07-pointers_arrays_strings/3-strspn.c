#include "main.h"
#include <stdio.h>
/**
 * int _strspn - gets the length of a prefix substring
 * @s: pointer to string
 * @accept: pointer to accept
 *
 * Return: number of bytes in initial segment of s
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i = 0;

	for (; accept[i] != '\0'; i++)
	{
		return (i);
	}
}
