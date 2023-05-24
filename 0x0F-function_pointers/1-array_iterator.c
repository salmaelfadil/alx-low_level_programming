#include "function_pointers.h"
/**
 * array_iterator -- function that executes a function given as a
 * parameter on each element of an array 
 * @size: size of the array
 * @action: pointer to the function to be used
 *
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i = 0;

	if (array != NULL & action != NULL)
		for(; i < size; i++)
			action(array[i]);
}
