#include "main.h"
/**
 * _abs - print absolute value of an integer
 * @c: int whose absolute value will be taken
 *
 * Return: abs value
 */
int _abs(int c)
{
	if (c < 0)
		return (c * -1);
	else
		return (c);
}
