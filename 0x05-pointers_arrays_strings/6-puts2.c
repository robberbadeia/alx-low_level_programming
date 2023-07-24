#include "main.h"
/**
 *puts2 - Function to print string from first one
 *@str: user input string
 */

void puts2(char *str)
{
	int i, j;

	i = 0;
	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i = i + 2 ;
	}
	_putchar('\n');
}
