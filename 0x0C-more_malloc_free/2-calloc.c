#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *_calloc - Function
 *@nmemb: int
 *@size: inr
 *Return: void
 *
 *
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *p;

	if (nmemb == 0 || size == 0)
		return (NULL);
	p = malloc(nmemb * size * sizeof(int));

	if (p == NULL)
		return (NULL);

	return (p);
}
