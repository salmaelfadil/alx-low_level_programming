#include "main.h"
/**
 * _isdigit - checks if c is a digit between 0 and 9
 * @c: digit to be checked
 *
 * Return: 1 if digit and 0 otherwise
 */

_isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
		return (0);
}
