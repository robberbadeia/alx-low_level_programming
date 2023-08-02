#include "main.h"
/**
 *_print_rev_recursion - Function to print array
 *@s: input array
 */
void _print_rev_recursion(char *s)
{
	while(*s != '\0')
	{
		s++;
		_print_rev_recursion(s);
	}
	_putchar(*s);
}
