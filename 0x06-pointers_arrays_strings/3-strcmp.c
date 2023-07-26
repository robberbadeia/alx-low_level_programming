#include "main.h"
/**
 *_strcmp - Function to compare to arrays
 *@s1: user input array pointer
 *@s2: user array pointer
 *Return: integer number
 */
int _strcmp(char *s1, char *s2)
{
	int i, n;

	i = n = 0;
	for (i = 0; s1[i] != '\0' || s2[i] != '\0'; i++)
	{
		n = n + s1[i] - s2[i];
	}
	return (n);
}
