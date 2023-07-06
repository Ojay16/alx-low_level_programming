#include "lists.h"

/**
 * add_nodeint_end - adds a node at the end of a listint_t list
 * @head: pointer to the first element in the listint_t list
 * @n: data to be inserted in the new element
 * Return: pointer to the new node  OR   NULL if it fails
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *on;
	listint_t *t = *head;

	on = malloc(sizeof(listint_t));
	if (!on)
		return (NULL);

	on->n = n;
	on->next = NULL;

	if (*head == NULL)
	{
		*head = on;
		return (on);
	}

	while (t->next)
		t = t->next;

	t->next = on;

	return (on);
}
