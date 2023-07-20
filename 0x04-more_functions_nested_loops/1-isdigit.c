#include "main.h"

/**
 * _isdigit - Function to check for the input digit or not
 * @c - int type variable
 * Return: 1 if digit or 0 if not
 **/

int _isdigit(int c)
{
	if (c >= 0 && c <= 9)
		return (1);
	else
		return (0);
}
