#include <stdlib.h>
#include "main.h"

/**
 * *array_range - creates array of ints.
 * @min: min range.
 * @max: max range.
 * Return: ptr.
 */
int *array_range(int min, int max)
{
	int *ptr;
	int o, size;

	if (min > max)
		return (NULL);

	size = max - min + 1;

	ptr = malloc(sizeof(int) * size);

	if (ptr == NULL)
		return (NULL);

	for (o = 0; min <= max; o++)
		ptr[o] = min++;

	return (ptr);
}
