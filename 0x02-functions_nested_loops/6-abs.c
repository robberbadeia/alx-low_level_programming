#include "main"

int _abs(int i)
{
	if (i > 0)
	{
		_putchar(i);
	}	
	else if (i < 0)
	{
		i = i * -1;
		_putchar(i);
	}
	else
	{
		_putchar(i);
	}
}
