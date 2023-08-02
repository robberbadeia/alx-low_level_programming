#include "main.h"
/**
 *checker - Function to cheack weather number is prime or not
 *@i: input
 *@b: int
 *Return: int
 */
int checker(int i, int b)
{
	if (n <= 1)
		return (0);
	if (n == 2 || n == 3)
		return (1);
	if (n % 2 == 0 || n % 3 == 0)
		return (0);
	if (i < n && n % i == 0)
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
