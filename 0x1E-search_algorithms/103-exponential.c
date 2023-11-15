#include "search_algos.h"
/**
 * min -- returns the minimum value
 * @a: number
 * @b: number
 * Return: smaller value
 */
size_t min(size_t a, size_t b)
{
	if (b < a)
		return (b);
	return (a);
}
/**
 * exponential_search -- searches using exponential search
 * @array: array to be searched
 * @size: size of array
 * @value: value to be searched
 * Return: index of the value, -1 if not found
 */
int exponential_search(int *array, size_t size, int value)
{
	size_t i = 1;

	if (!array || size == 0)
		return (-1);

	if (array[0] == value)
		return (0);

	for (; i < size && array[i] < value; i = i * 2)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	printf("Value found between indexes [%ld] and [%ld]\n", i / 2, min(i, size - 1));
	return (binary_search_recursive(array, i / 2, min(i, size - 1), value));
}
/**
 * binary_search_recursive -- recusion
 * @low: start int
 * @high: last int
 * @array: pointer to the first element of the array
 * @value: value to search for
 * Return: -1 if faliure, else return index
*/
int binary_search_recursive(int *array, size_t low, size_t high, int value)
{
	if (high >= low)
	{
		int mid = low + (high - low) / 2;
		size_t i = low;

		printf("Searching in array: ");
		for (; i < high; i++)
			printf("%d, ", array[i]);
		printf("%d\n", array[i]);
		if (array[mid] == value)
			return (mid);

		if (array[mid] > value)
			return (binary_search_recursive(array, low, mid - 1, value));

		return (binary_search_recursive(array, mid + 1, high, value));
	}
	return (-1);
}
