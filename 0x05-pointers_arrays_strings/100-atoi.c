#include "main.h"
/**
 *
 *
 *
 */
int _atoi(char *s)
{
	int i, n;
	
	n = 0;
	for (i = 0; s[i] != '\0'; i++)
	{
		n = n * 10 + (s[i] - 48);
		return n;
	}

	return 0;
}
