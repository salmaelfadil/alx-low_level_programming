#include "main.h"
#include <stdlib.h>
/**
 * strtow -- splits a string into words
 * @str: string
 *
 * Return: pointer to an array of strings
 */
char **strtow(char *str)
{
	int i = 0, j = 0, len;
	char *a;

	if (str == NULL)
		return (NULL);

	while (str[i])
	{
		while (str[i][j])
		{
			len++;
			j++;
		}
		i++;
		len++;
	}

	a = malloc(sizeof(char) * len);

	if (a == NULL)
		return (NULL);

	for (i = 0; i != 32; i++)
	{
		for (j = 0; str[i][j]; j++)
			a[i] = str[i][j];
		a[i] = '\0';
	}
}
