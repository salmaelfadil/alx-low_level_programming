#include "main.h"
/**
 * _isalpha - check if c is alphabetic
 * @c: character to check
 *
 * Return: 1 if c is a letter
 */
int _isalpha(int c)
{
	if(c => 97 && c <= 122 || c => 65 && c <= 90)
	{
		return (1);
	}
	else
		return (0);
}
