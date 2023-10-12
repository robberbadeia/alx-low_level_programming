#include "lists.h"
/**
 *get_dnodeint_at_index - Function
 *@head: input
 *@index: input
 *Return: pointer
*/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	size_t i = 0;

	if (!head)
	{
		return (NULL);
	}

	if (index == 0)
	{
		return (head);
	}

	while (head->next && i != index)
	{
		head = head->next;
		i++;
	}
	return (head);
}
