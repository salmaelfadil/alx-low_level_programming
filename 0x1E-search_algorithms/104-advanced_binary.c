#include "search_algos.h"
/**
 * advanced_binary -- searches using advanced binary search algorithm
 * @array: array to be searched
 * @size: size of array
 * @value: value to be searched
 * Return: index of the value, -1 if not found
 */
int advanced_binary(int *array, size_t size, int value)
{
	if (!array || size == 0)
		return (-1);
	return (advanced_binary_rec(array, 0, size - 1, value));
}
/**
 * advanced_binary_rec -- recusion
 * @low: start int
 * @high: last int
 * @array: pointer to the first element of the array
 * @value: value to search for
 * Return: -1 if faliure, else return index
*/
int advanced_binary_rec(int *array, size_t low, size_t high, int value)
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
			return (advanced_binary_rec(array, low, mid - 1, value));

		return (advanced_binary_rec(array, mid + 1, high, value));
	}
	return (-1);
}

