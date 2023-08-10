#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *malloc_checked - Function to create array
 *@b: int
 *Return: void
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b * sizeof(char));

	if (ptr == NULL)
		return (NULL);
	return (ptr);
}
