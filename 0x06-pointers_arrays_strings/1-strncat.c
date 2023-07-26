#include "main.h"
/**
 *_strncat - Function to append n elements from src array to dest array
 *@src: user input array pointer
 *@dest: user input arra pointer
 *Return: array pointer
 */
char *_strncat(char *dest, char *src, int n)
{
	
	int i, j, n;

	i = j;
	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[j] != '\0')
	{
		j++;
	}

	for (c = i; c < n; c++)
	{
		dest[c] = src[c - i];
	}
}
