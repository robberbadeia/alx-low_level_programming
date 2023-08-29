#include "lists.h"
/**
 *get_nodeint_at_index - Funcion
 *
 *@head: input
 *@index: input
 *
 *Return: pointer
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *ptr;
		;
	if (!head)
		return (NULL);
	ptr = head;
	while (ptr && (i < index))
	{
		ptr = ptr->next;
		i++;
	}
	return (ptr);
}
