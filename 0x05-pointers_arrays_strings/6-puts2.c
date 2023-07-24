#include "main.h"
/**
 *
 *
 *
 *
 *
 */

void puts2(char *str)
{
	int i, j;

	i = 0;
	j = 0;
	while(str[i] != '\0\)
	{
		i++;
	}
	i--;

	for (j = 0; j <= i, j+2)
	{
		_putchar(str[j]);
	}
	_putchar('\0');
}
