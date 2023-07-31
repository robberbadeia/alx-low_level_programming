#include "main.h"
/**
 *_strstr - Function
 *@haystack: input
 *@needle: input
 *Return: array
 *
 *
 *
 */
char *_strstr(char *haystack, char *needle)
{
	int i, j;

	i = j = 0;
	while (haystack[i] != '\0')
	{
		if (haystack[i] == needle[j])
		{
			while (haystack[i + j] == needle[j] && needle[j] != '\0')
			{
				j++;
			}
			return (haystack + i);
		}
		i++;
	}
	return ('\0');
}
