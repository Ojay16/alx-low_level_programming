#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - returns a pointer to a two dimensional array.
 * @width: width input
 * @height: height input
 * Return: pointer to two dimensional array
 */
int **alloc_grid(int width, int height)
{
	int **oje;
	int o, j;

	if (width <= 0 || height <= 0)
		return (NULL);

	oje = malloc(sizeof(int *) * height);

	if (oje == NULL)
		return (NULL);

	for (o = 0; o < height; o++)
	{
		oje[o] = malloc(sizeof(int) * width);

		if (oje[o] == NULL)
		{
			for (; o >= 0; o--)
				free(oje[o]);

			free(oje);
			return (NULL);
		}
	}

	for (o = 0; o < height; o++)
	{
		for (j = 0; j < width; j++)
			oje[o][j] = 0;
	}

	return (oje);
}
