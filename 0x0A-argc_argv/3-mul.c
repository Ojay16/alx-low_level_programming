#include <stdio.h>
#include "main.h"

/**
 * _atoi - converts a string to an integer
 * @s: string to be converted
 * Return: the int converted from the string
 */

int _atoi(char *s)
{
	int o, j, e, len, m, digit;

	o = 0;
	j = 0;
	e = 0;
	len = 0;
	m = 0;
	digit = 0;

	while (s[len] != '\0')
		len++;

	while (o < len && m == 0)
	{
		if (s[o] == '-')
			++j;

		if (s[o] >= '0' && s[o] <= '9')
		{
			digit = s[o] - '0';
			if (j % 2)
				digit = -digit;
			e = e * 10 + digit;
			m = 1;
			if (s[o + 1] < '0' || s[o + 1] > '9')
				break;
			m = 0;
		}
		o++;
	}

	if (m == 0)
		return (0);

	return (e);
}

/**
 * main - multiplies two numbers
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 0 (Success), 1 (Error)
 */
int main(int argc, char *argv[])
{
	int result, num1, num2;

	if (argc < 3 || argc > 3)
	{
		printf("Error\n");
		return (1);
	}

	num1 = _atoi(argv[1]);
	num2 = _atoi(argv[2]);
	result = num1 * num2;

	printf("%d\n", result);

	return (0);
}
