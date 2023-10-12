#include "lists.h"
/**
 *free_dlistint - Function
 *@head: input
 *Return: None
*/
void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp;
	if (!head)
	{
		return (NULL);
	}
	while (head)
	{
		tmp = head;
		free(tmp->n);
		free(tmp);
		head = head->next;
	}
}
