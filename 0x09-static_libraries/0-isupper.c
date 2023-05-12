#include "main.h"
/**
 * _isupper - checks if c is uppercase
 * @c: char to check
 *
 * Return: 1 if uppercase 0 else
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
