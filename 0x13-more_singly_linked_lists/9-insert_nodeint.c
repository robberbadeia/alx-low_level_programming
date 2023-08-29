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

	new->n = n;
	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}
	ptr = *head;
	while (ptr && i < (idx - 1))
	ptr = *head;
	{
		ptr = ptr->next;
		i++;
	}
	new->next = ptr->next;
	ptr->next = new;
	return (new);
}
