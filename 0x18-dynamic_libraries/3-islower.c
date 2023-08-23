#include "main.h"

/**
 * _islower - prints lowercase
 *
 * @c: parameter to be printed
 *
 * Return:1 if in lowercase and 0 if otherwise
 */

int _islower(int o)
{
	if (o >= 97 && o <= 122)
		return (1);
	else
		return (0);
}
