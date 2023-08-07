#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 *_strdup - Function to copy array
 *@str: input
 *Return: pointer
 */
char *_strdup(char *str)
{
	char *ptr;
	int i, j;

	i = 0;
	if (*str == NULL)
		return (NULL);

	while (str[i] != '\0')
	{
		i++;
	}
	i++;

	ptr = malloc(i * sizeof(char));

	if (ptr == NULL)
		return (NULL);

	i = 0;
	while (str[i] != '\0')
	{
		ptr[i] = str[i];
		i++;
	}
	i++;
	ptr[i] = '\0';
	return (ptr);
}
