#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *_realloc - Function
 *@ptr: input
 *@old_size: input
 *@new_size: input
 *Return: pointer to new mem
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *p;
	unsigned int i;

	i = 0;
	if (new_size == old_size)
		return (ptr);
	if (ptr == NULL)
		return (malloc(new_size));
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	p = malloc(new_size);

	if (p == NULL)
		return (NULL);
	
	while (i < old_size)
	{
		(char*)p[i] = (char*)ptr[i];
		i++;
	}
	return (p);
}
