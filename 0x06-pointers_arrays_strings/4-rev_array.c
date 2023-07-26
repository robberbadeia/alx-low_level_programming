#include "main.h"
/**
 *reverse_array - Function to reverse the array contents
 *@a: user array pointer input
 *@n: number of array elements
 */
void reverse_array(int *a, int n)
{
	in i;

	n--;
	for (i = 0; i <= n; i++)
	{
		a[i] = a[n - i];
	}
}
