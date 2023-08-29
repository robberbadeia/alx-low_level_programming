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
	listint_t *ptr, *tmp;

	if (!*head)
	{
		return (0);
	}
	tmp = *head;
	*head = tmp->next;
	printf("%d\n", tmp->n);
	free(tmp);
	return (1);
}
