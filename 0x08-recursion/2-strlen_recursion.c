#include "main.h"
/**
 * _strlen_recursion - Returns length string.
 *@j:measured string.
 *Return:length of string.
 */

int _strlen_recursion(char *j)

{
	int longit = 0;

	if (*j)
	{
		longit++;
		longit += _strlen_recursion(j + 1);
	}
	return (longit);
}
