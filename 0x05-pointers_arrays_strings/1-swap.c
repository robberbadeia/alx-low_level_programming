#include "main.h"
/**
 *swap_int - Function to swap two integers
 *@a: int type pointer
 *@b: int type pointer
 */
void swap_int(int *a, int *b)
{
	int z;

	z = *a;
	*a = *b;
	*b = z;
}
