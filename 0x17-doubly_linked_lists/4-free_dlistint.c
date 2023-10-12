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
		return;
	}
	while (head)
	{
		head = head->next;
		free(head->prev);
	}
	free(head);
}
