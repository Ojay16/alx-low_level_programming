#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * _strdup - function returns a pointer to a new string.
 * @str: char
 * Return: 0
 */
char *_strdup(char *str)
{
	char *ooo;
	int j, e = 0;

	if (str == NULL)
		return (NULL);
	j = 0;
	while (str[j] != '\0')
		j++;

	ooo = malloc(sizeof(char) * (j + 1));

	if (ooo == NULL)
		return (NULL);

	for (e = 0; str[e]; e++)
		ooo[e] = str[e];

	return (ooo);
}
