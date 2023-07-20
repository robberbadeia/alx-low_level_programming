#include "main.h"

/**
 * print_square - Function to print square with '#'
 * @size: int number variable
**/

void print_square(int size)
{
	if (size > 0)
	{
		int i;

		for (i = 0; i < size; i++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
	_putchar('\n');
}
