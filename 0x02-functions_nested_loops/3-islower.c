#include "main.h"
/**
 * _islower - main entry point
 * checks if character is lowercase
 * @c: character to check
 * Return : 0 if uppercase 1 if lowecase
 */
int _islower(int c)
{
	if (c <= 97)
		return (0);
	else
		return (1);
}
