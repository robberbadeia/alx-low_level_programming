#include "main.h"
/**
 * _abs - compute the absolute value of an integer
 * @i: int type number
 * Return: absolute value of @n
 */
int _abs(int i)
{
	if (i > 0)
	{
		return (i);
	}
	else if (i < 0)
	{
		i = i * -1;
		return (i);
	}
	else
	{
		return (i);
	}
}
