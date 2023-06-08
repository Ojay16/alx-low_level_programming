#include "main.h"

/**
 * _print_rev_recursion - Prints string in reverse format.
 * @o:string to be printed.
 */
void _print_rev_recursion(char *o)
{
	if (*o)
	{
		_print_rev_recursion(o + 1);
		_putchar(*o);
	}
}
