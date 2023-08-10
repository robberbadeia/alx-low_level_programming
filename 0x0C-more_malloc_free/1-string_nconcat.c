#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 *string_nconcat - Function to con two string
 *@s1: input
 *@s2: input
 *@n: input
 *Return: pointer
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int l1, l2, len, i, j;
	char *ptr;

	l1 = l2 = len = i = j = 0;
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[l1] != '\0')
		l1++;
	while (s2[l2] != '\0')
		l2++;
	if (n >= l2)
		len = l1 + l2 + 1;
	else
		len = l1 + n + 1;
	ptr = malloc(len * sizeof(char));

	if (ptr == NULL)
		return (NULL);

	while (s1[i] != '\0')
	{
		ptr[i] = s1[i];
		i++;
	}
	while (j < n)
	{
		ptr[i] = s2[j];
		i++;
		j++;
	}
	i++;
	ptr[i] = '\0';

	return (ptr);
}
