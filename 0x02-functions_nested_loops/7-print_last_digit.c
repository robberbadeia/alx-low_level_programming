#include "main.h"
/*
 * print_last_digit - function to print last digit of a number
 * @n: number entered by user
 * Return: value of the last digit
 */
int print_last_digit(int n)
{
	int lstD;

	if (n >= 0 && n <= 9)
	{
		_putchar(n + '0');
		return (n);
	}else if (n < 0)
	{
		n = n * -1;
		lstD = n% 10;
		_putchar(lstD);
		return (lstD);
	}
	else
	{	lstD = n % 10;
		_putchar(lstD);
		return (lstD);
	}
}
