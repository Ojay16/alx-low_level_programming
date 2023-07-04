#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - adds a new node at the end of a list_t list.
 * @head: double pointer to the list
 * @str: string.
 * Return: address of the new element  OR  NULL if it failed.
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *one;
	list_t *temp = *head;
	unsigned int len = 0;

	while (str[len])
		len++;

	one = malloc(sizeof(list_t));
	if (!one)
		return (NULL);

	one->str = strdup(str);
	one->len = len;
	one->next = NULL;

	if (*head == NULL)
	{
		*head = one;
		return (one);
	}

	while (temp->next)
		temp = temp->next;

	temp->next = one;

	return (one);
}
