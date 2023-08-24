#include "lists.h"
/**
 *free_list - Function
 *@head: input
 *
 *Return: Non
 */
void free_list(list_t *head)
{
	list_t *curr;

	while (head)
	{
		curr = *head;
		head = head->next;
		free(curr);
	}
}
