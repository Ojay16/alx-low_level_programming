#include "main.h"
/**
 * _abs - function prints absolute value
 *
 * @i: parameter
 *
 * Return: this is i
 */

int _abs(int i)
{
	if (i < 0)
		i = -(i);
	else if (i >= 0)
		i = i;
	return (i);
}
