#include "main.h"
/**
 *_strpbrk - Function to find first match
 *@s: input
 *@accept: input
 *Return: array
 *
 *
 *
 *
 *
 *
 */
char *_strpbrk(char *s, char *accept)
{
	int i, j, *add;

	i = add = 0;
	while (s[i] != '\0')
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				add = &s[i];
				break;
			}
		}
		if (add != 0)
			break;
		i++;
	}
	return (&s[i]);
}
