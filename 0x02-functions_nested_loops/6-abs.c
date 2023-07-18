#include "main.h"

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
