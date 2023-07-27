#include "main.h"
/**
 *cap_string - Function to convert string to upper
 *@s: user input string
 *Return: array pointer
 */
char *cap_string(char *s)
{
	int i, j;
	char ss[] = " \t\n,;.!?\"(){}}";

	i = 0;
	while (s[i] != '\0')
	{
		if (s[0] >= 'a' && s[0] <= 'z')
		{
			s[0] = s[0] - 32;
		}
		for (j = 0; s[i] == ss[j] && s[i + 1] >= 'a' && s[i + 1] <= 'z'; j++)
		{
			s[i + 1] = s[i + 1] - 32;

		}
		i++;
	}
	return (s);
}
