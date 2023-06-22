#include "function_pointers.h"
#include <stdio.h>

/**
 * print_name - prints name.
 * @name: string.
 * @o: pointer to function
 * Return: none.
 **/

void print_name(char *name, void (*o)(char *))
{
	if (name == NULL || o == NULL)
		return;

	o(name);
}
