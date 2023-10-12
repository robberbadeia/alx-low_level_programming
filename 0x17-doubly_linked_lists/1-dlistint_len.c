#include "lists.h"
/**
 *dlistint_len - Function
 *@h: input
 *
 *Return: size of linked list
 *
*/
size_t dlistint_len(const dlistint_t *h)
{
	size_t i = 0;

	if (!h)
	{
		return (0);
	}
	while (h)
	{
		i++;
		h = h->next;
	}
	return (i);
}
