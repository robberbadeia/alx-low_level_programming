#include "main.h"
/**
 *puts_half - function to print the second half of string
 *@str: user input string
 */
void puts_half(char *str)
{
	int i, j, n;

	i = j = n = 0;
	while (str[i])
	{
		i++;
	}
	if (i % 2 == 0)
	{
		n = i / 2;
		for (j = n; j < i; j++)
		{
			_putchar(str[j]);
		}
	}
	else
	{
		n = (i-1) / 2;
		for (j = n+1; j < i; j++)
		{
			_putchar(str[j]);
		}
	}
	_putchar('\n');
}
