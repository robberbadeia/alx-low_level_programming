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

	selc = *head;
	lst = malloc(sizeof(list_t));
	if (lst == NULL)
		return (NULL);

	while (str[n] != '\0')
		n++;

	lst->len = n;
	lst->str = strdup(str);
	lst->next = NULL;

	if (selc == NULL)
		*head = lst;
	else
	{
		while (selc->next != NULL)
			selc = selc->next;
		selc->next = lst;
	}
	return (*head);
}
