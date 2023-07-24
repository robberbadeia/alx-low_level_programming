#include "main.h"
/**
 *rev_string - Function to reverde a strin
 *@s: user input string
 */
void rev_string(char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	i--;
	while (i >= 0)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
