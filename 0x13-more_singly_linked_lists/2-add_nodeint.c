#include "lists.h"

/**
 * add_nodeint - adds a new node at the beginning of a listint_t list
 * @head: pointer to the first node of the list
 * @n: data to insert in new node
 * Return: pointer to the new node  OR   NULL if it fails
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *oj;

	oj = malloc(sizeof(listint_t));
	if (!oj)
		return (NULL);

	oj->n = n;
	oj->next = *head;
	*head = oj;

	return (oj);
}
