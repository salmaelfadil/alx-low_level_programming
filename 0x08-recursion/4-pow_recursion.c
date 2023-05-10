#include "main.h"
/**
 * _pow_recursion - returns value of x raised to power of y
 * @x: int
 * @y: int
 *
 * Return: value of x power y, -1 if error
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
