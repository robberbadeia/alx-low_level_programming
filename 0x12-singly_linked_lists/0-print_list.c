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

	while (h)
	{
		if (h->str)
			printf("[%d] %s\n", h->len, h->str);
		else
			printf("[0] (nil)\n");
		h = h->next;
		i++;
	}
	return (i);
}
