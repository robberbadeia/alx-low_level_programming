#include "main.h"
/**
 *_strspn - Function to calculate string matches characters
 *@s: input array
 *@accept: input array
 *Return: count
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j, n;

	i = n = 0;
	while (s[i] != '\0')
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				n++;
				break;
			}
		}
		if (s[i] != accept[j] && accept[j] == '\0')
		{
			break;
		}
		i++;
	}
	return (n);

}
