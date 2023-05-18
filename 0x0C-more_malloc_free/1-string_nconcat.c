#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * string_nconcat -- function that concatenates two strings
 * @s1: string 1
 * @s2: string 2
 * @n: number of bytes to be added from s2
 *
 * Return: pointer to the new string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str;
	unsigned int i = 0;
	unsigned int len = sizeof(s1) + n - 3;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	str = malloc(sizeof(char) * (len));

	if (str == NULL)
		return (NULL);

	len = 0;

	for (i = 0; s1[i]; i++)
		str[len++] = s1[i];

	for (i = 0; i < n && s2[i]; i++)
		str[len++] = s2[i];

	str[len] = '\0';

	return (str);
}
