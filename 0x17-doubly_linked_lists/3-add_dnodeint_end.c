#include "lists.h"
/**
 *add_dnodeint_end - Functtion
 *@head: input
 *@n: input
 *Return: pointer to new node
*/
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new, *last;

	if (!head)
		return (NULL);

	/* malloc and set new node data */
	new = malloc(sizeof(struct dlistint_s));
	if (!new)
		return (NULL);
	new->n = n;

	/* account for empty linked list */
	if (*head == NULL)
	{
		*head = new;
		new->next = NULL;
		new->prev = NULL;
		return (new);
	}

	/* traverse to last node and insert */
	last = *head;
	while (last->next != NULL)
		last = last->next;
	new->next = NULL;
	new->prev = last;
	last->next = new;

	return (new);
}
