#include "lists.h"
/**
 *insert_nodeint_at_index - Function
 *
 *@head: input
 *@idx: input
 *@n: input
 *Return: pointer
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i = 0;
	listint_t *ptr, *new;

	if (!*head)
		return (NULL);
	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);

	ptr = *head;
	new->n = n;
	if (idx == 0)
	{
		new->next = ptr;
		ptr = new;
		return (new);
	}
	while (i < (idx - 1))
	{
		ptr = ptr->next;
		i++;
		if (ptr == NULL)
		{
			free(new);
			return (NULL);
		}
	}
	new->next = ptr->next;
	ptr->next = new;
	return (new);
}
