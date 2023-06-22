#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - Prints numbers.
 * @separator: The string to be printed.
 * @o: The number of integers.
 * @...: A variable number of numbers to be printed.
 * Return: none.
 */
void print_numbers(const char *separator, const unsigned int o, ...)
{
	va_list nums;
	unsigned int index;

	va_start(nums, o);

	for (index = 0; index < o; index++)
	{
		printf("%d", va_arg(nums, int));

		if (index != (o - 1) && separator != NULL)
			printf("%s", separator);
	}

	printf("\n");

	va_end(nums);
}
