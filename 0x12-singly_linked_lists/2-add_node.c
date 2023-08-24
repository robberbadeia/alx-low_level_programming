#include "lists.h"
/**
 *add_node - Function
 *@head: input
 *@str: input
 *Return: list
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *nlst;
	size_t n;

	nlst = malloc(sizeof(list_t));
	if (nlst == NULL)
		return (NULL);
	
	for (n = 0; str[n]; n++)
		;

	lst->len = n;
	lst->str = strdup(str);
	lst->next = *head;
	
	*head = lst;

	return (*head);
}
