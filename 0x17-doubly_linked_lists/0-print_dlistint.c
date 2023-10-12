#include "lists.h"
/**
 *print_dlistint - Function
 *
 *@h: input
 *
 *Return: size of list
*/
size_t print_dlistint(const dlistint_t *h)
{
	size_t i = 0;

	if (!h)
	{
		return (0);
	}

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		i++;
	}
	return (i);
}
