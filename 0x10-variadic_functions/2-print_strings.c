#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - Prints strings, then a new line.
 * @separator: strings to be printed between strings.
 * @o: The number of string.
 * @...: A variable number of strings to be printed.
 * Return: none.
 */
void print_strings(const char *separator, const unsigned int o, ...)
{
	va_list strings;
	char *str;
	unsigned int index;

	va_start(strings, o);

	for (index = 0; index < o; index++)
	{
		str = va_arg(strings, char *);

		if (str == NULL)
			printf("(nil)");
		else
			printf("%s", str);

		if (index != (o - 1) && separator != NULL)
			printf("%s", separator);
	}

	printf("\n");

	va_end(strings);
}
