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

	if (!*head)
		return (NULL);
	newNode = malloc(sizeof(listint_t));

	if (!newNode)
		return (NULL);
	newNode->n = n;
	newNode->next = NULL;

	while (*head)
	{
		*head = (*head)->next;
	}
	*head = newNode;

	return (newNode);
}
