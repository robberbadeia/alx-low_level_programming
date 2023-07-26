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
	int i, c;

	i = 0;
	while (dest[i])
	{
		i++;
	}
	for (c = 0; c < n && src[c] != '\0'; c++)
	{
		dest[i + c] = src[c];
	}
	return (dest);
}
