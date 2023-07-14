#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Determines if a number is positive, negative or zero.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	lstDigit = n % 10;
	if (n > 5)
	{
		printf("Last digit of %d is %d and is greater than 5", n, lstDigit);
	}
	else if (n == 0)
	{
		printf("Last digit of %d is %d and is 0", n, lstDigit);
	}
	else if (n != 0 && n < 6)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0", n, lstDigit);
	}
	return (0);
}
