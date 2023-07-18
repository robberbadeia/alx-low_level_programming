#include "main.h"
void times_table(void)
{
	int i, j, z;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			z = i * j;

			if (j == 9)
			{
				if (z > 9)
				{
					_putchar('0' + z);
					_putchar(' ');
				}
				else
				{
					_putchar('0' + z);
				}
			}
			else
			{
				if (z > 9)
				{
					_putchar(z / 10 + '0');
					_putchar(z % 10 + '0');
					_putchar(',');
					_putchar(' ');
				}
				else
				{
					_putchar('0' + z);
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
				}
			}

		}
		_putchar('\n');
	}


}
