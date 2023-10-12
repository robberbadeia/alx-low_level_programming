#include "lists.h"
/**
 *add_dnodeint - Function
 *
 *@head: input
 *@n: input
 *Return: pointer to node
*/
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (!new)
	{
		return (NULL);
	}
	new->n = n;
	if ((*head) != NULL)
	{
		(*head)->prev = new;
	}
	new->next = (*head);
	new->prev = NULL;
	(*head) = new;

	return ((*head));
}
