#include "main.h"
/**
 *_strcat - Function to append src char array to dest array
 *@src: user char array input
 *@dest: user char array input
 *Return: char array pointer
 *
 */
char *_strcat(char *dest, char *src)
{
	int i, j, n;

	i = j = n = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[j] != '\0')
	{
		j++;
	}

	for (n = i; n <= j; n++)
	{
		dest[n] = src[n - i];
	}
	return (dest);
}
