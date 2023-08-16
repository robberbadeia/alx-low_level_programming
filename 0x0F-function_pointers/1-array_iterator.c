#include "function_pointers.h"
/**
 *array_iterator - Function to print int elements
 *@array: input
 *@size: input
 *@action: input function
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;
	
	if (array && action)
	{
		for (i = 0; i < size; i++)
			action(array[i]);
	}

}
