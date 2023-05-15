#include "main.h"
#include <stdlib.h>
/**
 * _strdup -- function that returns a pointer to newly
 * allocated space in memory which contains a copy of a string
 * @str: string
 *
 * Return: pointer
 */
char *_strdup(char *str)
{
	char *a;
	int i = 0;
	int j = 0;

	if (str == NULL)
		return (NULL);

	for (; str != '\0'; i++)
	{
		;
	}

	a = malloc(sizeof(char) * (i + 1));

	if (a == NULL)
		return (NULL);

	for (; str != '\0'; j++)
	{
		a[j] = str[j];
	}

	a[j] = '\0';

	return (a);
}
