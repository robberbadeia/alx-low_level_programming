#include "main.h"
/**
 *
 *_puts - Function to print string
 *@str: user input string
 *
 */
void _puts(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
