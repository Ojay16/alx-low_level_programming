#include "lists.h"

/**
 * listint_len - returns the number of elements in a lstint_t lists
 * @h: list of type listint_t to traverse
 * Return: number
 */
size_t listint_len(const listint_t *h)
{
	size_t o = 0;

	while (h)
	{
		o++;
		h = h->next;
	}

	return (o);
}

