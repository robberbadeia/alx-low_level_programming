#include "lists.h"
/**
 *print_list -Function
 *@h: input
 *
 *
 *Return: output
 */
size_t print_list(const list_t *h)
{
	size_t i;

	while (!h)
	{
		i++;
		h = h->next;
	}
	return (i);
}
