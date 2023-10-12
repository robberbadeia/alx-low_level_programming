#include "lists.h"
/**
 *get_dnodeint_at_index - Function
 *@head: input
 *@index: input
 *Return: pointer
*/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *tmp;

	size_t len, i = 0;

	while (head)
	{
		len++;
		head = head->next;
	}

	if (!head)
	{
		return (NULL);
	}
	if (index == 0 && head != NULL)
	{
		return (head);
	}
	tmp = head;
	while (tmp && i != index)
	{
		tmp = tmp->next;
		i++;
	}
	return (tmp);
}
