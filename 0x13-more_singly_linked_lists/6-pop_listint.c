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
	int data = 0;
	listint_t *tmp;

	if (!*head)
	{
		return (0);
	}
	tmp = *head;
	data = tmp->n;

	*head = tmp->next;
	free(tmp);

	return (data);
}
