#include "main.h"
/**
 * _memset - function that fills memory with a constant byte
 * @s: pointer to memory
 * @b: constant bytes of meomry
 * @n: bytes of memory area
 * Return: pointer to string s
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (; i < n; i++)
	{
		s = b;
	}

	return (s);
}
