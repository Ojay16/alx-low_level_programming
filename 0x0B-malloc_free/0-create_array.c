#include "main.h"
#include <stdlib.h>
/**
 * create_array - creates an array of char
 * @size: size of array
 * @o: char to assign
 * Description: creates an  array of size  and assign char o
 * Return: str, NULL if size = 0
 */
char *create_array(unsigned int size, char o)
{
	char *str;
	unsigned int j;

	str = malloc(sizeof(char) * size);
	if (size == 0 || str == NULL)
		return (NULL);

	for (j = 0; j < size; j++)
		str[j] = o;
	return (str);
}
