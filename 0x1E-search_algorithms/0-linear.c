#include "search_algos.h"
/**
 * linear_search -- uses linear search to find value
 * @array: pointer to the first element of the array
 * @size: size of the array
 * @value: value to search for
 * Return: -1 if faliure, else return index
*/

int linear_search(int *array, size_t size, int value)
{
    size_t i = 0;

    if (!array || size == 0)
    {
        return (-1);
    }

    for (; i < size; i++)
    {
        
        printf("Value checked array[%zu] = [%i]\n", i, array[i]);

        if (array[i] == value)
        {
            //printf("Found %i at index: %zu", value, i);
            return(i);
        }
    }
    return (-1);
}
