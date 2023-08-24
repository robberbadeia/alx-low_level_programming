#include "lists.h"
/**
 *add_node_end - Function
 *@head: input
 *@str: input
 *Return: pointer
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *lst, *selc;
	size_t n;

	lst = malloc(sizeof(list_t));
	if (lst == NULL)
		return (NULL);

	while (str[n])
		n++;

	lst->len = n;
	lst->str = strdup(str);
	lst->next = NULL;

	selc = *head;
	if (!selc)
		*head = lst;
	else
	{
		while (selc->next)
			selc = selc->next;
		selc->next = lst;
	}
	return (*head);
}
