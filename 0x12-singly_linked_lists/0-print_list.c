#include <stdio.h>
#include "lists.h"

/**
 * print_list - prints all the elements of a list_t list.
 * @h: pointer of the  list to print.
 * Return: num of nodes printed.
 */
size_t print_list(const list_t *h)
{
	size_t o = 0;

	while (h)
	{
		if (!h->str)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);
		h = h->next;
		o++;
	}

	return (o);
}
