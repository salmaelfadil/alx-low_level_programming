#include "main.h"
/**
 * clear_bit -- sets value of a bit to 0 at given index
 * @n: pointer to number
 * @index: index
 *
 * Return: 1 on sucess else -1
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(n) * 8)
		return (-1);

	*n = ~(1 << index);

	return (1);
}
