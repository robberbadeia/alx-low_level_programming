#include "main.h"
/**
 *_memcpy - Function to copy array content to another array
 *@src: user input array
 *@dest: user destination array
 *@n: array size
 *Return: dest array
 *
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
