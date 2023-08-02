#include "main.h"
/**
 *_print_rev_recursion - Function to print array 
 *@s: array
 */
void _print_rev_recursion(char *s)
{
	_putchar(*s);
	s++;
	_print_rev_recursion(s);
}
