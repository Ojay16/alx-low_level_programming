#include "main.h"
/**
 * _strpbrk - locates the first occurrence in any string
 * @s: input
 * @accept: input
 * Return: this is 0
 */
char *_strpbrk(char *s, char *accept)
{
		int k;

		while (*s)
		{
			for (k = 0; accept[k]; k++)
			{
			if (*s == accept[k])
			return (s);
			}
		s++;
		}

	return ('\0');
}
