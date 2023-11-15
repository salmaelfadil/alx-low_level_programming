#include "search_algos.h"
/**
 * binary_search -- searches using binary search
 * @array: pointer to the first element of the array
 * @size: size of array
 * @value: value to search for
 * Return: -1 if faliure, else return index
*/
int binary_search(int *array, size_t size, int value)
{
	if (!array || size == 0)
		return (-1);
	return (binary_search_recursive(array, 0, size - 1, value));
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
		size_t i = low + 1;

		if (array[mid] == value)
				return (mid);

		printf("Searching in array: %d", array[low]);

		for (; i <= high; i++)
			printf(", %d", array[i]);
		printf("\n");

		if (array[mid] > value)
			return (binary_search_recursive(array, low, mid - 1, value));

		return (binary_search_recursive(array, mid + 1, high, value));
	}
	return (-1);
}
