#include "main.h"
/**
 *print_array - Function to prin n array elements
 *@n: user input number of elements to be printed
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i <= n; i++)
	{
		if (i = n)
		{
			printf("%d", a[i]);
		}
		else
		{
			printf("%d, ", a[i]);
		}
	}
}
