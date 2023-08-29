#include "lists.h"
/**
 *pop_listint - Function
 *
 *@head: input
 *
 *Return: int
 */
int pop_listint(listint_t **head)
{
	listint_t *tmp;

	if (!*head)
	{
		return (0);
	}
	tmp = *head;
	*head = tmp->next;
	return (tmp->n);
	free(tmp);
}
