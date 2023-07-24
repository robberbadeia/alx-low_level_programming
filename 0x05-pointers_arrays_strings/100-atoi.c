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
		if (s[i] >= 0)
		{
			return (s[i]);
		}
	}
}
