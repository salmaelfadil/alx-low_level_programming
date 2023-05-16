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
	char **a;

	if (str == NULL)
		return (NULL);

	while (str[i])
	{
		if (str[i] == " ")
		{
			i++;

		}
		else
		{	i++;
			len++;
		}
	}

	a = malloc(sizeof(char) * (len + 1));

	if (a == NULL || len == 0)
		return (NULL);

	for (i = 0; i < len; i++)
	{
		for (j = 0; str[i][j]; j++)
			a[i] = str[i][j];
		a[i] = '\0';
	}
}
