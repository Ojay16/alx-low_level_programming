#include <stdlib.h>
#include "lists.h"

/**
 * list_len -  returns the num of elements in a linked list_t list.
 * @h: pointer to the list
 * Return: num of elements in list_t list
 */
size_t list_len(const list_t *h)
{
	size_t j = 0;

	while (h)
	{
		j++;
		h = h->next;
	}
	return (j);
}

