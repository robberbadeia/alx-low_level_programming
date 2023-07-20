#include "main.h"
/**
 * print_number - Function to print number entered by user
 * @n: int number variable
*/
void print_number(int n)
{
	if(n >= 0)
	{
		if(n <= 9)
		{
			_putchar('n');
		}
		else
		{
			_putchar((n / 10) + '0');
			_putchar((n % 10) + '0');
		}
	}
	else
	{
		if (n >= -9)
		{
			_putchar('-');
			_putchar(n);
		}
		else
		{
			_putchar('-');
			_putchar((n / 10) + '0');
			_putchar((n % 10) + '0');
		}
	}

}
