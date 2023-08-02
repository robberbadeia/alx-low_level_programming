#include "main.h"
/**
 *_strlen_recursion - Function to count string lenght
 *@s: input array
 *Return: int
 */
int _strlen_recursion(char *s)
{
	if (*s != '\0')
	{
		s++;
		return (1 + _strlen_recursion(s));
	}
}
