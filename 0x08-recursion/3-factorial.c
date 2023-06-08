#include "main.h"

/**
 * factorial - finds factorial of a number(o).
 * @o: number to find the factorial.
 * Return: factorial o.
 */

int factorial(int o)
{
	if (o < 0)
		return (-1);
	if (o == 0)
		return (1);
	return (o * factorial(o - 1));
}
