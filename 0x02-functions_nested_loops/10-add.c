include "main.h"

int add(int i, int j)
{
	int z;

	z = i + j;
	if (z > 9)
	{
		_putchar(z / 10 + '0');
		_putchar(z % 10 + '0');
		return (z);
	}
	else
	{
		_putchar(z + '0');
		return (z);
	}
}
