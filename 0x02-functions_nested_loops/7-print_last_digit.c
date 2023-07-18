#include "main.h"
/*
 * print_last_digit - function to print last digit of a number
 * @n: number entered by user
 * Return: value of the last digit
 */
int print_last_digit(int n)
{
	int lstD;

	lstD = n % 10;

	return (lstD);
}
