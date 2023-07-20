#include "main.h"

/*
 * _isupper - Function to check weather the input n upper case or not
 * @c: int type variable
 * Return: 1 in case upper otherwise return 0
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	return (1);
	else
	return (0);
}
