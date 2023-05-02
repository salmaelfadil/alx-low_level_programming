#include "main.h"
/**
 * *_strcpy - copies a string
 * @dest: pointer which the string will be pasted in
 * @src: pointer to the string which will be copied
 *
 * Return: pointer to dest
 */
char *_strcpy(char *dest, char *src)
{

	int i = 0, j = 0;

	while (src[i] != '\0')
	{
		dest[j] = src[i];
		i++;
	}
	dest[j++] = '\0'

	return (dest);
}
