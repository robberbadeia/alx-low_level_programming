#include <stdio.h>
#include "function_pointers.h"
/**
 *int_index - Function
 *@array: input
 *@size: input
 *@cmp: input
 *Return: int
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
		return (-1);
	if (array && cmp)
	{
		for (i = 0; i <= size; i++)
			if (cmp(array[i]))
				return (i);
	}
	return (-1);
}
