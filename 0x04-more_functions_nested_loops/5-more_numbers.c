#include "main.h"
/**
 * more_numbers - Function to print int numbers from 0 to 14 ten times
 **/
void more_numbers(void)
{
	int i, j;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 14; j++)
		{
			_putchar(i + '0');
		}
		_putchar('\n');
	}
}
