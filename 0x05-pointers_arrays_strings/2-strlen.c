#include "main.h"
/**
 *_strlen - Function returns the lenght of string
 *@s: user input string
 *Return: int value
 */
int _strlen(char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}
