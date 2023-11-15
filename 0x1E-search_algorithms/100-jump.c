#include "search_algos.h"
/**
 * jump_search -- uses jump search to search for an element
 * @array: array to be searched
 * @size: size of array
 * @value: value to be searched
 * Return: index, -1 if not found
*/
int jump_search(int *array, size_t size, int value)
{
    size_t j = 0;
    size_t i = 0;

    if (!array || size == 0)
    {
        return (-1);
    }
    while(array[j] < value && j < size)
    {
        printf("Value checked array[%ld] = [%d]\n", j, array[j]);
        i = j;
        j += sqrt(size);
    }
    printf("Value found between indexes [%ld] and [%ld]\n", i, j);
    for (; i < size; i++)
    {
        printf("Value checked array[%ld] = [%d]\n", i, array[i]);
        if (array[i] == value)
        {
            return (i);
        }
    }
    return (-1);
}
