#include "main.h"
/*
 * _islower : function to check wethear character lower case or not
 * Return 1 if lowercase else 
 * Return 0
 */
int _islower(int c)
{
	int i;

	for (i = 97; i <= 122; i++)
	{
		if (i == c)
		{
			return (1);
		}
		else
		{
			return (0);
		}
	}
	_putchar('\n');
}
