#include "main.h"
/**
 * flip_bits -- returns number of bits you need to flip
 * to get from one number to the other
 * @n: number 1
 * @m: number 2
 *
 * Return: unsigned int
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int i = 0;
	unsigned int count = 0;
	unsigned long int val = 1;
	unsigned long int xor = n ^ m;

	for (; i < (sizeof(n) * 8); i++)
	{
		if (val == (xor & val))
			count++;

		val <<= 1;
	}

	return (count);
}
