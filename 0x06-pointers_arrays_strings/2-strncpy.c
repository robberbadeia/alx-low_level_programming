#include "main.h"
/**
 *_strncpy - Function to copy @n of src array elements to dest array
 *@src: user array pointer
 *@dest: user array pointer
 *Return: @dest array pointer
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	i = 0;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
