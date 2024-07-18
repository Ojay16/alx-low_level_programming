#include "search_algos.h"

/**
 * linear_search - performs a linear search for a value in an array of integers
 * @array: pointer to the first element of the array to be searched
 * @size: number of elements in the array
 * @value: value to be searched for
 * Return: the first index where the value is found
**/

int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (!array)
		return (-1);

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}

	return (-1);
}
