#include "main.h"
#include <stdlib.h>
/**
 * str_concat -- function concatenates two strings
 * @s1: string 1
 * @s2: string 2
 *
 * Return: pointer two newly concatenated string
 */
char *str_concat(char *s1, char *s2)
{
	char *a;
	int k, len = 0, i = 0, j = 0;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	while (s1[i] || s2[i])
	{
		len++;
		i++;
	}

	a = malloc(sizeof(char) * len);

	if (a == NULL)
		return (NULL);

	for (; s1[j]; j++)
		a[j] = s1[j];

	for (k = 0; s2[k]; k++, j++)
		a[j] = s2[k];

	return (a);
}
