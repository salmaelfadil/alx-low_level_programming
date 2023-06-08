#include "main.h"
/**
 * set_bit -- sets the valua of a bit to 1 at a given index
 * @n: pointer to number
 * @index: index
 *
 * Return: 1 on success else -1
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(n) * 8)
		return (-1);

	*n |= (1 << index);

	return (1);
}
