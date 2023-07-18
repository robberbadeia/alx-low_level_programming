#include "main.h"
/*
 *_abs function
 *@i : is an integer value
 *Return : the absolute value of @i
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
