#include "main.h"
/**
 * times_table - Print the 9 times table, starting with 0
 * Return: 0
 */
void print_times_table(int n)
{
	int x = 0; /* factor */
	int y; /* count  */
	int z; /* computed value */
	
	if (n >= 0 && n <= 15)
	{
		while (x <= n)
		{
			y = 0;
			while (y <= n)
			{
				z = x * y;

				if (z > 9)
				{
					_putchar(z / 10 + '0');
					_putchar(z % 10 + '0');
				}
				else if (y != 0)
				{
					_putchar(' ');
					_putchar(z + '0');
				}
				else
				{
					_putchar(z + '0');
				}

				if (y != 9)
				{
					_putchar(',');
					_putchar(' ');
				}
				y++;
			}
			_putchar('\n');
			x++;
		}
	}
	else
	{
		break;
	}
}
