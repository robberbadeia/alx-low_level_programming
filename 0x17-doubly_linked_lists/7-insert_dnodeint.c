#include "lists.h"
/**
 *insert_dnodeint_at_index - Function
 *@h: input
 *@idx: input
 *@n: input
 *Return: pointer
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	size_t len = 0;
	unsigned int i = 0;

	while (*h)
	{
		len++;
		(*h) = (*h)->next;
	}
	len--;
	if (*h == NULL)
	{
		return(readd_dnodeint(*h, n));
	}
	if (idx == len)
	{
		return(add_dnodeint_end(*h, n));
	}
	while (i < idx)
	{
		(*h) = (*h)->next;
		i++;
	}
	return (*h);
	
}
