#include "lists.h"
/**
 *delete_nodeint_at_index - Function
 *
 *@head: input
 *@index: input
 *
 *Return: int
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *ptr, *tmp;
	unsigned int i = 0;

	if (!*head)
		return (-1);
	if (index == 0)
	{
		tmp = *head;
		*head = (*head)->next;
		free(tmp);
		return (1);
	}
	else
	{
		ptr = *head;
		while (i < (index - 1))
		{
			ptr = ptr->next;
			i++;
			if (ptr == NULL)
			{
				return (-1);
			}
		}
		tmp = ptr;
		ptr->next = (ptr->next)->next;
		free(tmp);
		return (1);
	}
}
