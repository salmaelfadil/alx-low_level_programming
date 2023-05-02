#include "main.h"
/**
 * _strlen - returns length of string
 * @s: string whose length will be returned
 *
 * Return: String length
 */
int _strlen(char *s)
{
	int count = 0;
	int i = 0;

	while (s[i] != '\n')
	{
		count++;
		i++;
	}
	return (count);
}
