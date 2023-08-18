#include "main.h"

/**
 * binary_to_uint - Functin converts a binary num to unsigned int.
 * @b: string containing the binary num.
 * Return: converted num.
 */
unsigned int binary_to_uint(const char *b)
{
	int o;
	unsigned int dec_val = 0;

	if (!b)
		return (0);

	for (o = 0; b[o]; o++)
	{
		if (b[o] < '0' || b[o] > '1')
			return (0);
		dec_val = 2 * dec_val + (b[o] - '0');
	}

	return (dec_val);
}