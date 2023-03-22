#include "main.h"

/**
 * print_alphabet_x10 - print alphabet x10
 *
 * Return: always 0
 */
void print_alphabet_x10(void)
{
	int c;
	char i;

	for (c = 1 ; c <= 10 ; c++)
	{
		for (i = 'a' ; i <= 'z' ; i++)
			_putchar(i);
		_putchar('\n');
	}

}
