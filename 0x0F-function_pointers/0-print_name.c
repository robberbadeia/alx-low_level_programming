#include "function_pointers.h"
#include <stdio.h>
/**
 *print_name - Function to print name
 *@name: char input
 *@f: input function to print name
 */
void print_name(char *name, void (*f)(char *))
{
	if (name & f)
	{
		f(name);
	}
}
