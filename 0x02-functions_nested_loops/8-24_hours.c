#include "main.h"


void jack_bauer(void)
{
	int i, j;

	for (i = 0; i <= 23; i++)
	{
		for (j = 0; j < 60; j++)
		{
			if (i < 10)
			{
				if (j < 10)
				{
					_putchar('0');
					_putchar(i + '0');
					_putchar(':');
					_putchar('0');
					_putchar(j + '0');
					_putchar('\n');
				}
			}
			else
			{
				if (j < 10)
				{
					_putchar(i + '0');
					_putchar(':');
					_putchar('0');
					_putchar(j + '0');
					_putchar('\n');
				}
				else
				{
					_putchar(i + '0');
					_putchar(':');
					_putchar(j + '0');
					_putchar('\n');
				}
			}
		}
	}
}
