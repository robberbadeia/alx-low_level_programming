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
	else
	{
		ptr = *head;
		while (ptr)
		{
			tmp = ptr;
			printf("%d\n", ptr->n);
			ptr = ptr->next;
			free(tmp);
		}
		return (1);
	}
}
