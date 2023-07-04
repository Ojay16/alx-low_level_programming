#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - adds a new node at the beginning of a list_t list.
 * @head: double pointer to the list.
 * @str: new string to add.
 * Return: address of the new element  OR  NULL if it fails.
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *one;
	unsigned int len = 0;

	while (str[len])
		len++;

	one = malloc(sizeof(list_t));
	if (!one)
		return (NULL);

	one->str = strdup(str);
	one->len = len;
	one->next = (*head);
	(*head) = one;

	return (*head);
}
