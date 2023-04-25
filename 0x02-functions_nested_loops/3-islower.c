#include "main.h"
/**
 * _islower - main entry point
 * checks if character is lowercase
 * Return : 0 or 1 
 */

int _islower(int c)
{
	if (c <= 97)
		return 0;
	else 
		return 1; 
}
