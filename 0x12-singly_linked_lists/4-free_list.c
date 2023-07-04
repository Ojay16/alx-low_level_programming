#include <stdlib.h>
#include "lists.h"

/**
 * free_list - frees a list_t list
 * @head: freed list_t list.
 */
void free_list(list_t *head)
{
	list_t *tem;

	while (head)
	{
		tem = head->next;
		free(head->str);
		free(head);
		head = tem;
	}
}
