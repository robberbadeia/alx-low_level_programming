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
	int i = 0;

	nlst = malloc(sizeof(list_t));
	if (!nlst)
		return (NULL);

	while (str[i] != '\0')
		i++;

	lst->len = i;
	lst->str = strdup(str);
	lst->next = *head;
	
	*head = lst;

	return (*head);
}
