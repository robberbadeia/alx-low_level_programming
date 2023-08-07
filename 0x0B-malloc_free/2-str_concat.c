#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *str_concat - Function to concatenate two arrayes
 *@s1: input
 *@s2: input
 *Return: pointer
 */
char *str_concat(char *s1, char *s2)
{
	char *ptr;
	int i, j, k, c;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	i = 0;
	while (s1[i] != '\0')
	{
		i++;
	}
	j = 0;
	while (s2[j] != '\0')
	{
		j++;
	}
	i = i + j + 1;

	ptr = malloc(i * sizeof(char));

	if (ptr == NULL)
		return (NULL);
	k = c = 0;
	while (s1[c] != '\0')
	{
		ptr[c] = s1[c];
		c++;
	}
	while (s2[k] != '\0')
	{
		ptr[c] = s2[k];
		c++;
		k++;
	}
	c++;
	ptr[c] = '\0';

	return (ptr);
}
