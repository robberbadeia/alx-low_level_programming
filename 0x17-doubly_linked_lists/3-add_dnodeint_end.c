#include "lists.h"
/**
 *add_dnodeint_end - Functtion
 *@head: input
 *@n: input
 *Return: pointer to new node
*/
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *tmp, *new;

	if (!head)
	{
		return (NULL);
	}
	new = malloc(sizeof(dlistint_t));

	if (!new)
	{
		return (NULL);
	}
	new->n = n;
	if ((*head) == NULL)
	{
		new->next = NULL;
		new->prev = NULL;
		(*head) = new;
		return (new);
	}
	tmp = *head;
	while (tmp->next != NULL)
		tmp = tmp->next;

	new->next = NULL;
	new->prev = tmp;
	tmp->next = new;
	return (new);
}
