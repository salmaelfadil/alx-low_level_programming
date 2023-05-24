#include "function_pointers.h"
/**
 * int_index -- function that searches for an integer
 * @array: array of ints
 * @size: size of the array
 * @cmp: pointer to the function to be used to compare values
 *
 * Return: index to the first element for which cmp
 * does not return 0, else -1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (size <= 0)
		return (-1);

	for (; i < size; i++)
	{
		if (cmp(array[i]) != 0)
			return (i);
	}

	return (-1);
}
