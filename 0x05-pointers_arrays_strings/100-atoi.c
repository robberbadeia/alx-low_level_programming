#include "main.h"
/**
 *
 *
 *
 */
int _atoi(char *s)
{
	int c, i;

	c = 0;
	while (s[c] != '\0')
	{
		c++;
	}

	for (i = 0; i < c; i++)
	{
		if (s[i] >= 0 && s[i] <= 9)
		{
			return (s[i]);
		}
	}
	return (0);
}
