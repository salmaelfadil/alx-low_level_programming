#include "main.h"
/**
 * get_bit -- returns the value of a bit at a given index
 * @n: long integer
 * @index: index
 *
 * Return: value bit at index
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int res;

	if (index >= sizeof(n) * 8)
		return (-1);

	res = n >> index;

	return (res & 1);
}
