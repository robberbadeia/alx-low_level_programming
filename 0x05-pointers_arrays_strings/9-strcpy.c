#include "main.h"
/**
 *_strcpy - Function to copy string from source to detination
 *@src: user input string
 *@dest: destination will string copied to
 *Return: the value of @dest
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i++] = '\0';
	return (dest);
}
