#include "function_pointers.h"

/**
 * int_index - searvhes for an integer/
 * @array: array.
 * @size: size of elements.
 * @cmp: pointer to function.
 * Return: 0.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int o;

	if (array == NULL || size <= 0 || cmp == NULL)
		return (-1);

	for (o = 0; o < size; o++)
	{
		if (cmp(array[o]))
			return (o);
	}
	return (-1);
}
