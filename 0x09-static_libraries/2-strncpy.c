#include "main.h"
/**
 * _strncpy - function that copies a string
 * @dest: pointer to destination string
 * @src: pointer to source string
 * @n: number of bytes to be copied
 * Return: pointer to destination string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0, j = 0;

	while (src[j] != '\0')
	{
		j++;
	}

	for (; i != j && i < n; i++)
	{
		dest[i] = src[i];
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
