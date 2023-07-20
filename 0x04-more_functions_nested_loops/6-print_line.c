#include "main.h"

/**
 * print_line - Function to print @n of '_'
 *@n : integer number 
 **/

void print_line(int n)
{
	if(n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		while(n > 0)
		{
			_putchar('_');
			i--;
		}
		_putchar('\n');
}
