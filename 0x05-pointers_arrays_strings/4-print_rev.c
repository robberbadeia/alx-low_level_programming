#include "main.h"
/**
 *print_rev - Function to print string in reverse order
 *@s: user input string
 */
void print_rev(char *s)
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
		i--;
	}
	_putchar ('\n');
}
