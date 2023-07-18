#include "main.h"
/*
 * print_to_98 - Function to start print numbers from @n to 98
 * @n: int type number
 */
void print_to_98(int n)
{
	while(n <= 98)
	{
		if (n > 9 && n < 98)
		{
			_putchar(' ');
			_putchar(n / 10 + '0');
			_putchar(n % 10 + '0');
			_putchar(',');
		}
		else if (n == 98)
		{
			_putchar(' ');
			_putchar(n / 10 + '0');
			_putchar(n % 10 + '0');
		}
		else
		{
			_putchar(n);
			_putchar(',');
		}
		n++;
	}
}
