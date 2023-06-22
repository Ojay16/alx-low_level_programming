#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - Returns the sum of all its paramters.
 * @o: The number of paramters passed.
 * @...: A variable number of paramters to calculate/
 * Return: sum
 */
int sum_them_all(const unsigned int o, ...)
{
	va_list me;
	unsigned int j, sum = 0;

	va_start(me, o);

	for (j = 0; j < o; j++)
		sum += va_arg(me, int);

	va_end(me);

	return (sum);
}
