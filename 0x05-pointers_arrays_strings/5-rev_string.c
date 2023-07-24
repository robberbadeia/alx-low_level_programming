#include "main.h"
/**
 *rev_string - Function to reverde a strin
 *@s: user input string
 */
void rev_string(char *s)
{
	int c, i;
	char k;

	c = 0;
	while (s[c] != '\0')
	{
		c++;
	}
	c--;
	for (i = 0; i <= c; i++)
	{
		k  = s[i];
		s[i] = s[c];
		s[c] = k;
	}
	s[i++] = '\0';
}
