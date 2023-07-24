#include "main.h"
/**
 *rev_string - Function to reverde a strin
 *@s: user input string
 */
void rev_string(char *s)
{
	int c, i;
	char k[];

	k[1000] = " ";
	while (s[c] != '\0')
	{
		c++;
	}
	c--;
	for (i = 0; i <= c; i++)
	{
		k[i] = s[c-i];
	}
}
