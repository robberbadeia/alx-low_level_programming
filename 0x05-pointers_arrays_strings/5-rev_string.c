#include "main.h"
/**
 *rev_string - Function to reverde a strin
 *@s: user input string
 */
void rev_string(char *s)
{
	int c, i;
	char *l;

	l[1000] = "";
	c = 0;
	while (s[c] != '\0')
	{
		c++;
	}
	c--;
	for (i = 0; i <= c; i++)
	{
		l[i] = s[c-i];
	}
	l[i++] = '\0';
}
