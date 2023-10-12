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

	new = malloc(sizeof(dlistint_t));
	if (!new)
	{
		return (NULL);
	}
	new->n = n;
	new->next = NULL;
	if ((*head) == NULL)
	{
		new->prev = NULL;
		(*head) = new;
	}
	else
	{
		while ((*head)->next != NULL)
		{
			new->prev = (*head);
			(*head)->next = new;
		}
	}
	return ((*head));
}
