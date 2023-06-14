#include "main.h"
#include <stdlib.h>
/**
 * str_concat -  concatenates two strings
 * @o1: input one
 * @o2: input two
 * Return: concatenated value  of o1 and o2
 */
char *str_concat(char *o1, char *o2)
{
	char *conct;
	int j, oj;

	if (o1 == NULL)
		o1 = "";
	if (o2 == NULL)
		o2 = "";

	j = oj = 0;
	while (o1[j] != '\0')
		j++;
	while (o2[oj] != '\0')
		oj++;
	conct = malloc(sizeof(char) * (j + oj + 1));

	if (conct == NULL)
		return (NULL);
	j = oj = 0;
	while (o1[j] != '\0')
	{
		conct[j] = o1[j];
		j++;
	}

	while (o2[oj] != '\0')
	{
		conct[j] = o2[oj];
		j++, oj++;
	}
	conct[j] = '\0';
	return (conct);
}
