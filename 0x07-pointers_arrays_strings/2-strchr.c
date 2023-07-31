#include "main.h"
/**
 *_strchr - Function to find a character in array
 *@s: input array
 *@c: input char by user
 *Return: array
 */
char *_strchr(char *s, char c)
{
	int i;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			return (&s[i]);
		}
		i++;
	}
}
