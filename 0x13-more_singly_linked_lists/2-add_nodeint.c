#include "lists.h"
/**
 *add_nodeint - Function
 *
 *@head: pointer
 *@n: int
 *Return: list
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *nNode;

	if (!head)
		return (NULL);
	nNode = malloc(sizeof(listint_t));
	if (!nNode)
		return (NULL);

	nNode->n = n;
	nNode->next = (*head)->next;
	*head = nNode;
	return (nNode);
}
