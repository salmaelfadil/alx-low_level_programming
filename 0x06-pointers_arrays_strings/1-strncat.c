#include "main.h"
/**
 * _strncat - concatenates two strings
 * @dest: pointer to destination string
 * @src: pointer to source string
 * @n: number of bytes from src
 *
 * Return: pointer to string dest
 */
char *_strcat(char *dest, char *src)
{
	int i = 0, j = 0;

	while (dest[j])
	{
		j++;
	}
	for (; i < n && src[i] != '\0'; i++)
	{
		dest[j] = src[i];
		j++;
	}
	if ((sizeof(src)) < n)
	{
		dest[j] = '\0';
	}
	return (dest);
}
