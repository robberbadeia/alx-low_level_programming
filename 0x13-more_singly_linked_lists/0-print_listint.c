#include "lists.h"
/**
 *print_listint -Function
 *@h: input
 *
 *
 *Return: output
 */
size_t print_listint(const listint_t *h)
{
	size_t i = 0;

	while (h)
	{
		printf("%d", h->n);
		h = h->next;
		i++;
	}
	return (i);
}
