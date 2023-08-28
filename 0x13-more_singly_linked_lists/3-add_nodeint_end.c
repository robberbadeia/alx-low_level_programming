#include "lists.h"
/**
 *add_nodeint_end - Function
 *
 *@head: input
 *@n: input
 *
 *Return: list
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newNode;

	newNode = malloc(sizeof(listint_t));

	if (!newNode)
		return (NULL);
	newNode->n = n;
	newNode->next = NULL;

	if (*head == NULL)
	{
		*head = newNode;
	}
	else
	{
		while ((*head)->next)
		{
			*head = (*head)->next;
		}
		(*head)->next = newNode;
	}
	return (newNode);
}
