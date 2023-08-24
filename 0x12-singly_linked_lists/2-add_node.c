#include "main.h"
/**
 *add_node - Function
 *@head: input
 *@str: input
 *Return: list
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t nlst;
	int i = 0;

	if (!head)
		return (NULL);

	nlst = malloc(list_t);
	if (!nlst)
		return (NULL);

	while (str != '\0')
		i++;

	lst->len = i;
	lst->str = strdup(h->str);
	lst->next = h->next;

	return (lst);
}
