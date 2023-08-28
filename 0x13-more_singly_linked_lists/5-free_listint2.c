#include "lists.h"
/**
 *free_listint2 - Function
 *@head: input
 *
 *Return: Non
 */
void free_listint2(listint_t **head)
{
	listint_t *tmp;

	if (!*head)
		return;
	while (*head)
	{
		tmp = *head;
		*head = tmp->next;
		free(tmp);
	}
}
