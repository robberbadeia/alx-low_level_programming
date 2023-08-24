#include "lists.h"
/**
 *list_len - Function
 *
 *@h: input
 *
 *Return: list len
 */
size_t list_len(const list_t *h)
{
	size_t i = 0;

	while (h)
	{
		h = h->next;
		i++;
	}
	return (i);
}
