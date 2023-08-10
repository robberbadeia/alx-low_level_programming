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
	int l1, l2, len;

	l1 = l2 = len = 0;
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[l1] != '\0')
		l1++;
	while (s2[l2] != '\0')
		l2++;
	if (n >= l2)
		len = l1 + l2;
	else
		len = l1 + n;
	ptr = malloc(len * sizeof(char));

	if (ptr == NULL)
		return (NULL);
	l1 = l2 = 0;
	while (s1[l1] != '\0')
	{
		ptr[l1] = s1[l1];
		l1++;
	}
	while (s[l2] != '\0' && n < l2)
	{
		ptr[l1] = s2[l2];
		l1++;
		l2++;
	}
	l1++;
	ptr[l1] = '\0';

	return (ptr);
}
