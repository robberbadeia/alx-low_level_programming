#include "main.h"
/**
 *
 *
 *
 *
 *
 *
 *
 */
char *_strchr(char *s, char c)
{
	int i, add;

	add = 0;
	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
		{
			add = &s[i];
			break;
		}
	}
	if (add == 0)
	{
		return ('\0');
	}
	else
	{
		return (add);
	}
}
