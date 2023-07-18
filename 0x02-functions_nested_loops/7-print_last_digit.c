#include "main.h"
/**
 * print_last_digit - print the last digit of a number
 * @n: int type number
 * Return: return value of last digit
 */
int print_last_digit(int n)
{
	int lstD;

	if (n < 0)
	{
		lstD = -1 * (n % 10);
		_putchar(lstD + '0');
		return (lstD);
	}
	else
	{
		lstD = n % 10;
		_putchar(lstD + '0');
		return (lstD);
	}
}
