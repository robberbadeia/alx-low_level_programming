#include "lists.h"
/**
 *free_listint - Function
 *@head: input
 *
 *Return: Non
 */
void free_listint(listint_t *head)
{
	listint_t *tmp;

	if (!head)
		return;

	while (!head)
	{
		tmp = head;
		free(tmp->n);
		free(tmp);
		head = head->next;
	}
}
