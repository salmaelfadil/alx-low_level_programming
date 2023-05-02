#include "main.h"
/**
 * _strlen - returns length of string
 * @s: string whose length will be returned
 *
 * Return: String length
 */
int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\n')
	{
		i++;
	}
	return (i);
}
