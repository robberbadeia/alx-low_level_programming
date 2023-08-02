#include "main.h"
/**
 *checker - Function to cheack weather number is prime or not
 *@i: input
 *@b: int
 *Return: int
 */
int checker(int i, int b)
{
	if (b <= 1)
		return (0);
	if (b == 2 || b == 3)
		return (1);
	if (b % 2 == 0 || b % 3 == 0)
		return (0);
	if (i < b && b % i == 0)
		return (0);
	checker(i + 1, b);
}
/**
 *is_prime_number - Function to check numbers
 *@n: int
 *Return: int
 */
int is_prime_number(int n)
{
	return (checker(1, n));
}
