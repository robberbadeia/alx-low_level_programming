#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *create_array - Function to create an array
 *@size: input
 *@c: input
 *Return: pointer
 */
char *create_array(unsigned int size, char c)
{
	char *ptr;
	unsigned int i;

	i = 0;
	if (size == 0)
		return (NULL);
	ptr = malloc(size * sizeof(char));

	if (ptr == NULL)
		return (NULL);
	while (i < size)
	{
		ptr[i] = c;
	}
	return (ptr);
}
