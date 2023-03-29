#include "main.h"
#include "stdio.h"
/**
 * print_array - prints element in array
 * @a: parameter
 * @n: parameter
 * Return: 0
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; a[i] < n ; i++)
	{
		if (i != n - 1)
			printf("%d, ", a[i]);
		else
			printf("%d", a[i]);
	}
	printf("\n");

}
