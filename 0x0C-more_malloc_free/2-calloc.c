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
	char *p;
	unsigned int i = 0;

	if (nmemb == 0 || size == 0)
		return (NULL);
	p = malloc(nmemb * size);

	if (p == NULL)
		return (NULL);
	for (i = 0; i < nmemb * size; i++)
		p[i] = 0;

	return (p);
}
