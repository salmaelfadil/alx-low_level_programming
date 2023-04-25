#include "main.h"
/**
 * _islower - checks if character is lowercase
 * @c: character to check
 *
 * Return : 1 if lowecase
 */
int _islower(int c)
{
	if (c <= 97)
		return (0);
	else
		return (1);
}
