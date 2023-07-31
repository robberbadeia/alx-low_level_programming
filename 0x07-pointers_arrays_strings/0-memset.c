#include "main.h"
/**
 *_memset - Function to fill a memory with specific data
 *@s: user input array
 *@b: user input data
 *@n: user integer input 
 *Return: array address
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i ;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
