#include "main.h"
/**
 *_print_rev_recursion - Function to print array
 *@s: input array
 */
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}
	s++;
	_print_rev_recursion(s);
	_putchar(*s);
	if (s == 0)
	{
		return ('\n');
	}
}
