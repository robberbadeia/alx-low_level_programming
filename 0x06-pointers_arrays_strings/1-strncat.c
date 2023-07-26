#include "main.h"
/**
 *_strncat - Function to add number of elements of src array to dest array
 *@src: user input array pointer
 *@dest: user input array pointer
 *@n: int number of moved elements from dest to src
 *Return: array pointer
 */
char *_strncat(char *dest, char *src, int n)
{
	
	int i, j;

	i = j = c = 0;
	while (dest[i])
	{
		i++;
	}
	while (src[j])
	{
		j++;
	}
	for (c = i; c < i + n; c++)
	{
		dest[c] = src[c - i];
	}
	return (dest);
}
