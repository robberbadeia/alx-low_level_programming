#include "main.h"
/**
 *wildcmp - Function to check string
 *@s1: input
 *@s2: input
 *Return: int
 */
int wildcmp(char *s1, char *s2)
{
	if (*s1 != *s2 && *s2 != '*')
		return (0);
	if (*s1 == *s2 && *s1 != '\0')
		return (wildcmp(s1 + 1, s2 + 1));
	if (*s1 != *s2 && *s2 == '*')
		return (wildcmp(s1 + 1, s2));
	return (1);
}
