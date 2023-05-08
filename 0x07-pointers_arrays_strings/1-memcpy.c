#include "main.h"
/**
 * _memcpy - function that copies memory area
 * @dest: pointer to destination
 * @src: pointer to source
 * @n: unsigned int number of bytes to be copied
 * Return: pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	for (; i <= n; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}
