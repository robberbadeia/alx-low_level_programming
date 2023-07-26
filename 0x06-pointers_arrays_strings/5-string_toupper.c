#include "main.h"
/**
 *string_toupper - Function to change all lower case letters to upper
 *@a: user input array pointer
 *Return: array pointer
 */
char *string_toupper(char *a)
{
	int i;

	while (a[i] != '\0')
	{
		if (a[i] >= 'a' && a[i] <= 'z')
		{
			a[i] = a[i] - 32;
		}
		i++;
	}
	return (a);
}
