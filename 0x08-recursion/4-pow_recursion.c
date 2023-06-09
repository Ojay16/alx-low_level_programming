#include "main.h"

/**
 * _pow_recursion - returns the power of a given int.
 * @o: value of int.
 * @j: value of power.
 * Return:raised to power of int.
 */

int _pow_recursion(int o, int j)
{
	if (j < 0)
		return (-1);
	if (j == 0)
		return (1);
	return (o * _pow_recursion(o, j - 1));
}
